#include <math.h>

#include <iostream>
#include <memory>

#ifndef POINT_H
#define POINT_H
using namespace std;
namespace shapes {
class Point {
 public:
  int64_t x;
  int64_t y;
  int64_t z;

  Point(int64_t p[3]) : x(p[0]), y(p[1]), z(p[2]){};
  Point(int64_t x, int64_t y, int64_t z) : x(x), y(y), z(z){};

  inline const bool operator==(const Point& other) {
    return x == other.x && y == other.y && z == other.z;
  }

  double GetDistanceTo(shared_ptr<Point> other);
};

}  // namespace shapes
#endif