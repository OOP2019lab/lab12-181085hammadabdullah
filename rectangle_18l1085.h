#pragma once
#include "shape_18l1085.h"
class rectangle:public shape{
private:
	float length;
	float width;
public:
	rectangle();
	rectangle(float l,float w,string c);
	float area();
	void print();
	~rectangle();
};