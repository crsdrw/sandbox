#include "stdafx.h"
#include "MyClass.h"
#include <iostream>

namespace {
  template<typename T> void
  TypeDependentFunction() {
    T i = 42;
    std::cout << i << std::endl;
  }

  template<> void
  TypeDependentFunction<float>() {
    float i = 42.0;
    std::cout << i << std::endl;
  }
}

namespace sbx {
  void
    MyClass::MyFunction(bool discrete) {
    if (discrete)
      TypeDependentFunction<int>();
    else
      TypeDependentFunction<float>();
  }

  template <typename T> void
  MyClass::MyTemplateFunction() {
    TypeDependentFunction<T>();
  }

  template void MyClass::MyTemplateFunction<int>();
  template void MyClass::MyTemplateFunction<float>();
} // namespace sbx