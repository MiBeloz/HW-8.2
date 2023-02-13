#pragma once

#include "Parallelogram.h"


class Rectangle : public Parallelogram {
public:
	Rectangle(const int lengthAC, const int lengthBD);

	std::string getName() override;

	bool getCorrect() override;
};