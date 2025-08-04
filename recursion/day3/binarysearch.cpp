#include<iostream>
using namespace std;
/*
int binarysearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2; 
    while(s<=e){
   
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return -1;
  
}
*/

int binarysearch(int arr[],int size,int s,int e,int key){
// base case
if(s>e){
    return 0;
}
int mid=s+(e-s)/2;
if(arr[mid] == key){
    return mid;
}
if(arr[mid]>key){
    return binarysearch(arr,size,s,mid-1,key);
}
if(arr[mid]<key){
    return binarysearch(arr,size,mid+1,e,key);
}
return -1;
}
int main(){
    int arr[6]={2,4,5,7,9,10};
    int size=6;
   int s=0;
 int e=size-1;
    int ans=binarysearch(arr,size,s,e,9);
   cout<<"position of index is "<<ans<<endl;
}