#include <iostream>
#include <cmath>
#include "./../include/quadrado.h"
using namespace std;

void quadrado(int base){
  float area;
  float per;
  area = pow(base, 2);
  per = base*4;

  cout << "Area do quadrado: " << area << endl;
  cout << "Perimetro do quadrado: " << per;
}