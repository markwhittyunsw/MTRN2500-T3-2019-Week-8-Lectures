// tuple example from http://www.cplusplus.com/reference/tuple/tuple/?kw=tuple
#include <iostream>     // std::cout
#include <tuple>        // std::tuple, std::get, std::tie, std::ignore

int main ()
{
  std::tuple<int,char> foo (10,'x');
  auto bar = std::make_tuple ("test", 3.1, 14, 'y');

  std::get<2>(bar) = 100;                                    // access element

  int myint; char mychar;

  std::tie (myint, mychar) = foo;                            // unpack elements
  std::tie (std::ignore, std::ignore, myint, mychar) = bar;  // unpack (with ignore)

  mychar = std::get<3>(bar);

  std::get<0>(foo) = std::get<2>(bar);
  std::get<1>(foo) = mychar;

  std::cout << "foo contains: ";
  std::cout << std::get<0>(foo) << ' ';
  std::cout << std::get<1>(foo) << '\n';
  std::cout << "bar contains: ";
  for(int i = 0; i < 4; i++) {
    std::cout << std::get<i>(bar) << ' ';
  }
  std::cout << std::endl
   // std::cout << std::get<1>(bar) << ' ';
  //  std::cout << std::get<2>(bar) << ' ';
  //  std::cout << std::get<3>(bar) << std::endl;

  return 0;
}
