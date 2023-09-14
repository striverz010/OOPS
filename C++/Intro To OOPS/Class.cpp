#include<bits/stdc++.h>
using namespace std;

class Rectangle{

public:   //Acess specifiers

	int length;  //propertics...
	int breadth;


	int area(){  //methods/functions
		return length*breadth; 
	}

	int perimeter(){
		return 2*(length+breadth);
	}

};

int main(){

	Rectangle r1;  //creating the object

	r1.length=5;  //acessing properties
	r1.breadth=10;

	cout<<r1.area();  //acessing the methods or functions
}