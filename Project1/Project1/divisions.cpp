#include <iostream>
float division(float a, float b) {
	if (b == 0)
	{
		std::cout << "No es pot dividir entre ";
		return 0;
	}
	else
		return a / b;
}