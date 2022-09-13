#pragma once


class Pizza
{
	void MakeDough()
	{
		cout << "Making dough" << endl;
	}

	void Bake()
	{
		cout << "Baking Pizza" << endl;
	}

	void AddToppings()
	{
		cout << "Adding "<<PizzaType()<<" Toppings" << endl;
	}

protected:
	virtual const char* PizzaType() = 0;

public:
	void MakePizza()
	{
		MakeDough();
		AddToppings();
		Bake();
		cout << "Making " << PizzaType() <<" Pizza done!"<< endl;
	}
};

class ChickenPizza : public Pizza
{
protected:
	const char* PizzaType()
	{
		return "Chicken";
	}
};


class BeefPizza : public Pizza
{
protected:
	const char* PizzaType()
	{
		return "Beef";
	}
};

class CheesePizza : public Pizza
{
protected:
	const char* PizzaType()
	{
		return "Cheese";
	}
};

class ShrimpPizza : public Pizza
{
protected:
	const char* PizzaType()
	{
		return "Shrimp";
	}
};