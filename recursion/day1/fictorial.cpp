#include<iostream>
using namespace std;
int fictorial(int n){
    // base case
    if(n ==0 ){
        return 1;
    }
//now first solving smaller prolems and them bigger problems
int smallerprob=fictorial(n-1);
int biggerprob=n*smallerprob;
return biggerprob;
}

int main(){
    int n;
    cout<<"please enter value of n:";
    cin>>n;
    int answer=fictorial(n);
    cout<<"answer: "<<answer<<endl;
    return 0;
}