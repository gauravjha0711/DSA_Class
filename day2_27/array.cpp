#include<iostream>
using namespace std;
void insertElement(int arr[], int &n, int element, int position){
    for(int i=n-1;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    n++;
}
void deleteElement(int arr[], int &n, int position){
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter for insert element: ";
    int element, position;
    cin>>element;
    cout<<"Enter the position: ";
    cin>>position;
    insertElement(arr, n, element, position);
    cout<<"Array after insertion: ";
    print(arr, n);

    // Deletion
    cout<<"Enter the position to delete: ";
    cin>>position;
    deleteElement(arr, n, position);
    cout<<"Array after deletion: ";
    print(arr, n);
}