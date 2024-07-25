// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int snumber = rand()%100+1;

    int num;

    bool gnumber = false ;
    while(!gnumber){
        cout<<"Enter a  number : ";
        cin>>num;
        if(num==snumber){
            cout<<"congrats"<<endl;
            gnumber = true;
        }
    else if(num<snumber){
        cout<<"try high"<<endl;
    }
    else{
        cout<<"try small"<<endl;
        
    }
        
    }
    return 0;

}
