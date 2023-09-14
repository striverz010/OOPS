#include<bits/stdc++.h>
using namespace std;

class Base{
private:
	int a;

protected:
	int b;

public:
	int c;

	void Basefun(){ //all acess specifers like private and public and protected can be accesable.
		
		a=1; //possible to acess
		b=2; //possible to acess
		c=3; //possible to acess
	}
};

class Derived:public Base{
public:

	voidDerivedfun(){

		a=10;  //not possible to acess
		b=20;  //possible to acess
		c=30;  //possible to acess
	}

};
int main(){  //only the public things are going to acessble

	Base bs;

	bs.a=100; //not possible to acess
	bs.b=200;  //not possible to acess
	bs.c=300; //possible to acess


}