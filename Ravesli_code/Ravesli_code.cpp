//Test of lesson No. 79, Task 1.
//Display the following array using a loop: int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };

#include <iostream>

using std::cout;
using std::cin;

int main() {
	int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	const int allArray = sizeof(array) / sizeof(array[0]);
	int number = 0;
	for (int index = 0; index < allArray; ++index) {
		number = array[index];
		cout << number << " ";
	}
}