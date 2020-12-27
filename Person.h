#include <iostream>

using namespace std;

// Base class
class Person
{
public:
	
	virtual void print(){
		cout << "print from parent"<<"\n";
	}
    // Name
    void setName(string Name){
    	this->Name=Name;
    	
	};
    string getName(){
    	return this->Name;
	};

    // Age
   void setage(int age){
   	this->age=age;
		}
	int getage(){
	return this->age;
		}

protected:
    string Name;
    int age;
};
