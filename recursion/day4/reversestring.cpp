#include<iostream>
#include<string>
using namespace std;
void printstring(string str){
for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
     }
}
void reversestring(string& len,int s,int e){
    if(s>e){
        return ;
    }

    swap(len[s],len[e]);
    s++;
    e--;
    reversestring(len,s,e);
 
}

int main(){
    string len="saad";
     int s=0;
     int e=len.length()-1;
     reversestring(len,s,e);
     printstring(len);
     
}