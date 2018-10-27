#include<iostream>
using namespace std;

class complex{
	public:
		int real,img;
		void setData(int a, int b);
		void display();
		complex operator +(complex b);
		complex operator -(complex b);
		complex operator *(complex b);
	
};
void complex::setData(int a,int b){
	real=a;
	img=b;
}
void complex::display(){
	cout<<real<<" + i "<<img<<endl;
}
complex complex::operator +(complex b){
	complex t;
	t.real=real+b.real;
	t.img=img+b.img;
	return t;
}

complex complex::operator -(complex b){
	complex t;
	t.real=real-b.real;
	t.img=img-b.img;
	return t;
}

complex complex::operator *(complex b){
	complex t;
	t.real=(real*b.real)-(img*b.img);
	t.img=(real*b.img)+(img*b.real);
	return t;
}
int main(){
	complex a;
	complex b;
	a.setData(5,6);
	b.setData(3,4);
	complex sum,sub,mul;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	a.display();
	b.display();
	cout<<"sum"<<endl;
	sum.display();
	cout<<"mul"<<endl;
	mul.display();
	cout<<"sub"<<endl;
	sub.display();
	return 0;
}
