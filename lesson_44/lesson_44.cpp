//Возврат нескольких значений функции через указатели. Функция возвращает несколько значений. #49 - Видео №59

#include<iostream>
using namespace std;

/*Пример того, как можно несколько сразу указателей передовать в функцию и с ними работать. */

void foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;
	(*pb) ++;
	(*pc) = -20;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Пример, передачи параметров при их присвоении:" << endl;
	int a = 0, b = 0, c =1;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "==================" << endl;

	cout << endl;

	cout << "Пример, передачи параметров по указателям через функцию foo:" << endl;
	foo(&a,&b,&c); 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "==================" << endl;
}
