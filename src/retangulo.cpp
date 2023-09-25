#include <iostream>
#include "./../include/retangulo.h"
using namespace std;

void retangulo(int base, int altura){
  float area;
  float per;
  area = base*altura;
  per = (2*base)+(2*altura);
  
  cout << "Area do retangulo: " << area << endl;
  cout << "Perimetro do retangulo: " << per;
}