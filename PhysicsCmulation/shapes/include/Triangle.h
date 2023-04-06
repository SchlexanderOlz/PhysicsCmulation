
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <memory>

#include "Point.h"

namespace shapes {
class Triangle {
 public:
  shared_ptr<Point> points[3];

  Triangle(shared_ptr<Point> p[3]) {
    for (int i = 0; i < 3; i++) {
      points[i] = p[i];
    }
  }
  Triangle(shared_ptr<Point> p1, shared_ptr<Point> p2, shared_ptr<Point> p3) {
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
  }

  double GetArea();
};
}  // namespace shapes

#endif