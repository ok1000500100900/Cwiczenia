
#include <iostream>
#define PI 3.141592656589
#define X 30
#define EPS 0.000001

double sinus(double x, double esp);
double cosinus(double x, double eps);

int main()
{
  double result = sinus(X, EPS);
  double result1 = cosinus(X, EPS);
  printf("%f\n%f", result, result1);
  return 0;
}

double sinus(double x, double esp)
{
  x = x * PI / 180;
  double val = 0;
  double powered = x;
  int temp = 1;
  int den = 1;

  while(powered / den > esp)
  {
    if(temp % 4 == 1)
      val += (powered / den);

    if(temp % 4 == 3)
      val -= (powered / den);

    powered *= x;
    temp++;
    den = den*temp;
  }
  return val;
}

double cosinus(double x, double eps)
{
  x = x * PI / 180;
  double powered = x;
  double val = 1;
  int den = 1;
  int temp = 1;

  while(powered / den > eps || powered / den < -eps)
  {
    if(temp % 4 == 0)
      val += powered / den;

    if(temp % 4 == 2)
      val -= powered / den;

    temp++;
    powered *= x;
    den *= temp;
  }

  return val;
}