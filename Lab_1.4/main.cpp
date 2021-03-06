#include <iostream>
#include "Vector.h"

int main(void) {
	Vector a{}, b{}, c{};
	int i{};
	double l{};
	char variant{};
	std::string answer{};

	do {
		std::cout << "\n\n[1] --- Setting(create) coordinates to vectors";
		std::cout << "\n[2] --- Display of coordinates of vectors";
		std::cout << "\n[3] --- adding two vectors";
		std::cout << "\n[4] --- subtraction of two vectors";
		std::cout << "\n[5] --- calculation of the scalar dobutky";
		std::cout << "\n[6] --- vector length";
		std::cout << "\n[7] --- the cosinus of the angle between the vectors";
		std::cout << "\n\n[0] --- completion of work";

		std::cout << "\n\nWhat do you choose: "; std::cin >> i;

		switch (i) {
		case 1:
			std::cout << "\n\nVector a:";
			a.Read();

			std::cout << "\n\nVector b:";
			b.Read();
			break;
		case 2:
			std::cout << "\n\nCoordinates vector a:";
			a.Display();

			std::cout << "\n\nCoordinates vector b:";
			b.Display();
			break;
		case 3:
			c = a.Addition(b);
			std::cout << "\n\nResult: ";
			c.Display();
			break;
		case 4:
			std::cout << "\nWhat do you choose: 'a-b' or 'b-a': "; std::cin >> answer;
			(answer == "a-b") ? c = b.Subtraction(a) : c = a.Subtraction(b);
			std::cout << "\n\nResult: ";
			c.Display();
			break;
		case 5:
			std::cout << "\n\nScalar_number two vectors: " << a.Scalar_dubutok(b);
			break;
		case 6:
			std::cout << "\n\nThe length of the vector a or b: "; std::cin >> variant;
			(variant == 'a') ? l = a.Length_Vectora() : l = b.Length_Vectora();
			std::cout << "\n\nLength " << variant << " : " << l;
			break;
		case 7:
			std::cout << "\n\nCosinus between vectors: " << a.Cos_Angle_Vectors(b);
			break;
		case 0:
			break;
		default:
			std::cout << "\n\nWrong mode entered";
			break;
		}
	} while (i != 0);

	return 0;
}