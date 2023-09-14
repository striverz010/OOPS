#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:

	int length;
	int breadth;

public:

	int area(){
		return length*breadth;
	}

	int perimeter(){
		return 2*(length+breadth);
	}

	void setLength(int l){  //Setters
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

	int getLength(){   //Getter
		return length;
	}

	int getBreadth(){
		return breadth;
	}

};
int main(){
	Rectangle r;
	r.setLength(10);
	r.setBreadth(-5);
	cout<<r.area();
	cout<<r.getBreadth();
	cout<<r.getLength();


}