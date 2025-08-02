#include<iostream>
using namespace std;
int fibseries(int n){
    if (n==0){
        return 0;
    }
if( n==1){
    return 1;
}    

int answer=fibseries(n-1)+fibseries(n-2);
return answer;
}

int main(){
    int n;
    cout<<"please enter the index of fibonachi series: ";
    cin>>n;
    int ans=fibseries(n);
    cout<<"answer is "<<ans<<endl;

} 