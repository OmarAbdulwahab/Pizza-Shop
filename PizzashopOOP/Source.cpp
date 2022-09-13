#include <iostream>
using namespace std;
#include "Pizza.h"


void main()
{
	cout << "Enter pizza choice. 1 for Chicken, 2 for Beef, 3 for Cheese, 4 for Shrimp: ";
	int choice;
	cin >> choice;

	Pizza* pizza = NULL;
	if (choice == 1)
	{
		pizza = new ChickenPizza;
	}
	else if (choice == 2)
	{
		pizza = new BeefPizza;
	}
	else if (choice == 3)
	{
		pizza = new CheesePizza;
	}
	else if (choice == 4) {
		pizza = new ShrimpPizza;
	}
	else
	{
		cout << "Error!" << endl;
	}

	if (pizza)
	{
		pizza->MakePizza();
		delete pizza;
	}
}