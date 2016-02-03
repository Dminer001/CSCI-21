/*
 * Name        : lab_2.cpp
 * Author      : FILL IN
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include "lab_2.h"
#include <cmath>
using std::cout;
using std::cin;
using std::endl;


/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels,
                int &pennies) {
  int remainder = 0;
  quarters = initial_value / 25;
  remainder = initial_value - (quarters * 25);
  dimes = remainder / 10;
  remainder = remainder - (dimes * 10);
  nickels = remainder / 5;
  remainder = remainder - (nickels * 5);
  pennies = remainder;
  
 }

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not account for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
double LaunchHumanCannonball(double initial_velocity, double launch_angle) {
  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
  // CODE HERE
  double radian_angle = launch_angle * (kPI / 180);
  // (2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
  // CODE HERE
  double x_velocity = initial_velocity * cos(radian_angle);
  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
  // CODE HERE
  double y_velocity = initial_velocity * sin(radian_angle) * -1;
  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
  // CODE HERE
  double flight_time = (y_velocity) * 2 / -9.8;
  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
  // CODE HERE
  double x_distance = x_velocity * flight_time;
  // (6) Return horizontal/x distance
  // CODE HERE
  return x_distance;
  
}
int main () {
  int initial_value = 0;
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;
  double initial_velocity = 0;
  double launch_angle = 0;
  
  cout << "What is the ammount you need to make change for? ";
  cin >> initial_value;
  MakeChange(initial_value, quarters, dimes, nickels, pennies);
  cout << quarters << " Quarters " << dimes << " Dimes " << nickels << " Nickels " << pennies << " Pennies " << endl;
  
  cout << "What is the initial veloctiy? ";
  cin >> initial_velocity;
  cout << "What is the launch_angle? ";
  cin >> launch_angle;
  
  
  
  cout << "Distance traveled " <<
  LaunchHumanCannonball(initial_velocity, launch_angle) << endl;
  
  
  
  
}