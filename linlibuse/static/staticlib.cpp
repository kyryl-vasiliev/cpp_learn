// create object file staticlib.o
// gcc -c staticlib.cpp
// create static library libfirst.a to use it use link param -lfirst in call app
// ar crs libfirst.a ./staticlib.o 


int testFunction()
{
	return 199;
}
