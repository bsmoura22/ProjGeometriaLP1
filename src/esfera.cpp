#include <iostream>
#include <cmath>
#include "./../include/esfera.h"
using namespace std;

void esfera(int raio){
  float area;
  float vol;
  float pi = 3.1416;
  area = pow(raio, 2)* 4 * pi;
  vol = (pow(raio, 3)* 4 * pi)/3;

  cout << "Area da esfera: " << area << endl;
  cout << "Volume da esfera: " << vol;
}