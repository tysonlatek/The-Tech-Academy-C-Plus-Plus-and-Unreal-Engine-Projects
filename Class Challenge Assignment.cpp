// Class Challenge Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Shape {
public:
	string color;

	double getArea() {

	}
};

class Rectangle: public Shape {
public:
	int height;
	int width;

	Rectangle(string col, int hei, int wid) {
		color = col;
		height = hei;
		width = wid;
	}

	int getArea() {
		return height * width;
	}
};

class Triangle: public Shape {
public:
	int base;
	int height;

	Triangle(string col, int bas, int hei) {
		color = col;
		base = bas;
		height = hei;
	}

	int getArea() {
		return base * height;
	}
};

class Circle: public Shape {
public:
	double radius;

	Circle(string col, double rad) {
		color = col;
		radius = rad;
	}

	double getArea() {
		return 3.14159 * radius * radius;
	}
};

int main()
{
	Rectangle rect("blue", 10, 8);
	Triangle tri("yellow", 5, 4);
	Circle cir("red", 3);

	cout << "The "<< rect.color << " rectangle's area is: " << rect.getArea();
	cout << "\nThe " << tri.color << " triangle's area is: " << tri.getArea();
	cout << "\nThe " << cir.color << " circle's area is: " << cir.getArea();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
