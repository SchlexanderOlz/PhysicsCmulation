#include "../include/Polygon.h"


double shapes::Polygon::GetArea() {
    double total = 0;
    for (auto triangle : shapes) {
        total += triangle->GetArea();
    }
    return total;
}