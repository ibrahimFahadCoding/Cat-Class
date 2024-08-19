#pragma once

#include <cstdint>
#include <string>
#include <ostream>

namespace cat {

class Cat {
  std::string m_name;
  std::uint32_t m_age;
  std::string m_breed;
  std::string m_color;
 public: 
  Cat(std::string name, std::uint32_t age, std::string breed, std::string color)
    : m_name(name), m_age(age), m_breed(breed), m_color(color) {}
  std::string name() const { return m_name; }
  uint32_t age() const { return m_age; }
  std::string breed() const { return m_breed; }
  std::string color() const { return m_color; }
  
  

  void celbday() { ++m_age; }
};

std::ostream &operator<<(std::ostream &ostream, const Cat &cat);

} // namespace cat


