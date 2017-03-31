#include <iostream>
using namespace std;
#include "Cube.h"

int main(){
  Cube c1(3);
  std::cout<<"Volume c1  = "<<c1.getVolume()<<"\n";
  std::cout<<"Surface Area c1 = "<<c1.getSurfaceArea()<<"\n\n";

  Cube c2(5);
  std::cout<<"Volume c2 = "<<c2.getVolume()<<"\n";
  std::cout<<"Surface Area c2 = "<<c2.getSurfaceArea()<<"\n";

  return 0;
}
