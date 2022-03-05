### Part 1
1. Создайте пустой репозиторий на сервисе github.com.
```
https://github.com/andreyermilof/lab02
```
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:andreyermilof/lab02.git
git push -u origin main
```
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. 
```
#include <iostream>
using namespace std;int main ()
{cout << "hello world" << endl;return 0;}
```
4. Добавьте этот файл в локальную копию репозитория.
```
git add hello_worl.cpp
```
5. Закоммитьте изменения с осмысленным сообщением.
```
git commit -m "added hello_world.cpp"
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
```
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name;
    cout << "Enter name:";
    cin >> name;
    cout << "Hello world from " << name << endl;
    return 0;
}
```
7. Закоммитьте новую версию программы.
```
git commit -am "New version of the program"
```
8. Запуште изменения в удалёный репозиторий.
```
git push -u origin main
```
9. Проверьте, что история коммитов доступна в удалёный репозитории.
```
https://github.com/andreyermilof/lab02/commits/main
```
### Part 2
1. В локальной копии репозитория создайте локальную ветку `patch1`.
```
git branch patch1
```
2. Внесите изменения в ветке patch1 по исправлению кода и избавления от `using namespace std;`.
```
#include <iostream>
#include <string>

int main ()
{
    std::string name;
    std::cout << "Enter name:";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
```
