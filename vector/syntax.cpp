#include<iostream>
#include<vector>
using namespace std;

void function(){
    int size;
    cin>> size;
    int *ptr = new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete[] ptr; 
    }

int main(){
    function(); return 0;
}
