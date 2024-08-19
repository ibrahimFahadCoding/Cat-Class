#include <iostream>
#include "cat.hpp"

int main() {
  cat::Cat billy("Billy", 3, "Siamese", "Gray");
  std::cout << billy.age() << std::endl;
  std::cout << billy << std::endl;
  billy.celbday();
  std::cout << billy.age() << std::endl;
}
