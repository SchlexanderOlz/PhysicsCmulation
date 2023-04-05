
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

  double GetArea();
};
}  // namespace shapes

#endif