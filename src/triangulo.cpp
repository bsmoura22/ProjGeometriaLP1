//#include "arquivo.h"
#include <iostream>
#include <cmath>
#include "./../include/triangulo.h"
using namespace std;
void triangulo(int base){
  float area;
  float per;
  area = (pow(base, 2)*sqrt(3))/4;
  per = base*3;
  
  cout << "Area do triangulo: " << area << endl;
  cout << "Perimetro do triangulo: " << per;
}