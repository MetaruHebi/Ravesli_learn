#include <iostream>

using std::cout;
using std::cin;

namespace Animals 
{
	enum Animals 
	{
		CHICKEN,
		LION,
		GIRAFFE,
		ELEPHANT,
		DUCK,
		SNAKE,
		MAX_ANIMALS
	};
}

int main() {
	int array[Animals::MAX_ANIMALS] = { 2, 4, 4, 4, 2, 0 };
	cout << "The number of legs of an elephant " << array[Animals::ELEPHANT];
}