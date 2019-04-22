#pragma once
#include "stdafx.h"
#include "rectangle_18l1085.h"
rectangle::rectangle(){
	length=width=0;
}
rectangle::rectangle(float l,float w,string c)
	:shape(c)
	{

	type="rectangle";
	length=l;
	width=w;
}
float rectangle::area(){

a=length*width;
return a;
}
void rectangle::print(){
 shape::print();
cout<<"Area of rectangle is :"<<area();
}
rectangle::~rectangle(){
cout<<"~rectangle()"<<endl;
}