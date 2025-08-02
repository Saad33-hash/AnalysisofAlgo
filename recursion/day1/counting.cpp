#include<iostream>
using namespace std;
 void counting(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    
    ting(n-1);
 }

int main(){
    int n;
    cout<<"please enter value of n:";
    cin>>n;
    counting(n);
   
}