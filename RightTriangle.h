#pragma once

#include "Triangle.h"


class RightTriangle : public Triangle {
public:
	RightTriangle(const int lengthA, const int lengthB, const int lengthC, const int angleA, const int angleB);

	std::string getName() override;

	bool getCorrect() override;
};