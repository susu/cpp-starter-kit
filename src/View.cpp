#include <iostream>

#include <View.hpp>


View::View(std::ostream & out)
  : m_out(out)
{}

View::~View()
{}

void View::display(int result)
{
  m_out << "Result: " << result << std::endl;
}

