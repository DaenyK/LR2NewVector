#include "newVector.h"
#include <locale>
#include <windows.h>
#include <time.h>

void main()
{
	setlocale(LC_ALL, "Russian");

	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

	Vector v;
	v.pushBack(10);
	v.pushBack(2.5);
	v.pushBack(4.3);
	v.pushBack(7.3);
	v.pushBack(8.1);

	Vector  v2;
	v2.pushBack(24);
	v2.pushBack(9.9);
	v2.pushBack(2.6);
	v2.pushBack(7.3);
	v2.pushBack(5.2);

	Vector v3 = (v);


	short nz, answer;
	do
	{
		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 46));
		cout << "выберите нужное задание по векторам:" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cout << "1 - []\n2 - +\n3- -\n4 - <<\n5 - >>\n6 - ==\n7 - !=\n8 - ~\n";
		cin >> nz;
		system("cls");
		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 46));
		cout << "дан объект v класса Vector:\n";
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		for (int i = 0; i < v.size(); i++)
			cout << v.at(i) << "\t";

		switch (nz)
		{
		case 1:
		{
			int index; double els;
			cout << "\n\n1.реализация оператора[]\n";
			cout << "(если вы введете не соответсвующий индекс, элемент будет помещен в нулевой \nиндекс)\n";
			cout << "введите индекс: ";
			cin >> index;
			cout << "введите элемент: ";
			cin >> els;
			v[index] = els;
			cout << endl;
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
		}break;

		case 2:
		{
			cout << "\n\n2.реализация оператора +\n";
			cout << "\n\nдан второй объект v2 класса Vector:\n";
			for (int i = 0; i < v2.size(); i++)
				cout << v2[i] << "\t";
			v + v2;
			cout << "\nОператор + складывает два вектора. \n";
			for (int i = 0; i < v2.size(); i++)
				cout << v[i] << "\t";
		}break;

		case 3:
		{
			cout << "\n\n3.реализация оператора -\n";
			cout << "\n\nдан второй объект v2 класса Vector:\n";
			for (int i = 0; i < v2.size(); i++)
			{
				cout << v2[i] << "\t";
			}
			v - v2;
			cout << "\nОператор – удаляет из первого вектора значения, \nкоторые есть во втором векторе.\n";
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
		}break;

		case 4:
		{
			int pos;
			cout << "\n\n4.реализация оператора <<\n";
			cout << "введите любой индекс: ";
			cin >> pos;
			v << pos;
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
			cout << endl;
		}break;

		case 5:
		{
			double num;
			cout << "\n\n5.реализация оператора >>\n";
			cout << "введите любое число: ";
			cin >> num;
			v >> num;
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
			cout << endl;
		}break;

		case 6:
		{
			cout << "\n\n6.реализация оператора ==\n";
			cout << "\n\nдан второй объект v2 класса Vector:\n";
			for (int i = 0; i < v2.size(); i++)
			{
				cout << v2[i] << "\t";
			}
			int result = (v == v2);
			cout << endl;
			if (result == 1)
				cout << "два вектора равны\n";
			else cout << "эти векторы НЕ равны\n";
		}break;

		case 7:
		{
			cout << "\n\n7.реализация оператора ==\n";
			cout << "\n\nдан второй объект v3 класса Vector:\n";
			for (int i = 0; i < v3.size(); i++)
				cout << v3[i] << "\t";

			int result = (v != v3);
			cout << endl;
			if (result == 1)
				cout << "два вектора НЕ равны\n";
			else cout << "эти векторы равны\n";
		}break;
		
		case 8:
		{
			v >> v[0];
			v >> v[1];
			cout << "\nмодифицируем объект v\n";
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
			cout << "\n\n8.реализация оператора ~\n";
			v.operator~();
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << "\t";
			cout << endl;
		}break;
		}
		cout << "\n\nхотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer > 0);


	v[0] = 1.8;
	v.at(1) = 5.4;

	cout << "\nПОСЛЕ pushBack:\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\t";








	cout << "\n\nоператор сравнения для объектов v3 и v\n";
	cout << (v3 == v) << endl;;



	cout << "\n\n";
	system("pause");
}