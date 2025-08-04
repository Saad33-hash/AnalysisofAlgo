#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
    if(size == 0){
        return 0;
    }

    if(arr[0] == target){
       return 1;
    }

    int remainingpart=linearsearch(arr+1,size-1,target);
    return remainingpart;


}

int main(){
    int arr[6]={2,5,1,6,9,3};
    int size=6;
    bool answer=linearsearch(arr,size,6);
    cout<<"answer is "<<answer<<endl;
}