//����� ����������� ������� �������. ����� ������������ �������� � �������. C++ ��� ����������. ��#8 - ����� 39.

//����� ����������� ������� �������.

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int const SIZE = 10; 
	int arr[SIZE];
	bool already;

	for (int i = 0; i < SIZE; )
	{
		already = false;
		int ranom = rand() % 20;

		for (int j = 0; j < i; j++) 
		{
			if (arr[j] == ranom)
			{
				already = true;
				break;
			}
		}
		if (already!= true)
		{
			arr[i] = ranom;
			i++;
		}
	}

	int min = arr[0]; //�� ����� ����������� ����� ����������� ���������� ������� ������� �������	����� �� �� ����� � ����� ��� ���������.

	for (int i = 1; i < SIZE; i++) /*����� i �� ����������� 1� ������� ������, ��� ��� ������� �������
		������� �� ��� ��������� ��������� min.*/
	{
		if (arr[i] < min)/*����, � ������ 1 ��������, ����� ������ ��� � ������� �������� ������ � ���
			���� ����� ���������� min, �� ���� �� �������, ���������� min ���������� ��� ��������.
			� ���, �� �������� ���� �����, � ����� ����������� ����� � �������, �������� ��� min � 
			������� ������ � ��������.*/
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "���������� ����� � ������� - " << min << endl; 
}