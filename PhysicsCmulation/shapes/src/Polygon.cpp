#include "../include/Polygon.h"


int64_t shapes::Polygon::GetArea() {
    int64_t total;
    for (auto triangle : shapes) {
        total += triangle->GetArea();
    }
    return total;
}