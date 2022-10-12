#include<iostream>
using namespace std;
int main(){
    int a,fact=1;
    cout<<"Enter a value for its factorial " <<endl;
    cin>>a;
    for(int i=a;i>1;i--){
        fact =fact*i;

    }

cout<<a<<"! = "<<fact<<endl;
    return 0;
}

