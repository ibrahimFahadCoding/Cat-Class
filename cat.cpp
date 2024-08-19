#include "cat.hpp"
#include <iostream>
#include <cmath>

namespace cat {
// class::func

std::ostream &operator<<(std::ostream &ostream, const Cat &cat) {
  ostream << "Name: " << cat.name() << ", Age: " << cat.age() << ", Breed: " << cat.breed() << ", Color: " << cat.color(); 
  return ostream;
}


} // namespace cat

// semi-colon only for classes
