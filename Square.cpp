#include "Square.h"


Square::Square(const int lengthABCD) : Rhombus(lengthABCD, 90, 90) {}

std::string Square::getName() { return "Квадрат"; }

bool Square::getCorrect() {
	if (getLengthA() == getLengthB() && getLengthB() == getLengthC() && getLengthC() == getLengthD() && getAngleA() == 90 && getAngleB() == 90 && getAngleC() == 90 && getAngleD() == 90 && Quadrilateral::getCorrect()) {
		return true;
	}
	else {
		return false;
	}
}