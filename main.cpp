#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "Фигуры. Методы\n\n" << std::endl;

	Figure* figure = nullptr;

	try {
		figure = new Figure();
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Triangle(10, 20, 30, 50, 60, 70);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch(error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new RightTriangle(10, 20, 30, 50, 60);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new RightTriangle(10, 20, 30, 50, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new IsoscelesTriangle(10, 20, 50, 60);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new EquilateralTriangle(30);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Rectangle(10, 20);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Square(20);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Parallelogram(20, 30, 30, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	try {
		figure = new Rhombus(30, 30, 40);
		printInfo(figure);
		deleteFigure(figure);
	}
	catch (error_create_figure& error) {
		std::cout << error.what() << std::endl;
	}

	system("pause > nul");

	return 0;
}

void printInfo(Figure* figure) {
	std::cout << "Фигура '" + figure->getName() + "' (" + figure->getAllLengths() + "; " + figure->getAllAngles() + ") создана!\n" << std::endl;
}

void deleteFigure(Figure* figure) {
	delete figure;
	figure = nullptr;
}
