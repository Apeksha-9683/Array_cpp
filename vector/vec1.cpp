#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4};
    cout<<"size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;

    //to add element at the last
    vec.push_back(6);
    cout<<"After adding an element";
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    

    //to delete an element
    vec.pop_back();
    cout<<"Afer popping/deleting:";
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
return 0;}