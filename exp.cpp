
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

double exp(double x, double eps)
{
  double res = 1;
  double t = 1;
  int n = 1;
  while(t >= eps)
  {
    t = t * x / n;
    res += t;
      n++;
  }

  return res;
}

double ln(double x, double eps) 
{
  double t = x;
  double res = x;
  double i = 2;
  while(t >= eps || t <= -eps)
  {
    t *= -x / i++;
    res += t;
  }
  return res;
}


// W£ASNA WERSJA I DZIA£A!!!!
double lognat(double x, double eps)
{
  double val = 0;
  double powered = x;
  int temp = 1;
  while(powered / temp > eps || powered / temp < -eps)
  {
    val += powered / temp++;
    powered *= -x;
  }

  return val;
}


