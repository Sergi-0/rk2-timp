#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
  Singleton( Singleton const& ) = delete;
  Singleton& operator=( Singleton const& ) = delete;

  static Singleton* get();
  static void restart();
  void tell();

private:
  Singleton(){}
  static Singleton *instance;
};

#endif // SINGLETON_H

