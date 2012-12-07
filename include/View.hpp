#ifndef VIEW_HPP_INC
#define VIEW_HPP_INC

#include <ostream>

class View
{
  public:
    View(std::ostream & out);
    virtual ~View();
    virtual void display(int result);
  private:
    std::ostream & m_out;
};

#endif
