#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int valeurX, fonction;

    cout<<"Saisissez la valeur de x :"<<endl;
    cin>>valeurX;

    if(valeurX < -1){
        fonction = pow(valeurX, 2) - 1;
    }else if(-1 <= valeurX && valeurX <= 1){
        fonction = 0;
    }else{
        fonction = sqrt (valeurX - 1);
    }

    cout<<"la fonction vaut : "<<fonction<<endl;

}
