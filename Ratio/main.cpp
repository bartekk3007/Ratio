#include <iostream>
#include <ratio>

int main()
{
	std::ratio<1, 3> one_third;
	std::cout << one_third.num << '\n';

	std::milli millimetre;
	std::cout << millimetre.den << '\n';

	std::ratio<2, 7> two_sevenths;
	std::cout << two_sevenths.num << '/' << two_sevenths.den << '\n';

	return 0;
}