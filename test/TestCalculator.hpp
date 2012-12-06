#include "igloo/igloo.h"
#include "turtle/mock.hpp"

#include <Calculator.hpp>
#include <View.hpp>

MOCK_BASE_CLASS( ViewMock, View )
{
  MOCK_METHOD( display, 1 );
};

using namespace igloo;

Context(a_calculator)
{
  a_calculator()
    : subject(view)
  {}

  Spec(should_add_two_integers)
  {
    MOCK_EXPECT(view.display).once().with(9);
    subject.add(5,4);
    // TODO better integration to igloo?
  }

  ViewMock view;
  Calculator subject;
};
