#include<iostream>
using namespace std;

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    int start=0;
    int end = n-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
    return 0;
    
}