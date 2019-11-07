// typeid test
#include <iostream>
#include <typeinfo>
using namespace std;
class Test {};

int main () {
  int * a;
  int b;
  Test T;
  a=0; b=0;
  if (typeid(a) != typeid(b))
  {
    std::cout << "a and b are of different types:" << std::endl;
    std::cout << "a is: " << typeid(a).name() << std::endl;
    std::cout << "b is: " << typeid(b).name() << std::endl;
    std::cout << "T is: " << typeid(T).name() << std::endl;
  }
  return 0;
}
