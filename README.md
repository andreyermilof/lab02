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