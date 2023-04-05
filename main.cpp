#include <iostream>

#include "physics/include/ForceObject.h"

int main() {
    auto p = physics::ForceObject(0, 45, 400);
    auto p2 = physics::ForceObject(90, 0, 400);
    auto new_o = p + p2;

    std::cout << new_o.x << new_o.z << new_o.force << std::endl;
}