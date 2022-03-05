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
git chackout patch1
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
3. **commit**, **push** локальную ветку в удалённый репозиторий.
```
git commit -am "Without namespace"
git push -u origin patch1
```
4. Проверьте, что ветка `patch1` доступна в удалёный репозитории.
```
https://github.com/andreyermilof/lab02/tree/patch1
```
5. Создайте pull-request `patch1 -> master`.
```
https://github.com/andreyermilof/lab02/pull/1
```
6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.
```
#include <iostream>
#include <string>

int main ()
{
    std::string name;
    std::cout << "Enter name:";
    std::cin >> name; //Ввод
    std::cout << "Hello world from " << name << std::endl;//Вывод
    return 0;
}
```
7. **commit**, **push**.
```
git commit -am "Code with comments"
git push -u origin patch1
```
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request
```
https://github.com/andreyermilof/lab02/pull/1/commits/
```
9. В удалённый репозитории выполните слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
10. Локально выполните **pull**.
```
git pull origin
```
11. С помощью команды **git log** просмотрите историю в локальной версии ветки `master`.
```
git log
```
12. Удалите локальную ветку `patch1`.
```
git branch -d patch1
```
### Part 3
1. Создайте новую локальную ветку `patch2`.
```
git branch patch2
git checkout patch2
```
2. Измените *code style* с помощью утилиты **clang-format**. Например, используя опцию `-style=Mozilla`.
```
clang-format -i -style=Mozilla hello_world.cpp
```
3. **commit**, **push**, создайте pull-request `patch2 -> master`.
```

