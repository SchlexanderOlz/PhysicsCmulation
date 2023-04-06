#include "../include/Function.h"

physics::Function::Function(vector<Point&> points) {  // Not Implemented @todo

  double a;
  double b;
  double c;
  double res = 5;

  res = pow(a, 3) + pow(b, 2) + c;
  c = -pow(a, 3) - pow(b, 2) + res;
  b = sqrt(res - pow(a, 3) - c);
  a = res - pow(b, 2) - c;

  for (int i = 0; i < points.size(); i++) {  // Änderung der Z-Achse über X
    // e.g. deg. 3; z = a * x^2 + b * x + c
    auto point = points[i];
    vector<double> res;
    point.z = pow(point.x, i) * a + pow(point.x, i - 1);

    for (int j = 0; j < points.size(); j++) {
    }
  }
}

Point* physics::Function::GetValueAt(int x) {
  double z_point;
  double y_point;

  for (int i = 0; i < z_function.size(); i++) {
    y_point += z_function[i] *
               pow(x, i);  // Check later if this potentiation is correct
  }

  for (int i = 0; i < y_function.size(); i++) {
    z_point += y_function[i] *
               pow(x, i);  // Check later if this potentiation is correct
  }

  return new Point(x, y_point, z_point);
}

template <typename T>
T physics::Function::GetDerivative(vector<T> function) {
  vector<T> deriv;
  for (int i = 0; i < function.size() - 1; i++) {
    deriv.push_back(function[i] * 2);
  }
  return deriv;
}