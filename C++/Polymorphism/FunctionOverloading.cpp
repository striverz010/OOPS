#include<bits/stdc++.h>
using namespace std;

class Parent{

public:

	void display(){

		cout<<"Display of Parent Class"<<"\n";
	}

};

class Child:public Parent{
public:

	void display(){

		cout<<"Display of Child Class"<<"\n";  //This display function overrides the display function of parent class
		                                       //Like car Accumulatro example
	}

};


int main(){

	Parent p;
	p.display();


	Child c;
	c.display();

}