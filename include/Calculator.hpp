#ifndef CALCULATOR_HPP_INC
#define CALCULATOR_HPP_INC

class View;

class Calculator
{
  public:
    Calculator(View &);
    ~Calculator();
    void add( int a, int b );
  private:
    View & m_view;
};

#endif
