#include <iostream>
#include "multiples_of_3_or_5.h"

int Multiples3or5::sumMultiples(int max)
{
	int sum = 0;
	for (int i = 0; i < max; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
		}
	}

	std::cout << sum << std::endl;
	return sum;
}