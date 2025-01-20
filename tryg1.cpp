
#include <iostream>
#define PI 3.141592656589
double sinus(double x, double esp);

int main()
{
  double x = 30;
  double esp = 0.000001;

  double result = sinus(x, esp);
  printf("%0.6f", result);

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

