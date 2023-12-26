#include <iostream>
using namespace std;

int main ()
{
	//Random numbers Guessing game 1-10
	cout << "-----------------------------------------------" << endl;
	cout << "              Number Guess Game                " << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "You have Three Chances to Guess a Number!" << endl;
	int guess = 0;
	int win = 0;
	while (true)
	{
		int random = rand() % 10 + 1;
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter Your guess(1-10): ";
			cin >> guess;
			if (guess == random)
			{
				cout << "You Win!"<<endl;
				win++;
				break;
			}
			else
			{
				cout << "Guess Again" << endl;
			}
		}
		if (win == 0)
		{
			cout << "The Number Was: " << random << endl;
		}
		char response;
		cout << "Do you want to play again press(Y for yes/N for No): ";
		cin >> response;
		if (response == 'N' || response == 'n')
		{
			cout << "Thanks for Playing! " << endl;
			break;
		}
	}
}