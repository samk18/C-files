#include <stdarg.h>
#include <stdio.h>
#include <type_traits>
#include <iostream>
#define amj(y) int y(void)

amj(s)
{
    int a;
  

std::cout<<"Task::Constructor"<<std::endl;
return 3;
}

int main()
{
	int a=amj(s);
	

	return 0;
}