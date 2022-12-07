#include <iostream>

// Factory Method
class LongCtorClass
{
public:
  LongCtorClass(int a, int b, int c, int d) { }
};

LongCtorClass* Create(int a) 
  {
    return new LongCtorClass(a, 2, 3, 4);
  }

int main()
{
  auto a = new LongCtorClass(1, 2, 3, 4);
  auto b = new LongCtorClass(3, 2, 3, 4);
  // -> 
  auto new_b = Create(3);


  auto factoryMethod = [](int a) -> LongCtorClass { return new LongCtorClass(a, 2, 3, 4); };
  auto lambda_a = factoryMethod(3);

  return 0;
}