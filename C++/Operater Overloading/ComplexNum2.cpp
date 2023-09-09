#include<bits/stdc++.h>
using namespace std;

class Complex{

private:
	int real;
	int img;

public:
	Complex(int r=0,int i=0){
		real=r;
		img=i;
	}

	Complex operator + (Complex &x){
		Complex temp;
		temp.real=real+x.real;
		temp.img=img+x.img;
		return temp;
	}

	void Display(){

		cout<<real<<"+i"<<img;
	}

};

int main(){

	Complex c1(3,7);  //3+7i
	Complex c2(5,6);  //5+6i

	Complex c3;
	c3=c1+c2;   //8+13i
	c3.Display();

}