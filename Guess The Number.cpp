
#include <windows.h>
#include <iostream>
#include <limits>
#include <iomanip>
#include "NumberGuessing.h"


using namespace std;

void Interface()
{ 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "			=========================================\n";
	SetConsoleTextAttribute(hConsole, 10);

	cout << "				GUESS NUMBER BETWEEN 0 AND 100  \n";
	SetConsoleTextAttribute(hConsole, 7);

	cout << "			=========================================\n";

	NumberGuessing game;
	int number;
	char playing = 13;
	while (playing != 48)
	{

		cout << "GUESS THE NUMBER:";cin >> number;
		game.Game(number);

		cout << "PRESS ANY KEY TO PLAY AGAIN,0 TO EXITE THE GAME\n";
		//cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
		//playing = cin.get();
		cin >> playing;
	}
}

void displayWord() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14); // Set text color to yellow (14)
	std::cout << " _   _                 _                  ____                     _                ____                      \n";
	std::cout << "| \\ | |_   _ _ __ ___ | |__   ___ _ __   / ___|_   _  ___  ___ ___(_)_ __   __ _   / ___| __ _ _ __ ___   ___ \n";
	std::cout << "|  \\| | | | | '_ ` _ \\| '_ \\ / _ \\ '__| | |  _| | | |/ _ \\/ __/ __| | '_ \\ / _` | | |  _ / _` | '_ ` _ \\ / _ \\\n";
	std::cout << "| |\\  | |_| | | | | | | |_) |  __/ |    | |_| | |_| |  __/\\__ \\__ \\ | | | | (_| | | |_| | (_| | | | | | |  __/\n";
	std::cout << "|_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|     \\____|\\__,_|\\___||___/___/_|_| |_|\\__, |  \\____|\\__,_|_| |_| |_|\\___|\n";
	std::cout << "                                                                            |___/                               \n";
	SetConsoleTextAttribute(hConsole, 7); // Reset text color to default (7)

}
void loading(int n)
{

	for (int i = 0; i <= n; i++)
	{
		displayWord();

		cout << "\n\n\n\n\n\n\n\n\n\n" << setw(65) << "PLEASE WAIT FEW SECONDS ";
		for (int j = 0; j < i; j++)
		{
			cout << ".";
		}
		cout << endl;
		Sleep(100); // delay for 100 milliseconds
		system("cls"); // clear the console
	}

}


int main()
{
	loading(20);
	Interface();

	cout<<"THANKS FOR PLAYING MY GAME\n";
	Sleep(100); // delay for 100 milliseconds

	return 0;
}

