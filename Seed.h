#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <windows.h> 

using namespace std;

class seed
{
private:
    /* data */
public:
    seed();
    ~seed();
};
seed::seed()
{
    cout << "start to seed data from csv file ." ;
    Sleep(1000);
	cout<< ".";
	Sleep(1000);
	cout<< "."<<endl;
    int i=0;
    vector<string> names;
    string mytext;
    
	ifstream docfile("D:\\qq.csv");
	if(!docfile){
		cout <<"file has not openned correctly";
		exit(1);
	}
	while (getline (docfile, mytext)) {
	  
	  names.push_back(mytext);}
	  
	  
	  
    for (int i = 0; i < 5; i++) {
    	cout << names[i]<<endl;
	}
	docfile.close();

   

    
}

seed::~seed()
{
    cout << "destructor called... goodbye";
}
void search(){
	int id;
	cout << "give me your id";
	cin >> id;
	
	int doctors[5];
	Employee doctors_1;
	Employee doctors_2;
	Employee doctors_3;
	Employee doctors_4;
	Employee doctors_5;
	
	doctors_1.setage(49);
	doctors_1.setid(1222);
	doctors_2.setage(52);
	doctors_2.setid(1223);
	doctors_3.setage(31);
	doctors_3.setid(1224);
	doctors_4.setage(27);
	doctors_4.setid(1225);
	doctors_5.setage(29);
	doctors_5.setid(1226);
	
	ifstream docfile("D:\\qq.csv");
	if(!docfile){
		cout <<"file has not openned correctly";
		exit(1);
	}
	vector<string> names;
    string mytext;
	while (getline (docfile, mytext)) {
		
		
	    names.push_back(mytext);}
	  
	  
	  
    
    doctors_1.setName(names[0]);
    doctors_2.setName(names[1]);
    doctors_3.setName(names[2]);
    doctors_4.setName(names[3]);
    doctors_5.setName(names[4]);
    
	
	docfile.close();
	switch(id){
		case 1222:{
			
		    cout<< "name:"<<doctors_1.getName()<<endl;
		    cout<< "age:"<<doctors_1.getage();
			break;
		}
		case 1223:{
			
		    cout<< "name:"<<doctors_2.getName()<<endl;
		    cout<< "age:"<<doctors_1.getage();
			break;
		}
		
		case 1224:{
			
		    cout<< "name:"<<doctors_3.getName()<<endl;
		    cout<< "age:"<<doctors_1.getage();
			break;
		}
		case 1225:{
			
		    cout<< "name:"<<doctors_4.getName()<<endl;
		    cout<< "age:"<<doctors_1.getage();
			break;
		}
		case 1226:{
		    cout<< "name:"<<doctors_5.getName()<<endl;
		    cout<< "age:"<<doctors_1.getage();
			break;
		}
		default:{
			break;
		}
			
			
	}
	
	
}

