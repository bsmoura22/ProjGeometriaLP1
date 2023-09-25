#include <iostream>
#include <cmath>
#include "./../include/circulo.h"
using namespace std;
void circulo(int raio){
  float area;
  float per;
  float pi = 3.1416;
  area = pi * pow(raio, 2);
  per = 2* pi * raio;

  cout << "Area do circulo: " << area << endl;
  cout << "Perimetro do circulo: " << per;
}