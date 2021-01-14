#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

Class Makaron 

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle
{
  private:
  double L;
  double W;
  double R;
  static const double C;

  public:
  Tagliatelle(double Lp, double Wp, double Rp): L(Lp), W(Wp), R(Rp){}
  Tagliatelle():L(0.5), W(0.5), R(0.5){}

  double ileMaki(unsigned P) const 
  {
    return P*L*W*(1-R)*C;
  }
};