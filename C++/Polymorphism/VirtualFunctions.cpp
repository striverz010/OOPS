#include<bits/stdc++.h>
using namespace std;


class Base{

public:

	virtual void fun(){
		cout<<"Function of Base Class"<<"\n";
	}

};


class Derived:public Base{

public:

	void fun(){
		cout<<"Function of Derived Class"<<"\n";
	}
};



int main(){

	Base *ptr=new Derived();
	ptr->fun();

	//Initially the method of Base class will be called 
	//but when we use the vitual keyword then the overried method or derived class will be called
	//It is the correct in realtime 
	//This is power of c++ by making call of parent or not making call or parent..!
    
}