#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int getRandomNumber(int min = 0, int max = 100)
{
	srand(static_cast<unsigned int>(time(0)));
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void HiLo() 
{	
	int randValue = getRandomNumber();
	cout << "Let's play a game. I'm thinking of a number. You have 7 tries tu guess what it is \n";
	
	int sum = 0;
	for (int count = 1; count <= 7; ++count)
	{	
		int value;
		cin >> value;

		if (value < randValue)
		{
			cout << "Your guess is too low \n";
		}
		else if (value > randValue)
		{
			cout << "Your guess is too high \n";
		}
		else if (value = randValue)
		{
			cout << "Correct! You win! \n";
			break;
		}
		else
		{
			cout << "Sorry, you lose. The correct number was " << randValue;
		}

		sum += count;

		cout << "Guess #"<< count << " " << value << "\n";
		
	}

	while (true)
	{
		cout << "Would you like to play again (y/n)? ";
		char answer;
		cin >> answer;
		cin.ignore(32767, '\n');

		switch (answer)
		{
		case 'y':
			return HiLo();
		case 'n':
			cout <<"Thank you for playing ";
			break;
		}

		return;
	}

}

int main() {
	HiLo();
}