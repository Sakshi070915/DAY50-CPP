#include <iostream>
using namespace std;

int main(){
    int rows,cols;

    cout<<"Enter number of rows and columns for the matrices: ";
    cin>>rows>>cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    cout<<"Enter elements of the first matrix:"<<endl;
    for (int i=0; i<rows; ++i){
        for(int j=0; j<cols; j++){
            cin>>matrix1[i][j];
        }
    }

    cout << "enter elements of the second matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix2[i][j];
        }
    }
}