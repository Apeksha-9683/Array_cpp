#include<iostream>
using namespace std;

void reverse(char word[], int n){
    int st=0, end= n-1;
    while(st<end){
        swap(word[st], word[end]);
        st++;
        end--;
    }
}


int main(){
    char word[100]={'h','e','l','l','o','\0'};
    reverse(word, 5);
    cout<<"Reversed word is: "<<word<<endl;
    return 0;
    
}