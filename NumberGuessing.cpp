#include "NumberGuessing.h"

NumberGuessing::NumberGuessing()
{

}

void NumberGuessing::generateRandomNumber()
{
	srand(time(0));
	correctNumber = rand()%(100)+1;//between 1 and 100
}

void NumberGuessing::setGuessedNumber(int guessedNumber)
{
	this->guessedNumber = guessedNumber;
}

void NumberGuessing::Game(int number)
{
	int count = 1;
	generateRandomNumber();
	if (number == correctNumber) 
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Wow!CORRECT GUESSING FROM FIRST ONE\n";
		SetConsoleTextAttribute(hConsole, 7);
		return;
	}
	while (number!=correctNumber)
	{
		count++;
		if(correctNumber>number)
		{
			if (correctNumber - number >=50)
				cout << "WRONG GUESSING ): , TOO LOW\n";
			else if(correctNumber - number >= 20)
				cout << "WRONG GUESSING ):, LOW\n";
			else cout << "WRONG GUESSING ): , LITTLE LOW\n";

		}
		else
		{
			if (number-correctNumber >= 50)
				cout << "WRONG GUESSING ): , TOO HIGH\n";
			else if (number - correctNumber >= 20)
				cout << "WRONG GUESSING ): , HIGH\n";
			else cout << "WRONG GUESSING ): , LITTLE HIGH\n";
		}
		cout << "\nGUESS THE NUMBER AGIAN: ";cin >> number;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "CORRECT!,THE COORECT NUMBER IS " << correctNumber << endl;
	cout << "YOU REACHED THE CORRECT NUMBER AFTER " << count << " TIMES\n";
	SetConsoleTextAttribute(hConsole, 7);

}
