#include<iostream>
using namespace std;

// int bysll(int *arr, int n){
//     int currsum=INT_MAX;
//     for(int i=0;i<n;i++){
//         for(int j=0;i<n;j++){
//             int profit=arr[i]-arr[j];
//             currsum=min(profit,currsum);
            

//         }
//     }
//     cout<<"The best selling price= "<<arr[i]<<"and the best buying "<<  endl;  
//     return currsum;
// }


void maxprofit(int *prices, int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1], prices[i-1]);
        cout<<bestbuy[i]<<" ";
    }
    cout<<endl;''';
    '
    'mmkmmkm
}

int main(){
    int prices[6]={7,1,5,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxprofit(prices,n);
}