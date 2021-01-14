#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne: public
{
  public:
  double ileMaki(unsigned P) const
  {
    return P;
  }
};
// tutaj definicja metody gotujMakaron

inline Makaron* Makaron::gotujMakaron(const std::string n)
{
  if(n.front()==n.back())
  {
    return new Tagliatelle(3.14,0.42,0.1);
  }
  else
  {
    return new Penne();
  }
}