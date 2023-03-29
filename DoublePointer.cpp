#include<iostream>
using namespace std;

int main(){
	int a=50;
	int *p=&a;
	int **pp=&p;
	cout<<"pp nin adresi :"<<&pp<<endl;
	cout<<"pp nin degeri :"<<pp<<endl;
	cout<<"pp nin gosterdigi :"<<*pp<<endl;
	cout<<"p nin adresi :"<<&p<<endl;
	cout<<"p nin degeri :"<<p<<endl;
	cout<<"p nin gosterdigi :"<<*p<<endl;
	cout<<"a nin adresi :"<<&a<<endl;
	cout<<"a nin degeri :"<<a<<endl;
	return 0;
}