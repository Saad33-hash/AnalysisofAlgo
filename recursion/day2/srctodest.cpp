#include<iostream>
using namespace std;

// 
void reachhome(int src,int dest){
// base case
if(src==dest){
    cout<<"charcter has reached home"<<endl;
}
// At every step the character moves forward
src=src+1;
// recursive call
reachhome(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    reachhome(src,dest);
    return 0;
}