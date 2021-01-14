#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& v)
{
  double M = 0;
  int licz = 1;
  for(size_t i = v.size()-1; i >= 0; --i)
  {
    M = M + v[i].ileMaki(licz);
    licz++;
  }
if (M>100)
{
  throw int(100);
}
if (M>50 && M<=100)
{
  throw double(50100);
}
if (M<=50)
{
  throw M;
}

}