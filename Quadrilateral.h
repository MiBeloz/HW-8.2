#pragma once

#include "Figure.h"


class Quadrilateral : public Figure {
public:
	Quadrilateral(const int lengthA, const int lengthB, const int lengthC, const int lengthD, const int angleA, const int angleB, const int angleC, const int angleD);

	std::string getName() override;

	int getLengthA();
	int getLengthB();
	int getLengthC();
	int getLengthD();
	int getAngleA();
	int getAngleB();
	int getAngleC();
	int getAngleD();

	std::string getAllLengths() override;

	std::string getAllAngles() override;

	bool getCorrect() override;

	std::string getInfo() override;

private:
	int a, b, c, d;
	int A, B, C, D;
};