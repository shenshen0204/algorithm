#include <iostream>

int main() {
  double d{5};  // okay: int 转 double 安全
  std::cout << static_cast<int>(5.5);
  return 0;
}