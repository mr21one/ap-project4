#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "C:\Users\mrham\OneDrive\Desktop\final\Person.h"
#include "C:\Users\mrham\OneDrive\Desktop\final\Employee.h"
#include "C:\Users\mrham\OneDrive\Desktop\final\Seed.h"




using namespace std;

void runseeder()
{
    seed seeder;
   
}




int main()
{
	int key;
	while(true){
	
	cout << "menu:" <<endl<<"1.doctors list"<<endl<<"2.find your doctor from id"<<endl<<"3.override test"<<endl<<"4.exit";
	cout<<"\n";
	cout<< "enter your number";
	cin >> key;
	system ("CLS");
	switch(key){
	case 1:{
		runseeder();
		break;}
		
	case 2:{
		search();
		
		break;}
	case 3:{
		Employee a;
		Person &b = a;
		b.print();
		
		break;}
	case 4:{
		return 0;
		break;
	}	
		
	}
}
    


    return 0;
}


