#include<iostream>
using namespace std;


void mergesort(int *arr,int s,int e){
  
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    //Making two arrays and copying its value
    int* first=new int[len1];
    int* second=new int[len2];
    //giving the vlue of left part to array1
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k];
        k++;
    }

    //giving the value of right part to array
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k];
        k++;
    }

    //noew merging two arrays
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1];
            index1++;
        }
    else{
    arr[k++]=second[index2++];
   
    }
   
    }
 while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }
    

    
}
void merge(int *arr,int s,int e){
   
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //left part
    merge(arr,s,mid);
    //rightpart
    merge(arr,mid+1,e);

    //merge sort
    mergesort(arr,s,e);
    
}


int main(){
    int arr[7]={38,27,43,3,9,82,10};
    int size=7;
    int s=0;
    int e=size-1;
    merge(arr,s,e);
      for(int i=0.;i<size;i++){
        cout<<arr[i]<<" ";
    }
  
    
}