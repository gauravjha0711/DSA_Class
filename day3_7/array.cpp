#include<iostream>

using namespace std;

void checkSortedArray(int arr[], int index, int size){
    if(index == size - 1){
        cout << "Array is sorted" << endl;
        return;
    }
    if(arr[index] > arr[index + 1]){
        cout << "Array is not sorted" << endl;
        return;
    }
    checkSortedArray(arr, index + 1, size);
}
int main(){
    int n;
    cout<<"Enter n elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=0;
    checkSortedArray(arr, index, n);
    return 0;
}