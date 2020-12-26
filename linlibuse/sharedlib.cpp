//gcc -fPIC -c sharedlib.cpp
//ld -shared -soname libsharedlib,so.1 -o libsharedlib,so,1,0 ./sharedlib.
//
//
int testFunction2()
{
	return 999;
}
