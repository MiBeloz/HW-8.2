#pragma once

#include <stdexcept>



class error_create_figure : public std::domain_error {
public:
	error_create_figure(const char* _message);
};