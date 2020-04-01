#include<iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	string textstring,patternstring;
	int num1,num2,stringpat;
	int modulo_of_patern;
	cout<<"Enter the text: ";
	cin>>textstring;
	int hit_=0;
	cout<<endl;
	cout<<"Enter the pattern: ";
	cin>>patternstring;
	cout<<endl;
	cout<<"Enter the modulo: ";
	cin>>modulo_of_patern;
	cout<<endl;
	num1=patternstring[0]-48;
	num2=patternstring[1]-48;
	stringpat=num1*10+num2;
	for(int i=0;i<textstring.size()-1;i++){
		num1=textstring[i]-48;
		num2=textstring[i+1]-48;
		if(((num1*10+num2)%modulo_of_patern)==stringpat%modulo_of_patern)
		{
			hit_++;
		}	
	}
	cout<<hit_;
}
