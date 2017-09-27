#pragma once
#ifndef PHYSICS
#define PHYSICS

namespace physics {

	// your code will go in here

	inline double compute_position(double x0, double v, double dt)
	{
		return (x0 + v * dt);
	}

	inline double compute_velocity(double v0, double a, double dt)
	{
		return (v0 + a * dt);
	}

	inline double compute_velocity(double x0, double t0, double x1, double t1)
	{
		return ((x1 - x0) / (t1 - t0));
	}

	inline double compute_acceleration(double v0, double t0, double v1, double t1)
	{
		return ((v1 - v0) / (t1 - t0));
	}

	inline double compute_acceleration(double f, double m)
	{
		return (f / m);
	}

	inline double compute_dragforce(double drag_area, double v)
	{
		double p = 1.225;
		return (0.5 * p * drag_area * v * v);
	}
};

#endif // PHYSICS