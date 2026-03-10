#include<iostream>
#include<string>
using namespace std;

int countVowel(string s){
    int count=0; int i;
    for( i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
            
            count++;

        }
        
    }
    
    return count;
}

int main(){
    string s="hello world";
    cout<<"Number of vowels is: "<<countVowel(s)<<endl;
    return 0;

}