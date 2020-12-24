#include <iostream>
// compilation gcc -c uselib,cpp
// compilation gcc -o main uselib.o -lstdc++ -L . -lfirst
//
// -lfirst = our staticlibrary named libfirst.a
// -L . = look for library in current directory
// -lstdc++ = linc with standart c++ library (or just use g++)
int testFunction();
int main(int argc, char**argv)
{
	std::cout << testFunction();
	return 0;
}
