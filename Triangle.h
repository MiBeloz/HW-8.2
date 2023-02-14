#pragma once

#include "Figure.h"


class Triangle : public Figure {
public:
	Triangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB, const int angleC);

	std::string getName() override;

	int getLengthA();
	int getLengthB();
	int getLengthC();
	int getAngleA();
	int getAngleB();
	int getAngleC();

	std::string getAllLengths() override;

	std::string getAllAngles() override;

	bool getCorrect() override;

	std::string getInfo() override;

private:
	int a, b, c;
	int A, B, C;
};