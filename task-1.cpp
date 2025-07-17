#include<iostream>
using namespace std;
int main(){
    int x;
    double a,b,c;
    cout<<"WELCOME TO THE CALCULATOR"<<endl;
    restart:

    cout<<"SELECT YOUR CHOICE"<<endl;
    cout<<"1 FOR ADDITION"<<endl;
    cout<<"2 FOR SUBTRACTION"<<endl;
    cout<<"3 FOR MULTIPLICATION"<<endl;
    cout<<"4 FOR DIVISIONN"<<endl;
    cout<<"ENTER YOUR CHOICE:-";
    cin>>x;
        cout<<"ENTER THE FIRST NUMBER:-";
        cin>>a;
        cout<<"ENTER THE SECOND NUMBER:-";
        cin>>b;
        cout<<"LETS SEE THE RESULT"<<endl;
    switch(x){
        case 1:
      cout<<"YOUR ANSWER WILL BE:-"<<endl;
        cout<<a+b;
        break;
         case 2:
        cout<<"YOUR ANSWER WILL BE:-"<<endl;
        cout<<a-b;
        break;
        case 3:
        cout<<"YOUR ANSWER WILL BE:-"<<endl;
        cout<<a*b;
        break;
        case 4:
        cout<<"YOUR ANSWER WILL BE:-"<<endl;
        cout<<a/b;
        break;
    }
    cout<<endl;
    goto restart;
    return 0;
}