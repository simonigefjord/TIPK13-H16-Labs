// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int throwDie(int n);
int addMoney(int currentMoney, int winnings, char* message);

int main(void)
{
	srand((int)time(NULL));
	int money = 100;

	bool playing = true;

	while (playing)
	{
		int currentMoney = money;

		printf("You have %d kr.\n", currentMoney);
		printf("Press enter to roll (cost: 10 kr).");

		while (getchar() != '\n');

		if (currentMoney < 10)
		{
			printf("You don't have enough money!\n");
			printf("Press enter to exit...");
			while (getchar() != '\n');
			playing = false;
			break;
		}

		currentMoney -= 10;
		system("cls");

		int results[3];
		for (int i = 0; i < 3; i++)
		{
			results[i] = throwDie(6);
			printf("%d ", results[i]);
		}

		bool pair = false;
		for (int i = 0; i < 3; i++)
			for (int j = i + 1; j < 3; j++)
				if (results[i] == results[j])
				{
					pair = true;
				}

		if (results[0] == results[1] == results[2] == 6)
			currentMoney = addMoney(currentMoney, 100, "for getting three sixes");
		else if (results[0] == results[1] == results[2])
			currentMoney = addMoney(currentMoney, 50, "for getting triples");
		else if (pair) currentMoney = addMoney(currentMoney, 10, "for getting a pair");
		else printf("\nYou didn't win.");

		printf("\n");
		money = currentMoney;
	}

	return 0;
}

int throwDie(int n)
{
	return rand() % n + 1;
}

int addMoney(int currentMoney, int winnings, char* message)
{
	printf("\nYou won %d kr %s!", winnings, message);
	return currentMoney + winnings;
}