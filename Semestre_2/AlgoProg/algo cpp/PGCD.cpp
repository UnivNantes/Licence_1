//PGCD

#include <iostream>

using namespace std;

int PGCD(int a, int b){
    int tmp;

    if((a % b) != 0){
        return PGCD(b,a%b);
    }else{
        return a;
    }
}

int PGCD(int a, int b){
    int tmp = a % b;

    while(tmp != 0){
        a = b;
        b = tmp;
        tmp = a % b;
    }
    return a;
}

int main(){
    int a,b;

    cout<<"Saisissez la valeur de a et de b :"<<endl<<"a vaut : ";
    cin>>a;
    cout<<"b vaut : ";
    cin>>b;
    cout<<PGCD(a,b)<<endl;




   /*int compteARebours (int a){
       cout<<a;
        if(a!=0){
            compteARebours(a-1);
        }
   }*/
