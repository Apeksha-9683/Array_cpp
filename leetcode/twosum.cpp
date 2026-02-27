#include<iostream>
using namespace std;

int twosum(int *arr, int n){
    int target;
    cout<<"SUM: "<<endl;
    cin>>target;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++){
            int result = arr[i]+arr[j];
            if(result==target) cout<<"The indices are ("<<i<<","<<j<<")"<< endl;
        }
    }

    return 0;

}

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n; 


int *arr=  new int[n];

    for(int h=0;h<n;h++){
        cin>>arr[h];
    }
    
    twosum(arr,4);
    
    delete[] arr;
return 0;
}