//power of n

#include<iostream>
using namespace std;
int power(int n){
    if(n == 0){
        return 1;
    }

int smallprobelm=power(n-1);
int biggerprob=2*smallprobelm;
return biggerprob;
}

int main(){
    int n;
    cout<<"please enter value of n:";
    cin>>n;
    int value=power(n);
    cout<<"power of "<<n<<"="<<value;
    return 0;

}