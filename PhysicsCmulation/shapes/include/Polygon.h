#include <iostream>
#include <vector>

#ifndef POLY_H
#define POLY_H
#include "Point.h"
#include "Triangle.h"

using namespace std;
namespace shapes {
class Polygon {
 public:
  vector<shared_ptr<Triangle>> shapes;

  Polygon(vector<shared_ptr<Triangle>> t) : shapes(t) {};

  double GetArea();
};

}  // namespace shapes
#endif