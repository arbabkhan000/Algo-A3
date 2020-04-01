#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stringpat ;
    cout<<"Enter the pattern: ";
    getline(cin,stringpat);
    cout<<'\n';
    int k = 1, m = 0;
    const int stringpatlength = stringpat.size();
    int aray_prefix[stringpatlength];
    for (int k=0;k<stringpatlength;k++)
    {
       aray_prefix[k]=0;
    }
    
    while (k < stringpatlength) {

        while (stringpat[k] != stringpat[m] && m > 0) {
            m = aray_prefix[m - 1];

        }
        if (stringpat[k] == stringpat[m]) {
            aray_prefix[k] = m + 1;
            k++;
            m++;

        } else {
            aray_prefix[k] = m;
            k++;
        }
    }

    for (int k = 0; k < stringpatlength; k++) {
        cout<<aray_prefix[k];
    }
    return 0;
}

