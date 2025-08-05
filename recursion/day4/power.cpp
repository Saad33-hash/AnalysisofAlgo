#include<iostream>
using namespace std;
int power(int a,int b){
    if(b == 0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}

int main(){
    int a;
    cout<<"please enter value of a";
    cin>>a;
    int b;
    cout<<"please enter value of b:";
    cin>>b;
    int ans=power(a,b);
    cout<<"answer is "<<ans<<endl;
}