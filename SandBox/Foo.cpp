#include "stdafx.h"
#include "Foo.h"
#include <iostream>

template<typename T>
void Foo<T>::g()
{
  std::cout << "Foo<T>::g()\n";
}

template<typename T>
void Foo<T>::h()
{
  std::cout << "Foo<T>::h()\n";
}

template class Foo<int>;