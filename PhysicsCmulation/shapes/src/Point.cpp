#include "../include/Point.h"


double shapes::Point::GetDistanceTo(shared_ptr<Point> other) {
    return sqrt(pow(x - other->x, 2) + pow(y - other->y, 2) + pow(z - other->z, 2));
}