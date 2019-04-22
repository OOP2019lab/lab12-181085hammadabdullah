#pragma once
#include "stdafx.h"
#include "shape_18l1085.h"
shape::shape(){
	type="\0";
	a=0;
}
shape::shape(string Col){
	color=Col;
	a=0;
}
shape::shape(const shape &obj){
	type=obj.type;
	color=obj.color;
	a=obj.a;

}
void shape::setarea(float A){
	a=A;
}
float shape::area(){
	
	return a;
}
void shape:: print(){
	cout<<"The type of shape is :"<<type<<endl;
	cout<<"Colour is :"<<color<<endl;
}
shape::~shape(){
	cout<<"~shape()"<<endl;
}
