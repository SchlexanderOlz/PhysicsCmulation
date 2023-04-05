#include <memory>

#ifndef PHYS_OBJ_H
#define PHYS_OBJ_H

#include "../shapes/include/Point.h"
#include "../shapes/include/Polygon.h"
#include "ForceObject.h"

using namespace std;
using namespace shapes;

namespace physics {
class PhysicalObject {
 public:
  int64_t mass;
  int64_t velocity;
  shared_ptr<ForceObject> force;
  shared_ptr<Point> position;
  shared_ptr<Polygon> shape = nullptr;

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Point> p,
                 shared_ptr<Polygon> poly, shared_ptr<ForceObject> f)
      : mass(m), velocity(v), position(p), shape(poly), force(f){};

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Polygon> poly,
                 shared_ptr<Point> p)
      : mass(m),
        velocity(v),
        shape(poly),
        position(p),
        force(make_shared<ForceObject>(0, 0, 0)){};

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Point> p)
      : mass(m),
        velocity(v),
        position(p),
        force(make_shared<ForceObject>(0, 0, 0)){};

  void SetTargetPos(Point &target);
  void SetShape(shared_ptr<Polygon> p) { shape = p; }
  virtual void Collide(shared_ptr<PhysicalObject> subject) = 0;
  virtual ~PhysicalObject() = default;
};
}  // namespace physics

#endif