#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle(const int lengthABC) : IsoscelesTriangle(lengthABC, lengthABC, 60, 60) {}

std::string EquilateralTriangle::getName() { return "Равносторонний треугольник"; }

bool EquilateralTriangle::getCorrect() {
	if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getAngleA() == 60 && getAngleB() == 60 && getAngleC() == 60 && Triangle::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}