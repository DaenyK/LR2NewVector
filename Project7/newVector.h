#pragma once
class Vector
{
private:
	int cur_size;
	int buf_size;
	double *els;

public:

	//constructors
	Vector();
	Vector(int size);
	Vector(const Vector&obj); // copy

	//узнать размер объекта
	int size()const //слово const используется для константного объекта
	{
		return cur_size;
	}




	//operators
	Vector operator=(const Vector & obj); //оператор присваивания
	double & operator[](int index); //вытаскивание элемента из указанной позиции


	double & pushBack(double e);		  //добавление элемента в конец
	double & at(int index);   //вытаскивание элемента из указанной позиции
	bool operator ==(Vector  obj);
	

	~Vector()
	{
		delete[]els;
		els = nullptr;
	}
};