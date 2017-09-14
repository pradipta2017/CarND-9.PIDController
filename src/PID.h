#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp_;
  double Ki_;
  double Kd_;

  
  bool is_first_move;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd, double cte);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

 
  /*
  * Calculate the total PID error.
  */
  double TotalError();

};

#endif /* PID_H */
