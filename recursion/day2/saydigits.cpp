#include<iostream>
using namespace std;
void saydigits(int n,string arr[]){
    if(n == 0){
        return ;
    }
    
    int digits= n%10;
    n=n/10;
   
    saydigits(n,arr);
   cout<<arr[digits]<<endl; 
}

int main(){
    int n;
    cout<<"please enter value of n:";
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigits(n,arr);
    return 0;
}
