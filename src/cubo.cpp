#include <iostream>
#include <cmath>
#include "./../include/cubo.h"
using namespace std;
void cubo(int aresta){
  float area;
  float vol;
  area = 6 * pow(aresta, 2);
  vol = pow(aresta, 3);

  cout << "Area do cubo: " << area << endl;
  cout << "Volume do cubo: " << vol;
}