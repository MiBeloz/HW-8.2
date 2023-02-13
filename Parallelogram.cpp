#include "Parallelogram.h"


Parallelogram::Parallelogram(const int lengthAC, const int lengthBD, const int angleAC, const int angleBD) : Quadrilateral(lengthAC, lengthBD, lengthAC, lengthBD, angleAC, angleBD, angleAC, angleBD) {}

std::string Parallelogram::getName() { return "Параллелограмм"; }

bool Parallelogram::getCorrect() {
	if (getLengthA() == getLengthC() && getLengthB() == getLengthD() && getAngleA() == getAngleC() && getAngleB() == getAngleD() && Quadrilateral::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}