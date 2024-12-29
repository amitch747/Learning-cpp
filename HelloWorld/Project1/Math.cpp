#include <iostream>
#include "Log.h"


int Multip(int a, int b)
{
	Log("Multip");
	return a * b;
	
} 

int main()
{
	std::cout << Multip(10, 90) << std::endl;
	std::cin.get();
}