#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "Фигуры. Методы\n\n" << std::endl;

	try {
		Figure* figure = new Figure();
		std::cout << figure->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
		std::cout << triangle->onCreate() << std::endl;
	}
	catch(error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* rightTriangle = new RightTriangle(10, 20, 30, 50, 60);
		std::cout << rightTriangle->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* rightTriangle = new RightTriangle(10, 20, 30, 50, 40);
		std::cout << rightTriangle->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* isoscelesTriangle = new IsoscelesTriangle(10, 20, 50, 60);
		std::cout << isoscelesTriangle->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* equilateralTriangle = new EquilateralTriangle(30);
		std::cout << equilateralTriangle->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* quadrilateral = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << quadrilateral->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* rectangle = new Rectangle(10, 20);
		std::cout << rectangle->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* square = new Square(20);
		std::cout << square->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* parallelogram = new Parallelogram(20, 30, 30, 40);
		std::cout << parallelogram->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Figure* rhombus = new Rhombus(30, 30, 40);
		std::cout << rhombus->onCreate() << std::endl;
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	system("pause > nul");

	return 0;
}

void printInfo(Figure* figure) {
	std::cout << figure->getInfo() << std::endl << std::endl;
}

void deleteFigure(Figure* figure) {
	delete figure;
	figure = nullptr;
}