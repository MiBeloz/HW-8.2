#pragma once

#include "IsoscelesTriangle.h"


class EquilateralTriangle : public IsoscelesTriangle {
public:
	EquilateralTriangle(const int lengthABC);

	std::string getName() override;

	bool getCorrect() override;
};