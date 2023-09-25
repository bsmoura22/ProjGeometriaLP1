#include <iostream>
#include <cmath>
#include "./../include/piramide.h"
using namespace std;

void piramide(int aresta, int altura){
 float area;
 float vol;
 float raiz = sqrt(3);
 
 area = (((pow(aresta, 2) * raiz)/4)*4) + (pow(aresta, 2));
 vol = (1 * pow(aresta, 2) * altura)/3;
  
  cout << "Area da piramide: " << area << endl;
  cout << "Volume da piramide: " << vol;
}