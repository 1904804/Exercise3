#define _CRT_SECURE_NO_WARNINGS //include at top of program
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//initialize constant variable
#define euroConversion 1.15





void main()
{
	float prices[20];
	float totalPrice = 0.00;
	float convertedPrice;
	int option = 6;//set one above the last option
	int arrayPostion = 0;
	int i;
	

	
	while (option != 5)
	{

		printf_s("Welcome to Julian`s price convesion program. \n Please choose an option from the menu below\n");
		printf_s("1. Add price to the system.\n");
		printf_s("2. List all current prices stored.\n");
		printf_s("3. Get the total of the prices you have entered.\n");
		printf_s("4. Convert the total to Euro`s.\n");
		printf_s("5. Exit the program.\n");


		scanf_s("%d", &option);//capture option choice
		//printf_s("%d", option);//testing
		switch (option)
		{
		case 1://allows the user to enter a price
			if (arrayPostion < 20) {//protection to make sure no more than than the arry can be entered.
				printf_s("Please enter the price you would like to add - \n");
				scanf_s("%f", &prices[arrayPostion]);

				arrayPostion = arrayPostion + 1;
			}
			else {
				printf_s("You are not able to enter any more prices sorry.\n");
			}
			
			
			break;
		case 2://Lists all the current entires 
			printf_s("This is a list of all the prices you have stored.\n");
			for (i = 0; i <= arrayPostion - 1; i++)//loops through the array and displays all the entries
			{
				printf_s("Entry %d is \x9C%.2f \n\n\n\n", i +1, prices[i]);
			}
			break;
		case 3://prints out the total prices
			
			for (i = 0; i <= arrayPostion -1; i++)
			{
				totalPrice = totalPrice + prices[i];
			}
			printf_s("The total price for %d entries is \x9C%.2f \n\n\n\n", arrayPostion, totalPrice);
			break;
		case 4:
			for (i = 0; i <= arrayPostion - 1; i++)
			{
				totalPrice = totalPrice + prices[i];
			}
			convertedPrice = totalPrice * euroConversion;
			printf_s("The price in Euros is - %f\n\n\n\n" , convertedPrice);
			break;
		case 5:
			printf_s("Thank you for using this program.");
			break;

		default:
			printf_s("Option not supported, please try again.\n\n\n\n");
			break;
		}
	}

	return 0;
}


