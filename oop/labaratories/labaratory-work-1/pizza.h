#pragma once

#include <iostream>
#include "dish.h"

enum Dough
{
	Thin,
	Thick
};

class Pizza : public Dish
{
private:
	Dough _dough = Dough::Thick;

public:
	Pizza() : Dish()
	{
	}

	Pizza(std::string name) : Dish(name)
	{
	}

	Pizza(std::string name, int weight, double price)
		: Dish(name, weight, price)
	{
	}

	Dough GetDough() const;
	void  SetDough(Dough dough);

	void ChangeDough();
	void CutInSlices();

	void   DisplayInfo()   override;
	double CalcFullPrice() override;
};
