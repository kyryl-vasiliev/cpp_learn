// g++ -o main stack_heap.cpp
// ./main

#include <iostream>

int main()
{
	int stack_var = 123;
	int* stack_ptr_to_stack_var = &stack_var;
	int** heap_ptr_to_stack_var = new (int *)(&stack_var);
	std::cout << "value on stack\n";
	std::cout <<"address of stack pointer | value of stack pointer | what on memory location\n";
	std::cout << &stack_ptr_to_stack_var<<" "<< stack_ptr_to_stack_var <<" "<< *stack_ptr_to_stack_var <<"\n";
	std::cout <<"address of heap pointer | value of heap pointer | pointer to pointer | what on memory location\n";
	std::cout << &heap_ptr_to_stack_var <<" "<< heap_ptr_to_stack_var <<" " <<*heap_ptr_to_stack_var <<" "<< **heap_ptr_to_stack_var <<"\n";
	delete heap_ptr_to_stack_var;

	std::cout << "\n";

	int *heap_var = new int(1234);
	int* stack_ptr_to_heap_var = heap_var;
	int** heap_ptr_to_heap_var = new (int *)(heap_var);
	std::cout << "value on heap\n";
	std::cout <<"address of stack pointer | value of stack pointer | what on memory location\n";
	std::cout << &stack_ptr_to_heap_var <<" "<< stack_ptr_to_heap_var <<" "<< *stack_ptr_to_heap_var <<"\n";
	std::cout <<"address of heap pointer | value of heap pointer | pointer to pointer | what on memory location\n";
	std::cout << &heap_ptr_to_heap_var <<" "<< heap_ptr_to_heap_var <<" "<< *heap_ptr_to_heap_var <<" "<<**heap_ptr_to_heap_var <<"\n";
	delete heap_ptr_to_heap_var;
	delete heap_var;
	std::cout << "done\n";
}
