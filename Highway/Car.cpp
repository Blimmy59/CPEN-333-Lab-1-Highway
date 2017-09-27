#include <string>
#include <iostream>
#include "Car.h"
#include "Physics.h"

std::string Car::getModel() {
	return model;
}

double Car::getMass() {
	return mass;
}

void Car::accelerate(bool on) {
	wheel_force = 0;
	if (on) {
		wheel_force = engine_force;
	}
}

State Car::getState() {
	return carState;
}

void Car::drive(double dt) {
	double dragForce = physics::compute_dragforce(drag_area, carState.velocity);
	double fnet = wheel_force - dragForce;
	carState.acceleration = physics::compute_acceleration(fnet, mass);
	carState.velocity = physics::compute_velocity(carState.velocity, carState.acceleration, dt);
	carState.position = physics::compute_position(carState.position, carState.velocity, dt);
	carState.time += dt;
}

