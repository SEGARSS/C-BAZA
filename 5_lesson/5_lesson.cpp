//Ввод данных. Cin. Пример. Синтаксис. C++ для начинающих. Урок #7 - Видео №9. 

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");

	int var1, var2;
	int Vivi, Vivi2;

	cout << "Первый Вариант ввода команды cin:" << endl;
	cout << "Введите первое число: ";
	cin >> var1;

	cout << "Введите второе число: ";
	cin >> var2;

	cout << "Первое число = " << var1 << " " << " Второе число = " << var2 << endl << endl;

	cout << "Втторой варианта ввода команды cin:" << endl;
	cout << "Введите два число: ";
	cin >> Vivi >> Vivi2;

	cout << "Первое число = " << Vivi << " " << " Второе число = " << Vivi2 << endl;
}
