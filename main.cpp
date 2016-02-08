#include <iostream>
using namespace std;


int rpsGame(int x, int y)
{
	//Rock Paper Scissors
	//Rock = 1, Scissors = 2, Paper = 3

	//Check for tie
	if (x != y)
	{
		switch (x) {
		case 1:
			if (y == 2)
			{
				cout << "Congratulations Player 1, a winner is you!";
				break;
			}
			else if (y == 3)
			{
				cout << "Congratulations Player 2, a winner is you!";
				break;
			}
		case 2:
			if (y == 1)
			{
				cout << "Congratulations Player 2, a winner is you!";
				break;
			}
			else if (y == 3)
			{
				cout << "Congratulations Player 1, a winner is you!";
				break;
			}
		case 3:
			if (y == 1)
			{
				cout << "Congratulations Player 1, a winner is you!";
				break;
			}
			else if (y == 2)
			{
				cout << "Congratulations Player 2, a winner is you!";
				break;
			}
		}
	}
	else
	{
		cout << "It's a tie!";
	}
	return 0;
}

int main()
{
	short int p1;
	short int p2;
	cout << "Player 1 - enter 1 for rock, 2 for scissors, or 3 for paper: ";
	cin >> p1;
	cout << "\nPlayer 2 - enter 1 for rock, 2 for scissors, or 3 for paper: ";
	cin >> p2;

	rpsGame(p1, p2);

	//Cross-platform pause
	cin.ignore();
	cin.get();
	return 0;
}
