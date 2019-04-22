#pragma once
#include "stdafx.h"
#include "triangle_18l1085.h"
triangle::triangle(){
	base=height=0;
}
triangle::triangle(float b,float h,string Col)
	:shape(Col)
{
	type="triangle";
	base=b;
	height=h;
}
float triangle::area()
{
	a=(base*height)/2;
	return a;
}
void triangle::print(){
	shape::print();
	cout<<"Area of Triangle is :"<<area();
}
triangle::~triangle(){
	cout<<"~triangle()"<<endl;
}

