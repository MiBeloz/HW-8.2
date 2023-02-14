#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(const int lengthA, const int lengthB, const int lengthC, const int lengthD, const int angleA, const int angleB, const int angleC, const int angleD) : Figure(4) {
	if (angleA + angleB + angleC + angleD != 360) {
		throw error_create_figure("Ошибка создания фигуры. Причина: сумма углов не равна 360!\n");
	}
	a = lengthA;
	b = lengthB;
	c = lengthC;
	d = lengthD;
	A = angleA;
	B = angleB;
	C = angleC;
	D = angleD;
}

std::string Quadrilateral::getName() { return "Четырехугольник"; }

int Quadrilateral::getLengthA() { return a; }
int Quadrilateral::getLengthB() { return b; }
int Quadrilateral::getLengthC() { return c; }
int Quadrilateral::getLengthD() { return d; }
int Quadrilateral::getAngleA() { return A; }
int Quadrilateral::getAngleB() { return B; }
int Quadrilateral::getAngleC() { return C; }
int Quadrilateral::getAngleD() { return D; }

std::string Quadrilateral::getAllLengths() {
	return "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
}

std::string Quadrilateral::getAllAngles() {
	return "Уголы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
}

bool Quadrilateral::getCorrect() {
	if (A + B + C + D == 360) {
		return true;
	}
	else {
		return false;
	}
}

std::string Quadrilateral::getInfo() {
	std::string correct;
	if (getCorrect()) {
		correct = "Правильная";
	}
	else {
		correct = "Неправильная";
	}
	return getName() + ":\n" + correct + "\nКоличество сторон: " + std::to_string(getSides()) + "\n" + getAllLengths() + "\n" + getAllAngles();
}
