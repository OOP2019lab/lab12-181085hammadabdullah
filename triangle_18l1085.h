#pragma once
#include "shape_18l1085.h"
class triangle:public shape{
private:
	float base;
	float height;
public:
	triangle();
	triangle(float b,float h,string Col);
	float area();
	void print();
	~triangle();
};