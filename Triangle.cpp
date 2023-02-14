#include "Triangle.h"


Triangle::Triangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB, const int angleC) : Figure(3) {
	if (angleA + angleB + angleC != 180) {
		throw error_create_figure("Ошибка создания фигуры. Причина: сумма углов не равна 180!\n");
	}
	a = lengthA;
	b = lengthB;
	c = lengthC;
	A = angleA;
	B = angleB;
	C = angleC;
}

std::string Triangle::getName() { return "Треугольник"; }

int Triangle::getLengthA() { return a; }
int Triangle::getLengthB() { return b; }
int Triangle::getLengthC() { return c; }
int Triangle::getAngleA() { return A; }
int Triangle::getAngleB() { return B; }
int Triangle::getAngleC() { return C; }

std::string Triangle::getAllLengths() {
	return "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
}

std::string Triangle::getAllAngles() {
	return "Уголы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
}

bool Triangle::getCorrect() {
	if (A + B + C == 180) {
		return true;
	}
	else {
		return false;
	}
}

std::string Triangle::getInfo() {
	std::string correct;
	if (getCorrect()) {
		correct = "Правильная";
	}
	else {
		correct = "Неправильная";
	}
	return getName() + ":\n" + correct + "\nКоличество сторон: " + std::to_string(getSides()) + "\n" + getAllLengths() + "\n" + getAllAngles();
}
