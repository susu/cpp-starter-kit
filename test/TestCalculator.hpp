#include "igloo/igloo.h"

#include <Calculator.hpp>

using namespace igloo;

Context(a_calculator)
{
  Spec(should_add_two_integers)
  {
    Assert::That( subject.add(5,4), Equals(9));
  }
  Calculator subject;
};
