#include<bits/stdc++.h>
using namespace std;
class Rectangle{

private:
	int length;
	int breadth;

public:
	Rectangle(int l=0,int b=0){
		setLength(l);
		setBreadth(b);
	}
	int area();
	int perimeter();
	void setLength(int l);
	void setBreadth(int b);
	int getLength();
	int getBreadth();
};

class Cuboid:public Rectangle{

private:
	int height;

public:
	Cuboid(int l=0,int b=0,int h=0){
		height=h;
		setLength(l); //we cannot acess this memebers publicly bcoz of they are private members of Rectangle class
		setBreadth(b);
	}
	void setHeight(int h){
		if(h>0) height=h;
		else height=0;
	}
	int getHeight(){
		return height;
	}
	int volume(){
		return getLength()*getBreadth()*height;
	}

};


int main(){

	Rectangle r;
	r.setLength(10); 
	r.setBreadth(5);
	cout<<r.getLength()<<"\n"; //10
	cout<<r.getBreadth()<<"\n"; //5
	cout<<"Rectangle area:"<<r.area()<<"\n";
	cout<<"Rectangle perimeter:"<<r.perimeter()<<"\n";


    //Cuboid now has new member height now it as function volume as well
	Cuboid c(10,5,3);
	cout<<c.getHeight()<<"\n"; //3
	cout<<"Cuboid area:"<<c.area()<<"\n"; //50
	cout<<"Cuboid perimeter:"<<c.perimeter()<<"\n"; //30
	cout<<"Cuboid Volume is:"<<c.volume()<<"\n"; //150
	


}



void Rectangle::setLength(int l){
	if(l>0) length=l;
	else length=0;
}
void Rectangle::setBreadth(int b){
	if(b>0) breadth=b;
	else breadth=0;
}
int Rectangle::area(){
	return length*breadth;
}
int Rectangle::perimeter(){
	return 2*(length+breadth);
}
int Rectangle::getLength(){
	return length;
}
int Rectangle::getBreadth(){
	return breadth;
}