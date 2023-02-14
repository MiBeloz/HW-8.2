#pragma once

#include <exception>


class error_create_figure : public std::exception {
public:
	error_create_figure(const char* _message);
};