#include<bits/stdc++.h>
using namespace std;

class Base{

public:
	int x;
	void show(){
		cout<<"Base:"<<x<<"\n";
	}

};

class Derived:public Base{

public:

	int y;
	void display(){
		cout<<"Base:"<<x<<" "<<"Derived:"<<y<<"\n";
	}

};

int main(){
	Base b;
	b.x=10;
	b.show(); //10

	Derived d;
	d.x=100;
	d.y=200;
	d.display(); //100 200

	d.show(); //100

}