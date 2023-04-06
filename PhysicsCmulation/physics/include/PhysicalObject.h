#include <memory>

#ifndef PHYS_OBJ_H
#define PHYS_OBJ_H

#include "../../shapes/include/Point.h"
#include "../../shapes/include/Polygon.h"
#include "ForceObject.h"
#include "Function.h"

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
  shared_ptr<Function> move_function = nullptr;

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Point> p,
                 shared_ptr<Polygon> poly, shared_ptr<Function> func,
                 shared_ptr<ForceObject> f)
      : mass(m),
        velocity(v),
        position(p),
        shape(poly),
        move_function(func),
        force(f){};

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Polygon> poly,
                 shared_ptr<Function> func, shared_ptr<Point> p)
      : mass(m),
        velocity(v),
        shape(poly),
        move_function(func),
        position(p),
        force(make_shared<ForceObject>(0, 0, m * v)){};

  PhysicalObject(int64_t m, int64_t v, shared_ptr<Function> func,
                 shared_ptr<Point> p)
      : mass(m),
        velocity(v),
        move_function(func),
        position(p),
        force(make_shared<ForceObject>(0, 0, m * v)){};

  PhysicalObject(shared_ptr<Point> p)
      : force(make_shared<ForceObject>(0, 0, 0)){};

  void SetTargetPos(Point &target);
  inline const void SetShape(shared_ptr<Polygon> p) { shape = p; }
  inline const void SetFunction(shared_ptr<Function> f) { move_function = f; }
  virtual void Collide(shared_ptr<PhysicalObject> subject) = 0;
  bool CheckForCollision(shared_ptr<PhysicalObject> subject);
  virtual ~PhysicalObject() = default;
};
}  // namespace physics

#endif