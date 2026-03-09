#include "dish.h"

std::string Dish::GetName() const { return _name; }
int			Dish::GetWeight() const { return _weight; }
double		Dish::GetPrice() const { return _price; }

void Dish::SetName(std::string name) { _name = name; }
void Dish::SetWeight(int weight) { _weight = weight; }
void Dish::SetPrice(double price) { _price = price; }
