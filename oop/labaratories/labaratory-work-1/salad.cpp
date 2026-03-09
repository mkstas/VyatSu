#include "salad.h"

Dressing Salad::GetDressing() const
{
	return _dressing;
}

void Salad::SetDressing(Dressing dressing)
{
	_dressing = dressing;
}

void Salad::ChangeDressing()
{
	_dressing = _dressing == Dressing::OliveOil ? Dressing::Mayonnaise : Dressing::OliveOil;
}

void Salad::TossWithDressing()
{
	std::cout << "Tossing the salad with " << GetDressing() << "..." << std::endl;
}

void Salad::DisplayInfo()
{
	std::cout << "Salad: " << GetName() << ", "
		<< GetDressing() << " dressing, "
		<< std::to_string(GetWeight()) << "g, $"
		<< std::fixed << std::setprecision(2) << CalcFullPrice()
		<< std::endl;
}

double Salad::CalcFullPrice()
{
	return _dressing == OliveOil ? GetPrice() * 1.4 : GetPrice() * 1.3;
}
