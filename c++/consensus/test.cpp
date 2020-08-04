#include <iostream>
namespace std_msgs_test {

  template <class ContainerAllocator>
  struct Floa64_
  {
    ContainerAllocator a;
  };
}
using namespace std_msgs_test;
using namespace std;
int main(){

  Floa64_<int> a;
  a.a = 3;
  cout<<a.a<<endl;

}
