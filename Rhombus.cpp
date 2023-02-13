#include "Rhombus.h"


Rhombus::Rhombus(const int lengthABCD, const int angleAC, const int angleBD) : Parallelogram(lengthABCD, lengthABCD, angleAC, angleBD) {}

std::string Rhombus::getName() { return "Ромб"; }

bool Rhombus::getCorrect() {
	if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getLengthC() == getLengthD() && getAngleA() == getAngleC() && getAngleB() == getAngleD() && Quadrilateral::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}