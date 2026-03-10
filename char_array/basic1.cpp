#include<iostream>
using namespace std;


int main(){
    char str[6] = {'h','e','l','l','o','\0'};
    cout<<str<<endl;

    for(int i=0; str[i]!= '\0'; i++){
        cout<<str[i]<<"\t";
        //Important: we can't use str.length() because it's not a string class object, it's a char array. So we have to check for null character to know the end of the string.
        // str[i]!='\0';
    }
    return 0;

    }

