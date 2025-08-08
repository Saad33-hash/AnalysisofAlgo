#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //selecting picot element
   int pivot=arr[s];
   //count of eleemnts less than piot
   int count=0;
   //checking how many elements are less than pivot
   for(int i=0;i<=e;i++){
    if(arr[i]<pivot){
    count++;
    }
   }

   int pivotindex=s+count;
   swap(arr[pivotindex],arr[s]);
cout<<"inside partition"<<endl;
   int i=s,j=e;
   while(i<pivotindex && j>pivotindex ){
    cout<<"inside while loop"<<endl;
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
  if(i<pivotindex && j>pivotindex){
    swap(arr[i++],arr[j--]);
  }
   }
   return pivotindex;


}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    cout<<"inseide quick sort"<<endl;
    int mid=s+(e-s)/2;

    int p=partition(arr,s,e);
    //left part sort
    quicksort(arr,s,p-1);
    //right oart
    quicksort(arr,p+1,e);
}

int main(){
    int arr[7]={12,4,7,15,2,9,6};
    
    int s=0;
    int e=6;
    quicksort(arr,s,e);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}