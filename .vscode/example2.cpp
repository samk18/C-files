// C program for the above approach

#include <stdarg.h>
#include <stdio.h>
#include <type_traits>
#include <iostream>

// Variadic function to add numbers

void print(int a, ...)
{
    cout << "I am empty function and "
            "I am called at last.\n" ;
}


int AddNumbers(int n, ...)
{
	int Sum = 0;

	// Declaring pointer to the
	// argument list
	va_list ptr;
    print(n, ...);
	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		// Accessing current variable
		// and pointing to next one
		Sum += va_arg(ptr, int);

	// Ending argument list traversal
	va_end(ptr);

	return Sum;
}

// Driver Code
int main()
{
	AddNumbers(2, 1, 2);

	return 0;
}
