#include "../include/Person.h"


void physicssandbox::Person::Collide(shared_ptr<PhysicalObject> subject) {
    *force + *subject->force;
}