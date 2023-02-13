#pragma once

#include "Triangle.h"


class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(const int lengthAC, const int lengthB, const int angleAC, const int angleB);

	std::string getName() override;

	bool getCorrect() override;
};