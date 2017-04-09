#include <stdio.h>
#include <stdlib.h>

int selection()
{
	int c;
	scanf_s("%d", &c);
	return c;
}

void invalidchoice()
{
	printf("Invalid choice, try again\n");
}

void displaymainmenu()
{
	printf("Main menu\n");
	printf("1. Option 1\n");
	printf("2. Option 2\n");
	printf("3. Exit\n");
	printf("Please choose\n");
}


void displayoption2menu()
{
	printf("Option2 menu\n");
	printf("1. Option C\n");
	printf("2. Option D\n");
	printf("3. Back\n");
	printf("Please choose\n");	
}

void operationoption2menu()
{
	jump:
	int c = selection();
	if (c == 1)
	{
		printf("Option C consists of...\n");
		printf("Press 3 to Return\n");
		int c = selection();
		if (c == 3)
		{
			displayoption2menu();
			goto jump;
		}
	}
	else if (c == 2)
	{
		printf("Option C consists of...\n");
		printf("Press 3 to Return\n");
		int c = selection();
		if (c == 3)
		{
			displayoption2menu();
			goto jump;
		}
	}
	else if (c == 3)
	{
		displaymainmenu();
	}
	else
	{
		invalidchoice();
	}
}

void displayoption1menu()
{
	printf("Option1 menu\n");
	printf("1. Option A\n");
	printf("2. Option B\n");
	printf("3. Back\n");
	printf("Please choose\n");
}

void operationoption1menu()
{
	jump:
	int c = selection();
	if (c == 1)
	{
		printf("Option A consists of...\n");
		printf("Press 3 to Return\n");
		int c = selection();
		if (c == 3)
		{
			displayoption1menu();
			goto jump;
		}
	}
	else if (c == 2)
	{
		printf("Option B consists of...\n");
		printf("Press 3 to Return\n");
		int c = selection();
		if (c == 3)
		{
			displayoption1menu();
			goto jump;
		}
	}
	else if (c == 3)
	{
		displaymainmenu();
	}
	else
	{
		invalidchoice();
	}

}

void main()
{
	displaymainmenu();
	jump:
	int c = selection();
	if (c == 1)
	{
		displayoption1menu();
		operationoption1menu();
	}
	else if (c == 2)
	{
		displayoption2menu();
		operationoption2menu();
	}
	else if (c == 3)
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		invalidchoice();
	}
	goto jump;

}

