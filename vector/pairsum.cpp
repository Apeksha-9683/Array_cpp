#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
   int st = 0, end = arr.size()-1;
   int currsum = 0;
   vector<int> ans;  
   
   while(st < end){
        currsum= arr[st]+ arr[end];
        if(currsum==target){
            // not to be wriiten in vector return {st,end};
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(currsum>target){
            end--;
        }
        else if(currsum<target){
            st++;
;
        }
        cout<<"The index giving targetted sum is: ("<<st<<","<<end<<")"<<endl;
        
    }
   return ans;
}

   int main(){
    vector<int> arr ={1,2,3,4};
    int target;
    cout<<"Enter the target sum: ";
    cin>>target;
    pairSum(arr,target);
    return 0;
   }
