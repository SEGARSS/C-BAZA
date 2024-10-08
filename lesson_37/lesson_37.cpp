﻿#include <iostream>
using namespace std;


void main2(); // Для вызова её после void main(), так как int main2(); идёт ниже void main().
//-------------------------------------------------------------------------------
template <typename T1, typename T2>
T1 sum(T1 a, T2 b)
{
    return a + b;
}
//-------------------------------------------------------------------------------
void main()
{
    setlocale(LC_ALL, "Ru");

    cout << "Вывод void main():" << endl;
    cout << sum(5, 10) << endl;
    cout << sum(5, 4.6) << endl;

    // Вызов main2() для вывода результатов из main2
    main2(); // Добавляем вызов main2() здесь
}
//-------------------------------------------------------------------------------
/*
Реализация через void когда ничего не возвращаем.
Посути тоже самое, просто ещё можно увидить что ему пофиг, шаблону что возвращать, хоть слово.
Также такая заметка, шаблон typename и шаблон class работаю одинаково. Просто typename это из языка (С) пришол,
class это уже вывод из С++. Без разницы что использовать. Но, ненадо их смешивать.
Вот так - template <typename T1, class T2> - писать ненадо, выбрать нужно, чтото одно, одну запись и использовать.
*/
//-------------------------------------------------------------------------------
template <typename T3, typename T4>
void sum2(T3 a, T4 b)
{
    cout << a << b << endl;
}
//-------------------------------------------------------------------------------
void main2()
{
    setlocale(LC_ALL, "Ru");

    cout << "Вывод void main2():" << endl;
    sum2(2, 4.5);
    sum2(2, " параметр");
}
//-------------------------------------------------------------------------------
/*
Важное уточнение. Шаблон typename T. Написав и объявив, T может принимать только один параметр, любой, но только
один! Он не может одновременной быть и int и double, он будет что-то одно!
Тоесть, если мы хотим порабоать int и double одновременно, разделяем их, чтоб одно принимало int а другой double
вот таким образом - template <typename T1, typename T2> - и по данной записи один будет принимать к римеру int
а другой double. А если запись вот такая <typename T> а функции void sum2(T a, T b) то мы ограниченны в типе данных,
в любом одном, в том который первый укажем.
Если проще, указали тольк Т, с одним типом работаем(с любым), указали Т1, Т2, с двумя типами. Т1,Т2,Т3, уже с тремя
типами данных.
*/