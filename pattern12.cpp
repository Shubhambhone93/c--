//numbers ke liye inverse right angle pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //nums
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
//ALPHABEts ke liye
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        //spaces
    
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //nums
        for(int j=0;j<n-i;j++){
            cout<<ch;
            
        }
        cout<<endl;
        ch++;
    }
    return 0;
}