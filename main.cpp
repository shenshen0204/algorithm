#include <cstdint>
#define A int
#include <iostream>

int main() {
  std::int8_t myInt{65};  // 初始化 myInt 为 65
  A a{23};
  std::cout << a << '\n';
  std::cout << myInt << '\n';  // 我们可能期望打印 65
  std::cout << static_cast<int>(myInt) << '\n';

  const double gravity{9.8};
  gravity = 10;
  return 0;
}