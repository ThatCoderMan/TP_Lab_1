# TP Lab 1

<details>
<summary>Project stack</summary>

- C++

</details>


## Описание
Программа для хранения данных о животных
Класс Животное хранит данные о рыбах, птицах и кошках. Для каждой рыбы
определено: порода, окрас, тип питания. Для каждой птицы определено:
порода, окрас, чем питается, где обитает. Для каждой кошки определено:
порода, окрас, ФИО владельца, кличка.


## Методы классов:

> ### абстрактный класс [Animal](https://github.com/ThatCoderMan/TP_Lab_1/blob/main/Header%20Files/Animal.h?plain=1#L6-L14)
> 
> | Метод                | Описание                                                                                      |
> |----------------------|-----------------------------------------------------------------------------------------------|
> | Animal()             | Конструктор класса Animal.                                                                   |
> | ~Animal()            | Деструктор класса Animal.                                                                    |
> | virtual void printInfo()  | Виртуальная функция для вывода информации об объекте.                                           |
> | virtual void edit()      | Виртуальная функция для редактирования информации об объекте.                                  |
> | virtual void save()      | Виртуальная функция для сохранения информации об объекте.                                      |

> ### класс [Bird](https://github.com/ThatCoderMan/TP_Lab_1/blob/main/Header%20Files/Bird.h?plain=1#L4-L32)
> 
> | Метод                | Описание                                                                                      |
> |----------------------|-----------------------------------------------------------------------------------------------|
> | Bird()               | Конструктор класса Bird без параметров.                                                       |
> | Bird(string breed)   | Конструктор класса Bird с параметром "порода".                                                 |
> | Bird(const Bird& Bird_copy) | Конструктор копирования для класса Bird.                                                    |
> | ~Bird()              | Деструктор класса Bird.                                                                       |
> | string get_breed() const   | Метод для получения значения поля "порода" класса Bird.                                          |
> | void set_breed(string Bird_breed) | Метод для установки значения поля "порода" класса Bird.                                   |
> | string get_color() const   | Метод для получения значения поля "цвет" класса Bird.                                           |
> | void set_color(string Bird_color) | Метод для установки значения поля "цвет" класса Bird.                                      |
> | string get_food() const    | Метод для получения значения поля "пища" класса Bird.                                            |
> | void set_food(string Bird_food) | Метод для установки значения поля "пища" класса Bird.                                       |
> | string get_habitat() const | Метод для получения значения поля "среда обитания" класса Bird.                                 |
> | void set_habitat(string Bird_habitat) | Метод для установки значения поля "среда обитания" класса Bird.                            |
> | void printInfo() override | Переопределенная функция printInfo() для класса Bird.                                           |
> | void edit() override     | Переопределенная функция edit() для класса Bird.                                               |
> | void save() override     | Переопределенная функция save() для класса Bird.                                               |

> ### класс [Cat](https://github.com/ThatCoderMan/TP_Lab_1/blob/main/Header%20Files/Cat.h?plain1#L4-L32)
>
>| Метод                | Описание                                                                                      |
>|----------------------|-----------------------------------------------------------------------------------------------|
>| Cat()                | Конструктор класса Cat без параметров.                                                        |
>| Cat(string breed)    | Конструктор класса Cat с параметром "порода".                                                  |
>| Cat(const Cat& Cat_copy)    | Конструктор копирования для класса Cat.                                                     |
>| ~Cat()               | Деструктор класса Cat.                                                                        |
>| string get_breed() const   | Метод для получения значения поля "порода" класса Cat.                                           |
>| void set_breed(string Cat_breed) | Метод для установки значения поля "порода" класса Cat.                                      |
>| string get_color() const   | Метод для получения значения поля "цвет" класса Cat.                                            |
>| void set_color(string Cat_color) | Метод для установки значения поля "цвет" класса Cat.                                       |
>| string get_owner_name() const | Метод для получения значения поля "имя владельца" класса Cat.                                 |
>| void set_owner_name(string Cat_owner_name) | Метод для установки значения поля "имя владельца" класса Cat.                            |
>| string get_nickname() const  | Метод для получения значения поля "прозвище" класса Cat.                                        |
>| void set_nickname(string Cat_nickname) | Метод для установки значения поля "прозвище" класса Cat.                                   |
>| void printInfo() override | Переопределенная функция printInfo() для класса Cat.                                            |
>| void edit() override     | Переопределенная функция edit() для класса Cat.                                                |
>| void save() override     | Переопределенная функция save() для класса Cat.                                                |

> ### класс [Fish](https://github.com/ThatCoderMan/TP_Lab_1/blob/main/Header%20Files/Fish.h?plain=1#L4-L28)
> 
>| Метод                | Описание                                                                                      |
>|----------------------|-----------------------------------------------------------------------------------------------|
>| Fish()               | Конструктор класса Fish без параметров.                                                       |
>| Fish(string breed)   | Конструктор класса Fish с параметром "порода".                                                 |
>| Fish(const Fish& Fish_copy) | Конструктор копирования для класса Fish.                                                    |
>| ~Fish()              | Деструктор класса Fish.                                                                       |
>| string get_breed() const   | Метод для получения значения поля "порода" класса Fish.                                          |
>| void set_breed(string fish_breed) | Метод для установки значения поля "порода" класса Fish.                                    |
>| string get_color() const   | Метод для получения значения поля "цвет" класса Fish.                                           |
>| void set_color(string fish_color) | Метод для установки значения поля "цвет" класса Fish.                                      |
>| string get_food_type() const | Метод для получения значения поля "тип пищи" класса Fish.                                       |
>| void set_food_type(string fish_food_type) | Метод для установки значения поля "тип пищи" класса Fish.                                 |
>| void printInfo() override | Переопределенная функция printInfo() для класса Fish.                                           |
>| void edit() override     | Переопределенная функция edit() для класса Fish.                                               |
>| void save() override     | Переопределенная функция save() для класса Fish.                                               |


> ## Класс [Keeper](https://github.com/ThatCoderMan/TP_Lab_1/blob/main/Header%20Files/Keeper.h?plain=1#L10-L29)
>
>| Метод                | Описание                                                                                      |
>|----------------------|-----------------------------------------------------------------------------------------------|
>| Keeper()             | Конструктор класса Keeper без параметров.                                                     |
>| Keeper(int size)     | Конструктор класса Keeper с параметром "размер".                                               |
>| ~Keeper()            | Деструктор класса Keeper.                                                                      |
>| int get_len()            | Метод для получения текущей длины очереди.                                                     |
>| void add(Animal* n_data)  | Метод для добавления нового элемента в очередь.                                              |
>| void edit(int index)      | Метод для редактирования элемента в очереди по индексу.                                      |
>| void remove(int index)    | Метод для удаления элемента из очереди по индексу.                                           |
>| void clear()             | Метод для очистки очереди.                                                                    |
>| void save()              | Метод для сохранения данных.                                                                  |
>| void load()              | Метод для загрузки данных.                                                                    |
>| void show()              | Метод для отображения данных.                                                                  |

#### Авторы проекта:

- [Артемий Березин](https://github.com/ThatCoderMan)
