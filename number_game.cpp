#include <iostream>
#include <cstdlib>
using namespace std;


void user_finds(int a, int b){
    int limit = 5, attemp = 1;
    int machine, you;
    machine = (b + (rand()%a));
    while (true)
    {
        if (limit != 0){
            cout<<"Enter your number: ";
            cin>>you;
            if(you > machine){
                cout<<"Your number is greater than machine number"<<endl;
            }
            else if(you < machine){
                cout<<"Your number is smaller than machine number"<<endl;
            }
            else{
                cout<<"Congrants!! You found the machine number at "<<attemp<< "round"<<endl;
                break;
            }
        }
        else{
            cout<<"Limit....";
            break;
        }
        limit--;
        attemp ++;
    }
    
}

void machine_finds(int a,int b){
    string s;
    int machine, you;
    cout<<"Enter your number: ";
    cin>>you;
    while (true)
    {
        machine = (b + (rand()%a));
        cout<<"Machine number is "<<machine;
        cout<<" If machine number is greater than your number press '>' otherwise press '<'(if found press '='): ";
        cin>>s;
        if(s == ">"){
            b -= 1;
        }
        else if(s == "<"){
            a -= 1;
        }
        else if(s == "="){
            cout<<"Computer found...";
            break;
        }
        else{
            cout<<"!!!Invalid Type!!!"<<endl;
        }
    }
    
}



int main(){
    int selection;
    cout<<"Hi, for 'user find' press 1 and for 'machine find' press 2: ";
    cin>>selection;
    int a,b;
    cout<<"Enter your intervals points: ";
    cin>>b>>a ;
    if(selection == 1){
        user_finds(a,b);
   }
    else if(selection == 2){
        machine_finds(a,b);
   }
   return 0;
}
