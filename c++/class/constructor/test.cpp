#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    //data member
    string geekname;
    // Memeber function
    void pritname(){
      cout<< "Geekname is " << geekname;
    }
    int id;
    // Defualt constructor
    A(){
      cout << "Default Constructor called" << endl;
      id = -1;
    }
    A(int x){
      cout <<"parameterized Constructor called"<< endl;
      id = x;
    }
};


int main(){

  A A_obj;
  A A_obj1(1);
  return 0;
}
