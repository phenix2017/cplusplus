#include <iostream>

void foo(double (&bar)[10]){
for(int i=0; i<10; i++){
  bar[i] = i;
}
}
template <typename T, size_t N>
void fo(T(&bar)[N]){
  //
  for(int i=0;i<N;i++){
    bar[i] = i;
  }

}



using namespace std;

int main(){
  double a[10] = {0,1};
  foo(a);
  for(int i=0;i<10;i++){
    cout<<a[i]<<endl;
  }
  /* cout<<"Hello"<<endl; */
  return 0;
}
