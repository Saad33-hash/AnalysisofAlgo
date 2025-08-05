#include<iostream>
using namespace std;
bool checkpalindrome(string str,int s,int e){
    if(s > e){
        return 1;
    }

    if(str[s] != str[e]){
        return 0;
    }

    else{
        return checkpalindrome(str,s++,e--);
    }

}

int main(){
    string str="saad";
    int s=0;
    int e=str.length()-1;
    bool ispali=checkpalindrome(str,s,e);
    if(ispali){
        cout<<"its a plaindrome";
    }
else{
    cout<<"its not a palinorme";
}
}