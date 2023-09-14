#include<bits/stdc++.h>
using namespace std;
class Rectangle{
public:
	int length;
	int breadth;


	Rectangle(int length,int breadth){

		this->length=length;
		this->breadth=breadth;
	}

	int area(){
		return length*breadth;
	}

};
int main(){

	Rectangle r(10,20);

	cout<<r.area();

}