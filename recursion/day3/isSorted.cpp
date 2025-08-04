#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    // base case
    if(size == 0 || size == 1) {
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }

    int value=isSorted(arr+1,size-1);
    return value;
}

int main(){
    int arr[3]={5,2,1};
    int size=3;
    bool answer=isSorted(arr+1,size-1);;
    cout<<"answer is "<<answer<<endl;
}