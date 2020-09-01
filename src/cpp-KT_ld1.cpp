//============================================================================
// Name        : cpp-KT_ld1.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LD1 - Strukturen
//============================================================================

#include <iostream>

#include "mensch.hpp"

int main() {



	Mensch marcus {"Marcus", 29, 75.8, 1.78};
	Mensch tobias {"Tobias", 39, 79.1, 1.81};
	Mensch andrea {"Andrea", 55, 55.1, 1.65};

	//std::cout << marcus;

	marcus.status_drucken(std::cout);
	tobias.status_drucken(std::cout);
	andrea.status_drucken(std::cout);

	marcus.essen(1.2);
	marcus.status_drucken(std::cout);

	marcus.essen(0.4);
	marcus.status_drucken(std::cout);
	
	tobias.essen(3.9);
	tobias.status_drucken(std::cout);

	andrea.essen(0.01);
	andrea.status_drucken(std::cout);

	return 0;
}
