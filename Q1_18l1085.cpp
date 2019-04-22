// Q1_18l1085.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "circle_18l1085.h"
#include "rectangle_18l1085.h"
#include "shape_18l1085.h"
#include "triangle_18l1085.h"
using namespace std;

float sumArea(shape obj1,shape obj2){
	float s=0;
	s=obj1.area()+obj2.area();
	cout<<endl;
	return s;
}
int _tmain(int argc, _TCHAR* argv[])
{
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<<"Virtual"<<endl;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;
	//................................................//
	cout<<"Part 2"<<endl<<endl;
shape s1("Purple");
 
cout<<sumArea(t1,c1);
cout<<sumArea(s1,r1);
cout<<sumArea(s1,t1);
cout<<"Part 3"<<endl<<endl;
int a=0,b=0;
string c;
int count=5;
int n=0;
shape **shapes=new shape*[count];
for(int i=0;i<count;){
	cout<<"Press 1 for a triangle, 2 for rectangle and 3 for a circle."<<endl;
	cin>>n;
	if(n==1){
	cout<<"Enter the base of triangle :";
	cin>>b;
	cout<<"Enter the height of triangle :";
	cin>>a;
	cout<<"Enter the color of triangle :";
	cin>>c;
	shapes[i]= new triangle(b,a,c);
	i++;
	}
	if(n==2){
	cout<<"Enter the length of rectangle :";
	cin>>b;
	cout<<"Enter the width of rectangle :";
	cin>>a;
	cout<<"Enter the color of rectangle :";
	cin>>c;
	shapes[i]= new rectangle(b,a,c);
	i++;
	}
	if(n==3){
	cout<<"Enter the radius of circle :";
	cin>>b;
	cout<<"Enter the color of circle ";
	cin>>c;
	shapes[i]= new circle(b,c);
	i++;
	}
	else{
	cout<<"Invalid Input Try Again"<<endl;
	}
}
system("pause");
for(int i=0;i<count;i++){
	shapes[i]->print();
}
cout<<"part 4"<<endl;
 
shape *s1= new triangle(1.0,9.0, "Red");
delete s1; 

	return 0;
}

