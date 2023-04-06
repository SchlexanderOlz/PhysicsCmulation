#include <cmath>

#ifndef FORCE_H
#define FORCE_H
namespace physics {
class ForceObject {
 public:
  int x;
  int z;
  int64_t force;

  ForceObject(int x, int z, int64_t f) : x(x), z(z), force(f){};

  ForceObject operator+(const ForceObject& other) {
    double rad_z = z * M_PI / 180.0;
    double rad_x = x * M_PI / 180.0;

    double other_rad_z = other.z * M_PI / 180.0;
    double other_rad_x = other.x * M_PI / 180.0;

    double real = (force * cos(rad_x) * cos(rad_z)) +
                  (other.force * cos(other_rad_x) * cos(other_rad_z));
    double bottom = (force * cos(rad_z)) * sin(rad_x) +
                    (other.force * cos(other_rad_z)) * sin(other_rad_x);
    double imaginary = (force * cos(rad_x)) * sin(rad_z) +
                       (other.force * cos(other_rad_x)) * sin(other_rad_z);

    double x_force = sqrt(pow(real, 2) + pow(bottom, 2));
    double new_force = sqrt(pow(x_force, 2) + pow(imaginary, 2));

    double new_x_angle = atan2(bottom, real);
    double new_y_angle = atan2(imaginary, real);

    return ForceObject(new_x_angle * (180 / M_PI), new_y_angle * (180 / M_PI),
                       new_force);
  }
};
}  // namespace physics

#endif