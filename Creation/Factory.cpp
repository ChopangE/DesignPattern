#include<iostream>

using namespace std;


enum jong{
	cat, dog
};
class Animals {
public:
	string sound = "";
	string name = "";
	virtual void Speak() {
		cout << name << " :  " << sound << endl;
	}

};

class Cat : public Animals {

public:
	Cat(string Name)  {
		name = Name;
	}
	void Speak() {
		cout << name << " :  " << "Meow" << endl;
	}
};

class Dog : public Animals {

public:
	Dog(string Name) {
		name = Name;
	}
	void Speak() {
		cout << name << " :  " << "WowWow" << endl;

	}
};

class Factory {

public:
	Animals* Create(jong name) {
		if ( name == jong::cat ) {
			return new Cat("bori");
		}
		else {
			return new Dog("bBori");
		}
	}
};

int main() {
	
	Factory fac;
	Animals* ani = fac.Create(jong::dog);
	ani->Speak();

	return 0;
}