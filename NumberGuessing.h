#pragma once
#include<iostream>
#include<cstdlib>
#include<Ctime>
#include <windows.h>

using namespace std;
class NumberGuessing
{
private:
	int correctNumber;
	int guessedNumber;
public:
	NumberGuessing();
	void generateRandomNumber();
	void setGuessedNumber(int guessedNumber);
	void Game(int number);

};

