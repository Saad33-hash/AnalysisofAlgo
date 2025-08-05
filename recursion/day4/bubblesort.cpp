#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
int bubblesort(int arr[],int size){
if(size == 0 || size == 1){
    return 1;
}

//solve only 1 case
for(int i=0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}

bubblesort(arr,size-1);
}
int main(){
    int arr[6]={38,27,43,9,82,10};
    int size=6;
    bubblesort(arr,size);
    printarray(arr,size);
}