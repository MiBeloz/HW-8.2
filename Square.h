#pragma once

#include "Rhombus.h"


class Square : public Rhombus {
public:
	Square(const int lengthABCD);

	std::string getName() override;

	bool getCorrect() override;
};