#include <iostream>
#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
	is_first_move = true;
}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd, double cte) {

	Kp_ = Kp;
	Ki_ = Ki;
	Kd_ = Kd;

	d_error = 0;
	p_error = cte;
	i_error = 0;

	is_first_move = false;

}

void PID::UpdateError(double cte) {

	d_error = cte - p_error;
	
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {

	return Kp_ * p_error + Ki_ * i_error + Kd_ * d_error;
}



