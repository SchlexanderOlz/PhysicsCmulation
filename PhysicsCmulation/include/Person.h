#include "../physics/include/ForceObject.h"
#include "../physics/include/PhysicalObject.h"

namespace physicssandbox {
    class Person : public physics::PhysicalObject {
        void Collide(shared_ptr<PhysicalObject> subject) override;
    };
}