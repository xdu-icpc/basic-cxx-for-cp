#include <cmath>
#include <iostream>

int main()
{
	double wrong = abs(114.514);
	double correct = std::abs(114.514);
	printf("%.10f %.10f\n", wrong, correct);
}
