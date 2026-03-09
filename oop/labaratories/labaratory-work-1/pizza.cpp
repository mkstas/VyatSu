#include "pizza.h"

Dough Pizza::GetDough() const
{
	return _dough;
}

void Pizza::SetDough(Dough dough)
{
	_dough = dough;
}

void Pizza::ChangeDough()
{
	_dough = _dough == Dough::Thin ? Dough::Thick : Dough::Thin;
}

void Pizza::CutInSlices()
{
	std::cout << "Cutting the pizza into slices..." << std::endl;
}

void Pizza::DisplayInfo()
{
	std::cout << "Pizza: " << GetName() << ", "
		<< GetDough() << " dough, "
		<< GetWeight() << "g, $"
		<< std::fixed << std::setprecision(2) << CalcFullPrice()
		<< std::endl;
}

double Pizza::CalcFullPrice()
{
	return _dough == Dough::Thin ? GetPrice() * 1.3 : GetPrice() * 1.5;
}
