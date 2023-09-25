#include <iostream>
#include "./../include/paralelepipedo.h"
using namespace std;

void paralelepipedo(int aresta, int aresta2, int aresta3){
  float area;
  float vol;
  area = (2*aresta*aresta2)+(2*aresta*aresta3)+(2*aresta3*aresta2);
  vol = aresta*aresta2*aresta3;

  cout << "Area do parelelepipedo: " << area << endl;
  cout << "Volume do parelelepipedo: " << vol;
}