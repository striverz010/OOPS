#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	
private:
	int length;
	int breadth;

public:

	Rectangle(){  //default constructor initially setting 0,0
		length=0;
		breadth=0;
	}

	Rectangle(int l,int b){ //parameterized constructor with differnt values
		setLength(l);
		setBreadth(b);
	}
	Rectangle(Rectangle &rect){ //copy constructor 
		length=rect.length;
		breadth=rect.breadth;
	}

	int area(){
		return length*breadth;
	}

	int perimeter(){
		return 2*(length+breadth);
	}

	void setLength(int l){  
		if(l>0){
			length=l;
		}
		else{
			length=0;
		}
	}

	void setBreadth(int b){   
		if(b>0){
			breadth=b;
		}
		else{
			breadth=0;
		}

	}

	int getLength(){   
		return length;
	}

	int getBreadth(){
		return breadth;
	}

};
int main(){

	Rectangle r1;
	cout<<r1.area()<<"\n"; //default constructor give 0 initially

	Rectangle r2(10,20);  //parameter constructor 
	Rectangle r3(100,30); //parameter constructor 
	cout<<"Area:"<<r2.area()<<" "<<"perimeter:"<<r2.perimeter()<<"\n"; 
	cout<<"Area:"<<r3.area()<<" "<<"perimeter:"<<r3.perimeter()<<"\n";

	Rectangle r4(r3); //copy constructor which is same as r3
	cout<<"Area:"<<r4.area()<<" "<<"perimeter:"<<r4.perimeter()<<"\n";




}