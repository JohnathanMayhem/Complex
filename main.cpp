#include <iostream>
#include "Complex.h"

int main()
{
  double number;
  std::cin>>number;
  Complex a (1, 1);
  Complex b (1, 1);
  Complex res = a+b;
  res.polarForm();
  std::cout<<res<<std::endl;
  res = a * b;
  std::cout<<res<<std::endl;
  res = a / b;
  std::cout<<res<<std::endl;
  res = a + number;
  std::cout<<res<<std::endl;
  res = a - number;
  std::cout<<res<<std::endl;
  res = a * number;
  std::cout<<res<<std::endl;
  res = a / number;
  std::cout<<res<<std::endl;
  const Complex c (1, 5);
  c.polarForm();
  res.polarForm();
  if (a != b){
    std::cout<<"they are not equal";
  }else{
    std::cout<<"they are equal";
  }
  Complex zero (0, 4);
  zero.polarForm();
  Complex com (1, 1);
  com.polarForm();
  com = 1+a;
  com.polarForm();

  return 0;
}
