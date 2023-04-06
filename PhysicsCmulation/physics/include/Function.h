#include <array>
#include <memory>
#include <vector>

#ifndef FUNCTION_H
#define FUNCTION_H

#include "../../shapes/include/Point.h"

using namespace std;
using namespace shapes;

namespace physics {
class Function {
 public:
  vector<double> y_function;
  vector<double> z_function;

  Function(vector<Point&> points);
  Function(array<vector<double>, 2> args)
      : y_function(args[0]), z_function(args[1]){};
  Function(vector<double> z_function, vector<double> y_function)
      : y_function(y_function), z_function(z_function){};

  void CreateFromPoints(vector<Point&> points);
  void CreateDirect(vector<double> args);
  Point* GetValueAt(int val);

  template <typename T>
  T GetDerivative(vector<T> function);
};
}  // namespace physics

#endif