#pragma once
typedef int coordinate, scalar_number;
typedef double length;
class Vector {            //клас для об’єктів-векторів
private:
	coordinate x;
	coordinate y;
	coordinate z;
public:
	void Set_x(coordinate value) { x = value; }
	coordinate Get_x()const { return x; }

	void Set_y(coordinate value) { y = value; };
	coordinate Get_y()const { return y; }

	void Set_z(coordinate value) { z = value; };
	coordinate Get_z()const { return z; }

	void Read();
	void Display();
	void Init(coordinate, coordinate, coordinate);
	std::string toString();

	Vector Addition(Vector);                //додавання двох векторів
	Vector Subtraction(Vector);             //віднімання двох векторів
	scalar_number Scalar_dubutok(Vector);   //скалярний добуток векторів
	length Length_Vectora();                //довжина вектора
	double Cos_Angle_Vectors(Vector);       //косинус між векторами
};