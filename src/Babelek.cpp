
#include <iostream>
#include "Babel.h"

int main()
{
	int array[6]{ 2,19,4,42,1,3 };
	BubbleSort<int, sizeof(array) / sizeof(int)>(array);
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
		std::cout << array[i] << std::endl;
}


