﻿//Инкремент и декремент. Постфиксный и префиксный. Пример. Синтаксис. C++ для начинающих. Урок #9 - Видео №12.


#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Инкремент - Пример с переменной (a)" << endl;
	//Инкремент идёт после переменной.
	int a = 1;
	cout << a << endl;
	a++;
	cout << a << endl << endl;

	cout << "Декремент - Пример с переменной (b)" << endl ;
			
	//декремент простовляеться перед переменной.
	int b = 1;
	cout << b << endl;
	cout << --b << endl << endl; /*В данном примере, мы сразу в указали чтоб нам отняло -1 в терминале, без дополнительной
	записи - b--, но есдиственное что для терминало нужно сразу указать приорите, что сначала отнеми единицу а 
	потом покажи нам данные. Еслиб написали так cout << b-- << endl; получили бы на выходите также 1, он бы не понял
	что требуеться отнять, так как после b идёт -- и больше ничего и выше строчки cout << --b << endl; мы не указывали
	b--.*/
	

	// ++ значит прибавить единицу, а если -- то уменьшение на еденицу.

	cout << "Пример в коде" << endl;
	
	int c = 1, v;
	v = ++c * c;
	cout << v << endl;
	cout << c << endl;
}