
#include<iostream>
using namespace std;

int main(){
int n;
int sum=0;
cout<< "Enter a number : " << endl;
cin>>n;

for(int i=0;i<=n;i++){
    if(i%2!=0){
        sum+=i;
    }
}

cout<<"Summation of Odd number  " << sum;

return 0;
}

