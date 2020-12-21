#include <getopt.h>
#include <iostream>

//#include <stdio.h>
//#include <stdlib.h>

int getopt(int argc, char * const argv[],
       const char *optstring);

extern char *optarg;
extern int optind, opterr, optopt;

int main(int argc, char **argv)

{
	int next_opt = -1;
	const char* short_opt = "o:Ovz:";
	const /*struct*/ option long_opt[] = 
	{
		{"o_with_param", 1, NULL, 'o'},
		{"O_without_param", 0, NULL, 'O'},
		{"v_without_param", 0, NULL, 'v'},
		{"z_with_param", 1, NULL, 'z'},
        {0,0,0,0}
	};

	do{
		next_opt = getopt_long(argc, argv, short_opt, long_opt, NULL);
		switch(next_opt)
		{
			case 'o':
                std::cout << "o param index " << optind<< " param: " << optarg << "\n";
				break;
			case 'O':
                std::cout << "O no param | index " << optind << "\n";//(long int)optarg<<"\n";          
				break;
			case 'v':
                std::cout << "v no param | index " << optind << "\n";//(long int)optarg<<"\n";            
				break;
			case 'z':
                std::cout << "z w param  index " << optind<< " param: " << optarg << "\n";
				break;
			case '?':
                std::cout << "error param \n";
				break;
			case -1:
                std::cout << "end param parsing index "<< optind << "\n"; //(long int)optarg<<"\n";            
				//no more params to parse
				break;
			default:
                std::cout << "should never be here \n";            
				//should newer be here
				break;
		}
	}while (next_opt != -1);

/*    std::cout <<"writing params "  <<argc << "\n";

	for (int i = 0; i < argc; ++i)
    {
        std::cout <<  argv[i] << "\n";
	}
*/
    return 0;
}
