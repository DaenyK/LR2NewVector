#include <iostream>
#include "newVector.h"
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	Vector v;

	v.pushBack(10);
	v.pushBack(2.5);
	v.pushBack(4.3);
	
	cout << "дан объект v класса Vector ДО:\n";
	for (int i = 0;i < v.size();i++)
		cout << v.at(i) << "\t";

	v[0] = 1.8;
	v.at(1) = 5.4;

	cout << "\nПОСЛЕ pushBack:\n";
	for (int i = 0;i < v.size();i++)
		cout << v[i] << "\t";



	Vector  v2(v);
	cout << "\n\nVector v2 - реализация копирования v в v2\n";
	for (int i = 0;i < v2.size();i++)
		cout << v2[i] << "\t";


	Vector v3 = (v);
	//v3.pushBack(56);
	cout << "\n\nVector v3 - реализация, с помощью оператора присваивания \n";
	for (int i = 0;i < v3.size();i++)
		cout << v3[i] << "\t";


	cout << "\n\nоператор сравнения для объектов v3 и v\n";
	cout <<(v3 == v) << endl;;



	cout << "\n\n";
	system("pause");
	return 0;
}