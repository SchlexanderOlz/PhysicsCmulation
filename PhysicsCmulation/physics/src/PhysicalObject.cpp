#include "../include/PhysicalObject.h"

void physics::PhysicalObject::SetTargetPos(Point &target) {
    force->x = atan2(target.y - position->y, target.x - position->x) * (180.0 / M_PI);
    force->z = atan2(target.z - position->z, target.x - position->x) * (180.0 / M_PI);
}