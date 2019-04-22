#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class shape{
protected:
	string type;
	float a;
public:
	string color;
	shape();
	shape(string Col);
	shape(const shape &obj);
	virtual float area();
	void setarea(float a);
	virtual void print();
	virtual ~shape();
};
