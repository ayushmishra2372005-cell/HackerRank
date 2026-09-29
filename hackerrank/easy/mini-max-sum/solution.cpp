#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int size = 5;
    int arr[size];
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr+n);
    
    long long min = 0, max = 0;
    for (int i=0; i<size-1; i++){
        min += arr[i];
    }
    for (int i=1; i<size;i++){
        max+=arr[i];
    }
    cout<<min<<" "<<max;
    return 0;
}
