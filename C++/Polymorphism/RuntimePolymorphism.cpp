//This is also called Pure Virtual functions;

#include<bits/stdc++.h>
using namespace std;

class Car{

public:

	// virtual void start(){
	// 	cout<<"Car Started"<<"\n";
	// }

	// virtual void stop(){
	// 	cout<<"Car Stopped"<<"\n";
	// }


	//Making the pure virtual functions
	virtual void start()=0;
	virtual void stop()=0;

};

class Innova:public Car{
public:

	void start(){
		cout<<"Innova Started"<<"\n";
	}

	void stop(){
		cout<<"Innova Stopped"<<"\n";
	}
};

class Swift:public Car{
public:

	void start(){
		cout<<"Swift Started"<<"\n";
	}

	void stop(){
		cout<<"Swift Stopped"<<"\n";
	}
};

int main(){

	Car *c=new Innova();
	c->start();
	c->stop();

	c=new Swift();
	c->start();
	c->stop();

	//Make the Car functions as pure virtual functions...

}