#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
        cout<<endl;
}


void bubbleSort(int *arr, int n){
    
    for(int i=0; i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]); isSwap=true;
        }
         if(!isSwap){return;}
    }  printArr(arr,n);}



    void countingSort(int *arr, int n){
    int freq[100000];
    int minval = INT_MAX, maxval = INT_MIN;
    for(int i=0;i<n;i++){
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);
    }

    for(int i=0; i<n;i++){
        freq[arr[i]]++;}

for(int i=minval; i<=maxval; i++){
    while(freq[i]>0){
        //arr[j++] = i; freq[i]--;
    }
}}



void selectiveSort(int *arr, int n){
    
    for(int i=0;i<n-1;i++){
        int minidx=1;
        for(int j=1;j<n;j++){
            if(arr[i]<arr[


                
            ])
    }
}

int main(){
    int arr[7]={1,2,3,4};
    int n = sizeof(arr)/ sizeof(int);
    bubbleSort(arr,n);
    return 0;
}