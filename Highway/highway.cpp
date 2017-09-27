// OBJECT-ORIENTED CAR SIMULATOR
#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "Car.h"


int main() {

	Car* cars1[10];					// a fixed-size array of 100 car pointers
	Car* cars2[10];					// a fixed-size array of 100 car pointers
	Car* cars3[10];					// a fixed-size array of 100 car pointers
	Car* carsH[10];					// a fixed-size array of 100 car pointers Herbie

	for (int i = 0; i<10; ++i) {
		cars1[i] = new Prius();			// fixed-size array
		cars2[i] = new Mazda3();		// dynamic array
		cars3[i] = new Tesla();			// vector
		carsH[i] = new Herbie();		// fixed-size array Herbie
	}

	// drive for 60 seconds
	double dt = 1;

	// GO!!!!

	int bug = 0;
	while (bug < 60) {
		int i = 0;
		for (i; i < 10; i++) {

			if ((cars1[i]->getState()).velocity > 27.8) {cars1[i]->accelerate(false);}
			else {cars1[i]->accelerate(true);}
			cars1[i]->drive(dt);
			std::cout << cars1[i]->getModel() << ": \n" << cars1[i]->getState() << std::endl;

			if (cars2[i]->getState().velocity > 27.8) { cars2[i]->accelerate(false); }
			else { cars2[i]->accelerate(true); }
			cars2[i]->drive(dt);
			std::cout << cars2[i]->getModel() << ": \n" << cars2[i]->getState() << std::endl;


			if (cars3[i]->getState().velocity > 27.8) { cars3[i]->accelerate(false); }
			else { cars3[i]->accelerate(true); }
			cars3[i]->drive(dt);
			std::cout << cars3[i]->getModel() << ": \n" << cars3[i]->getState() << std::endl;

			carsH[i]->drive(dt);
			std::cout << carsH[i]->getModel() << ": \n" << carsH[i]->getState() << std::endl;
		}
		bug = bug +1;
	}

	for (int i = 0; i<10; ++i) {
		delete cars1[i];  // fixed-size array
		delete cars2[i];  // fixed-size array
		delete cars3[i];  // fixed-size array
		delete carsH[i];  // fixed-size array
	}
	std::cin.get();
	return 0;
}