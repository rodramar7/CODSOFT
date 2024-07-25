#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char operation;
    cout<<"Enter First Number ";
    cin>>a;
    cout<<"Enter Second Number ";
    cin>>b;
    cout<<"Enter operation(+,-,*,/)";
    cin>>operation;
    switch(operation){
        case '+':{
            cout<<"Result: "<<a+b<<endl;
            break;
        }
            case '-':{
            cout<<"Result: "<<a-b;
            break;
        }
                case '*':{
            cout<<"Result: "<<a*b;
            break;
        }
                case '/':{
            cout<<"Result: "<<double(a) / double(b);
            break;
        }
        default:
            cout << "Invalid operation!" << endl;
    }
}
