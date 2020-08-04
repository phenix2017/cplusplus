//function templete
//
#include <iostream>

using namespace std;
//Function
// Generic template
template <class T>
T GetMax(T a, T b){

  T result;
  result = (a>b)? a:b;
  return result;
}

//Class
template <class T>
class mycontainer{
  T element;
  public:
  mycontainer(T arg){
    element = arg;
  }
};
// Specialization
template <>
class mycontainer <char>{
  char element;
};

int main(){
  int i =5, j=6, k;
  long l =  10, m = 5, n;
  k = GetMax<int>(i,j);
  cout<< k <<endl;
  n = GetMax<int>(l, m);
  cout<< n<<endl;
}
