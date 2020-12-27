#include <iostream>



using namespace std;

class Employee : public Person
{
public:
	
	void print(){
		cout << "print from child"<<"\n";
	}
    void setid(int id){
    	 this->id=id;
		}
		
    int getid(){
			return this->id;
		}

protected:
    bool Deactivate(); // estefaa, ekhraaj, morde, enteghaal
    void setActivate(bool status);

private:
    int id;
};

