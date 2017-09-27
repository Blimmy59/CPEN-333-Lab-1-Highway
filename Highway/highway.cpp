// OBJECT-ORIENTED CAR SIMULATOR
#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "Car.h"


int main() {
	//Create Fleet
	std::vector<Prius> priuses(25);
	std::vector<Mazda3> mazdas(25);
	std::vector<Tesla> teslas(25);
	std::vector<Herbie> herbies(25);

	std::vector<Car&> cars;
	for (int i = 0; i < 25; ++i) {
		cars.push_back(priuses[i]);
		cars.push_back(mazdas[i]);
		cars.push_back(teslas[i]);
		cars.push_back(herbies[i]);
	}

	// drive for 60 seconds
	double dt = .1;

	// GO!!!!
	for (Car& car : cars) {
		car.accelerate(true);
		car.drive(dt);
		std::cout << car.getModel() << ": \n" << car.getState() << std::endl;
	}
	std::cin.get();
	return 0;
}