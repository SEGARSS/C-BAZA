﻿//Рекурсия что это. Рекурсия программирование. Рекурсия и цикл. Рекурсия с++. Для начинающих. Урок #43 - Видео №53

#include<iostream>
using namespace std;

/*
Рекурсия. Если на неё посмотреть, она работает в виде счётчика for но в обратном порядке.
По тем данным что есть, мы положили в неё первое значение 5, второе 4, третье 3, четвёртое 2, пятое 1, 
далее шестое 0, и седьмое это уже return. Почему 7 так, потому что мы создали условие, если if (a < 1)
то станет return 0(вернёт 0). А стало оно потому, что поставили ниже инкремент a--; и таким образом дошли до 0.
Дальше, стало идти в обратном порядке, 7мое значение - выполнилось первым, 6 значение вторым, далее 5тое значение 
выполнениться третим и так до самого низа, по ней дойдём до первого действия, где у нас первым было заложено 5ка,
а так как она была заложенна первая, будет выполнена последним.
Картинка примера в файле README.
*/
//----------------------------------------------------------------------
int foo(int a)
{
	if (a < 1) // Условие выхода из рекурсии.
		return 0; // Как только (а) станет меньше 1, цикл прекратится.

	a--;
	cout << a << endl;

	return foo(a);
}
//----------------------------------------------------------------------
void main()
{
	setlocale(LC_ALL, "ru");
	foo(5); //Задава 5 итерайций, получим ашь 7мь действий.
}
//----------------------------------------------------------------------