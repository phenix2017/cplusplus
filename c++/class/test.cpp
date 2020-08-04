#include <iostream>
using namespace std;
class Rectangel{
  int width, height;
  public:
  void  set_values(int, int);
  int area(void){return width*height;};
}rect;

void Rectangel::set_values(int x, int y){
  width = x;
  height = y;
}

int main(){
  // Two objects
  Rectangel rect, rectb;
  rect.set_values(3, 4);
  rectb.set_values(5, 4);
  cout<< "area:" <<rect.area();
  cout<< "area:" <<rectb.area();
  return 0;
}
