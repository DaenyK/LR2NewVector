#include "newVector.h"

Vector::Vector()
{
	cur_size = 0;
	buf_size;
	els = nullptr;
}


Vector::Vector(int size)
{
	cur_size = size;
	buf_size = size;
	els = new double[size];
	for (int i = 0; i < size; i++)
	{
		els[i] = 0;
	}
}

Vector::Vector(const Vector&obj) //copy
{
	this->cur_size = obj.size();
	this->buf_size = obj.size();
	this->els = new double[this->size()];
	for (int i = 0; i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}
}

Vector Vector :: operator=(const Vector & obj)
{
	this->cur_size = obj.size();
	this->buf_size = obj.size();
	this->els = new double[this->size()];
	for (int i = 0; i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}
	return *this;
}


double & Vector::pushBack(double e)
{
	if (buf_size <= 0)
	{
		buf_size = 2;

		els = new double[buf_size];
	}
	else
	{
		if (cur_size >= buf_size)
			buf_size *= 2;
		double*tmp;
		tmp = new double[buf_size];

		for (int i = 0;i < size();i++)
			tmp[i] = els[i];

		delete[]els;
		els = tmp;
	}

	els[cur_size++] = e;
	return els[cur_size - 1];
}

double &Vector::at(int index)
{
	if (index<0 || index>size())
		return els[0];
	else
		return els[index];
}


double & Vector ::operator [] (int index)
{
	if (index<0 || index>size())
		return els[0];
	else
		return els[index];
}

bool Vector :: operator==(Vector obj)
{
	if (size() != obj.size())
		return false;
	else
	{
		for (int i = 0; i < size();i++)
		{
			if (els[i] != obj.els[i])
				return false;
		}
	}
	return true;
}
