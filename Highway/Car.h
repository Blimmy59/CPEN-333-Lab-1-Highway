#ifndef CAR
#define CAR

#include <string>
#include "State.h"



class Car
{
public:
	Car(std::string model, double mass, double engine_force, double drag_area) {
		this->model = model;
		this->mass = mass;
		this->engine_force = engine_force;
		this->drag_area = drag_area;
	}

	std::string getModel();
	double getMass();
	void accelerate(bool on);
	virtual void drive(double dt);
	State getState();

private:
	std::string model;
	double mass;
	double engine_force;
	double wheel_force;
	double drag_area;
protected:
	State carState;
};

class Prius : public Car {
public:
	//constructor
	Prius() : Car("Toyota Prius", 1450, 740, 0.58){}
};
class Mazda3 : public Car {
public:
	//constructor
	Mazda3() : Car("Mazda 3", 1400, 800, 0.6){}
};
class Tesla : public Car {
	//constructor
	Tesla() : Car("Tesla", 2000, 1500, 0.3){}
};
class Herbie : public Car {
	//constructor
	Herbie() : Car("Herbie", 0 , 0, 0){}
public:
	void drive(double dt) {
		carState.position = 1 + carState.position * carState.position;
	}
};
#endif // CAR