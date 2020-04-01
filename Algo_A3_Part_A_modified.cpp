#include<string>
#include<string.h>
#include<iostream>
using namespace std;

void NaiveAlgo(char* , char* ,int,int ) ;
int main()
{

char AnyString[1000]="Islambad-is-the-capital-city-of-Pakistan";
char givenPattern[1000]="is";

//cout <<"Enter the Any String: ";
//cin.getline(givenPattern,1000);
//cout <<"Enter the Pattern to search: ";
//cin.getline(givenPattern,1000);
//cout<<AnyString<<endl<<givenPattern<<endl;
int stringlength = strlen(AnyString); 
int paternlength=strlen(givenPattern);
 NaiveAlgo(AnyString,givenPattern,stringlength,paternlength );
return 0;
}
void NaiveAlgo(char* AnyString, char* givenPattern,int stringlength,int paternlength ) 
{ 
int k=0;        
         while(k<=stringlength-paternlength)
    {
		 
  int p;
        
        for ( p = 0; p < paternlength; p++)
		{
		
            if ( AnyString[p + k] !=givenPattern [p]) 
				{
				    break;
				}      
	   }
       if (p == paternlength) 
  
            {
			cout << "given patern match at " << k << endl; 
			k=k+paternlength;
	    }     else if(p==0)
            {
            k=k+1;
            }
          else
            {
            k=k+p;
            }
	    
    }

}   
