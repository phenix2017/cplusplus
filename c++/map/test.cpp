#include <iostream>
#include <map>
#include <typeinfo>
bool fncomp (char lhs, char rhs) {return lhs<rhs;}

struct classcomp {
  bool operator() (const char& lhs, const char& rhs) const
  {return lhs<rhs;}
};

int main ()
{
  std::map<char,int> first;

  first['a']=10;
  first['b']=30;
  first['c']=50;
  first['d']=70;
  // emplace doesnot work since key value a exist
  first.emplace('a', 0);
  std::cout<<first['a']<<std::endl;
  // emplace a new key, value pair
  first.emplace('e', 0);
  std::cout<<"e="<<first['e']<<std::endl;
  //a hint on the insertion position.
  first.emplace_hint(first.end(),'e', 10);
  std::cout<<"e="<<first['e']<<std::endl;
  first.insert(std::pair<int, int>(10,5));
  std::cout<<"The int key"<<first[10]<<std::endl;
  // construct and insert an element
  std::map<char, int> test;
  test.emplace('a', 0);

  std::map<char,classcomp> newtest;




  std::cout<<test.begin()->first<<"=>"<<test.begin()->second<<std::endl;
  // show content: key, value
  // map.begin() returns an iterator
  std::cout<<first.begin()->first<<std::endl;
  std::cout<<first.crbegin()->first<<std::endl;
  std::cout<<&(*first.crbegin())<<std::endl;
  std::cout<<&(*first.end())<<std::endl;
  /* std::cout<<(*first.cbegin()).first<<std::endl; */

  for(std::map<char,int>::iterator it=first.begin(); it!=first.end();it++){
    std::cout<<it->first<<"=>"<<it->second<<std::endl;
    /* std::cout<< typeid(it).name()<<std::endl; */

  }
  //constant iterator
    // print content->:
  std::map <char, int> mymap (first.begin(), first.end());
  std::cout << "mymap contains:";
  for (auto it = mymap.cbegin(); it!= mymap.cend(); ++it)
    std::cout << " [" << (*it).first << ':' << (*it).second << ']';
  std::cout << '\n';
  // show the value based on the key
  std::cout<<first['a']<<std::endl;



  std::map<char,int> second (first.begin(),first.end());

  std::map<char,int> third (second);

  std::map<char,int,classcomp> fourth;                 // class as Compare

  bool(*fn_pt)(char,char) = fncomp;
  std::map<char,int,bool(*)(char,char)> fifth (fn_pt); // function pointer as Compare

  return 0;
}
