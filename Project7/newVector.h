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

	//������ ������ �������
	int size()const //����� const ������������ ��� ������������ �������
	{
		return cur_size;
	}




	//operators
	Vector operator=(const Vector & obj); //�������� ������������
	double & operator[](int index); //������������ �������� �� ��������� �������


	double & pushBack(double e);		  //���������� �������� � �����
	double & at(int index);   //������������ �������� �� ��������� �������
	bool operator ==(Vector  obj);
	

	~Vector()
	{
		delete[]els;
		els = nullptr;
	}
};