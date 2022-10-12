#include<iostream>
using namespace std;
int main(){

int a,b,result;
char sign;
cout<<"Enter the value : " <<endl;
cin>>a>>b;
cout<<"Please choose a sign :  +,-,*,/ "<<endl;
cin>>sign;
cout<<"Result is " << result << endl;
switch(sign){
    case '+':
    result = a+b;
    break;

    case '-':
    result = a-b;
    break;cout<<"Result is " << result << endl;

    case '*':
    result = a*b;
    break;

    case '/':
    result = a/b;
    break;

    default:
    cout<<"Enter a valid operator " <<endl;

 }
   cout<<"Result is " << result << endl;
   return 0;

}
