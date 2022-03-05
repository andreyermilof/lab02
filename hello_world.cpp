#include <iostream>
#include <string>

int
main()
{
  std::string name;
  std::cout << "Enter name:";
  std::cin >> name;                                      //Ввод
  std::cout << "Hello world from " << name << std::endl; //Вывод
  return 0;
}