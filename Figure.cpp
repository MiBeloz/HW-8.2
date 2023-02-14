#include "Figure.h"


Figure::Figure() : sides{} {}

std::string Figure::getName() { return "Фигура"; }

int Figure::getSides() { return sides; }

std::string Figure::getAllLengths() { return "Стороны=0"; }

std::string Figure::getAllAngles() { return "Углы=0"; }

bool Figure::getCorrect() {
	if (sides == 0) {
		return true;
	}
	else {
		return false;
	}
}

std::string Figure::getInfo() {
	std::string correct;
	if (getCorrect()) {
		correct = "Правильная";
	}
	else {
		correct = "Неправильная";
	}
	return getName() + ":\n" + correct + "\nКоличество сторон: " + std::to_string(sides);
}
