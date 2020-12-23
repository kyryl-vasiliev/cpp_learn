//lists current environment
//
//g++ environment.cpp -o environment // default linkage with standart lib
//or
//gcc environment.cpp -lstdc++ -o environment


#include <iostream>


//in linux environ global variable are all environment vars

extern char** environ;

int main()
{
	for(auto var = environ; *var != NULL; ++var)
	{
		std::cout << *var << '\n';
	}
	return 0;
}
