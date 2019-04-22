#pragma once
#include "stdafx.h"
#include "circle_18l1085.h"
circle::circle(){
radius=0;
}
circle::circle(int r,string Col)
	:shape(Col)
{
	type="circle";
	radius=r;
}
float circle::area(){

a=3.14*(pow(radius,2));
return a;
}
void circle::print(){
	shape::print();
	cout<<"Area of circle is"<<area();
}

circle::~circle(){
cout<<"~circle()"<<endl;
}
