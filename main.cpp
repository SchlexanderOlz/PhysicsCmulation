#include <iostream>

#include "PhysicsCmulation/PhysicsCmulation.h"
using namespace std;
int main() {
    /*auto p = physics::ForceObject(0, 45, 400);
    auto p2 = physics::ForceObject(90, 0, 400);
    auto new_o = p + p2;

    std::cout << new_o.x << new_o.z << new_o.force << std::endl;*/

    auto p1 = make_shared<Point>(4.0, 5.0, 7.0);
    auto p2 = make_shared<Point>(4.0, 8.0, 1.0);
    auto p3 = make_shared<Point>(8.0, 5.0, 0.0);

    auto t = make_shared<Triangle>(p1, p2, p3);
    auto poly = Polygon({t});
    std::cout << poly.GetArea() << std::endl;
}