#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter The Cost price of item :";
    cin>>cp;
    cout<<"Enter The Selling Price of item :";
    cin>>sp;
    if(cp<sp){
        cout<<"seller made profit"<<sp-cp;
    }
    else if(cp==sp){
        cout<<"no perfit no loss";
    }
    else{
        cout<<"seller is in loss"<<cp-sp;
    }
    return 0;
}