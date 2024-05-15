#include "singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::get()
{
  if ( !instance )
  {
    instance = new Singleton();
  }
  return instance;
}

void Singleton::restart()
{
  if ( instance )
  {
    delete instance;
  }
}

void Singleton::tell()
{
  std::cout << "This is Singleton." << std::endl;
  // ...
}

