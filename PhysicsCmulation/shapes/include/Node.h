#include <iostream>
#include <memory>
#include <vector>

#include "Point.h"

#ifndef NODE_H
#define NODE_H
using namespace std;
namespace shapes {
class Node : public Point {
 public:
  vector<shared_ptr<Node>> neigbours;

  Node(int64_t p[3]) : Point(p[0], p[1], p[2]){};
  Node(int64_t x, int64_t y, int64_t z) : Point(x, y, z){};
};

}  // namespace shapes
#endif