#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(const int lengthAC, const int lengthB, const int angleAC, const int angleB) : Triangle(lengthAC, lengthB, lengthAC, angleAC, angleB, angleAC) {}

std::string IsoscelesTriangle::getName() { return "Равнобедренный треугольник"; }

bool IsoscelesTriangle::getCorrect() {
	if (getLengthA() == getLengthC() && getAngleA() == getAngleC() && Triangle::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}