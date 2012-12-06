#include <Calculator.hpp>

#include <View.hpp>

Calculator::Calculator(View & view)
  : m_view(view)
{}

Calculator::~Calculator()
{}

void
Calculator::add(int lhs, int rhs)
{
  m_view.display(lhs+rhs);
}
