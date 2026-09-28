#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int first_diagonal=0, second_diagonal=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                first_diagonal = arr[i][j]+first_diagonal;
            }
            if(i+j==n-1){
                second_diagonal = arr[i][j]+second_diagonal;
            }
        }
    }
    cout<<abs(second_diagonal-first_diagonal)<<endl;
    return 0;
}
