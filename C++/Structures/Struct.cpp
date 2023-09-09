#include<bits/stdc++.h>
using namespace std;

struct Demo{  //Declaring the Struct

	int x;
	int y;

	void Display(){
		cout<<x<<" "<<y;
	}

};
int main(){

    Demo d; //creating the object for the structure

	d.x=100;
	d.y=200;
	d.Display();


}