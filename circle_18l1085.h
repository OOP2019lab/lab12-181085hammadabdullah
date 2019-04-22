#pragma once
#include "shape_18l1085.h"
class circle:public shape
{
private:
	float radius;
public:
	circle();
	circle(int r,string Col);
	float area();
	void print();
	void setr(int R);
	~circle();
};