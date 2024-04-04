#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {

    for(int i=0;i<=n-2;i++) {
        
        int current = i;

        for(int j=i; j<n; j++){
            if(arr[j] < arr[current]){
                current = j;
            }
        }
        swap(arr[current], arr[i]);
    }
}
int main() {
    int arr[] = {7,-1,34, -9, 8, 4, 3, 6, -4};
    int n= sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(auto x: arr){
        cout<< x <<" ";
    }
    return 0;
}