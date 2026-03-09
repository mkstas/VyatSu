#pragma once

#include <iostream>
#include "dish.h"

enum Dressing
{
	OliveOil,
	Mayonnaise
};

class Salad : public Dish
{
private:
	Dressing _dressing = Dressing::OliveOil;

public:
	Salad() : Dish()
	{
	}

	Salad(std::string name) : Dish(name)
	{
	}

	Salad(std::string name, int weight, double price)
		: Dish(name, weight, price)
	{
	}

	Dressing GetDressing() const;
	void SetDressing(Dressing dressing);

	void ChangeDressing();
	void TossWithDressing();

	void   DisplayInfo()   override;
	double CalcFullPrice() override;
};
