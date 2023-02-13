#include "RightTriangle.h"


RightTriangle::RightTriangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB) : Triangle(lengthA, lengthB, lengthC, angleA, angleB, 90) {}

std::string RightTriangle::getName() { return "Прямоугольный треугольник"; }

bool RightTriangle::getCorrect() {
	if (getAngleC() == 90 && Triangle::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}