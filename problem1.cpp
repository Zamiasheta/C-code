#include<iostream>

using namespace std;
int main(){

    int num,rev=0,rem;

    cout<<"Enter a number:";
    cin>>num;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;

    }
    cout<<"Reverse ="<<rev;
    if(rev%2==0)
        cout<<"this is odd number"<<rev;
    else
        cout<<"this is even number";

    return 0;
}
