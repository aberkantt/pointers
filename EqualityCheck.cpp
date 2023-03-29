#include <iostream>
using namespace std;

int main(){
	int a=10, b=10;
	int *p,*r;
	p=&a;
	r=&b;
	cout<<*p<<endl;
	cout<<*r<<endl;
	if(p==r) cout<<"Esit";
	else cout<<"Esit degil";
	return 0;
}