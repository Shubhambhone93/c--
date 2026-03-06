#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter the length:";
    cin>>l;
    cout<<"enter the breath";
    cin>>b;
    if(l*b>2*l+b){
     cout<<"area is greater";
    }
    else{
        cout<<"parameter is greater";
    }
    return 0;
}