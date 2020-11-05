#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string chaine, leftString, rigthString, enterString;

    cout<<"Saisissez un mot :"<<endl;
    cin>>chaine;


    int indice, left, rigth, enter;
        indice = chaine.size() % 3;

        if (indice == 0){
            left = floor(chaine.size()/3);
            rigth = floor(chaine.size()/3);
            enter = floor(chaine.size()/3);
        }else if(indice == 1){
            left = floor(chaine.size()/3);
            rigth = floor(chaine.size()/3);
            enter = floor(chaine.size()/3)+1;
        }else if(indice ==2){
            left = floor(chaine.size()/3)+1;
            rigth = floor(chaine.size()/3)+1;
            enter = floor(chaine.size()/3);
        }

        for (int i = 0; i <= left-1; i++){
            leftString = leftString + chaine[i];
        }

        for (int j = left; j <= enter-1; j++){
            enterString = enterString + chaine[j];
        }

        for (int k = enter; k <= rigth-1; k++){
            rigthString = rigthString + chaine[k];
        }


    cout<<leftString<<endl;
    cout<<enterString<<endl;
    cout<<rigthString<<endl;
    return 0;
}
