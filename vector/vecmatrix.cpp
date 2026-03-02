#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the number of rows,  columns";
    cin>> rows >> cols;

    int* *matrix = new int*[rows];
    for(int i=0; i<rows; i++){
    matrix[i] = new int[cols];}
    /*What you have there is a manual, dynamic allocation of a 2‑D array using raw pointers.

matrix is a pointer-to-int* (i.e. an array of pointers).
new int*[rows] allocates an array of rows pointers on the heap.
Each element matrix[i] will later point to a “row” of ints.
Then the loop:

For each row index i you allocate an array of cols integers.
After the loop you effectively have rows separate blocks of cols ints, and matrix[i][j] can be used just like a 2‑D array.*/
        
        int x=1;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols; j++){
                matrix[i][j] = x++;
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
}

    
