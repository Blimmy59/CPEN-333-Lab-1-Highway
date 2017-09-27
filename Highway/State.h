#ifndef STATE
#define STATE

#include <iostream>

class State
{
public:
		double position;
		double velocity;
		double acceleration;
		double time;
//Default Constructor
	State(){
		position = 0;
		velocity = 0;
		acceleration = 0;
		time = 0;
	}
//Overload Constructor
	State(double position, double velocity, double acceleration, double time) {
		this->position = position;
		this->velocity = velocity;
		this->acceleration = acceleration;
		this->time = time;
	}
//Set function
	void set(double position, double velocity, double acceleration, double time) {
		this->position = position;
		this->velocity = velocity;
		this->acceleration = acceleration;
		this->time = time;
	}
};

// prints out a State class information
inline std::ostream& operator<<(std::ostream& os, State& jelly) {
	os << "t: " << jelly.time << ", x: " << jelly.position
		<< ", v: " << jelly.velocity << ", a: " << jelly.acceleration;
	return os;
}
#endif // STATE