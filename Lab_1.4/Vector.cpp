#include <iostream>
#include <sstream>
#include "Vector.h"

void Vector::Read() {
	coordinate a, b, c;
	std::cout << "\n\nEnter the coordinate x: "; std::cin >> a;
	std::cout << "Enter the coordinate y: "; std::cin >> b;
	std::cout << "Enter the coordinate z: "; std::cin >> c;
	Init(a, b, c);
}

void Vector::Display() {
	std::cout << "\n\ncoordinate x: " << x;
	std::cout << "\ncoordinate y: " << y;
	std::cout << "\ncoordinate z: " << z;
}

void Vector::Init(coordinate a, coordinate b, coordinate c) {
	x = a;
	y = b; 
	z = c;
}

std::string Vector::toString() {
	std::string str;
	std::stringstream sout;
	sout << "\n\ncoordinate x: " << x;
	sout << "\ncoordinate y: " << y;
	sout << "\ncoordinate z: " << z;

	return sout.str();
}

Vector Vector::Addition(Vector m) {
	Vector l;
	l.x = m.x + this->x;
	l.y = m.y + this->y;
	l.z = m.z + this->z;
	return l;
}

Vector Vector::Subtraction(Vector m) {
	Vector l;
	l.x = m.x - this->x;
	l.y = m.y - this->y;
	l.z = m.z - this->z;
	return l;
}
scalar_number Vector::Scalar_dubutok(Vector m) {
	return m.x * this->x + m.y * this->y + m.z * this->z;
}

length Vector::Length_Vectora() {
	return sqrt(x * x + y * y + z * z);
}

double Vector::Cos_Angle_Vectors(Vector m) {
	return this->Scalar_dubutok(m) / (this->Length_Vectora() * m.Length_Vectora());
}