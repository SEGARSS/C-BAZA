//Что такое null pointer. null c++ что это. nullptr c++ что это. nullptr c++11. Урок #54 - Видео №66.

#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");

	cout << "===========" << endl;
	int *pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa;
	cout << "===========" << endl;

	pa = nullptr;
	cout << pa << endl;
	delete pa;
	cout << "===========" << endl;

	cout << pa << endl;
	cout << "===========" << endl;
}
/*
Код - (pa = 0;) (pa = NULL;) (pa = nullptr;) - по сути одинаковы, и служат для того, чтобы после очистки указателя -
(delete pa;) мы больше не смогли повторно затереть(воизбежания ошибки). Но, более лучше ииспользовать запись (pa = nullptr;)
nullptr - уже более современная запись, и она избегает большиства ошибок.
И такой момент, не вкоем случаи нельзя писать сначала (pa = nullptr;) а потом ниже (delete pa;) это приведёт к утечке
памяти, и мы уже не сможем до неё достучаться. Поэтому, обезательно сначала затираем указатель кодом delete а уже
потом применяем к указателю nullptr.
*/