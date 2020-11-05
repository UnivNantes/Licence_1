#include <iostream>

using namespace std;

int main(){
    int valeur, valeurDivise, a ,b, cmpt, vali, valj;
    int tab[] = {2, 3, 5, 7};
    cmpt = 0;

    cout<<"valeur :"<<endl;
    cin>>valeur;

    valeurDivise = valeur / 2;
    a = valeurDivise;
    b = valeurDivise;

    while(a != 0 && b != 0){
        for(int i = 0; i <= 3; i++ ){
            for(int j = 0; j <= 3; j++){
                    vali = tab[i];
                    valj = tab[j];
                if(a == i && b == j){
                    cmpt++;
                }
                a --;
                b++;
            }
        }
    }
    cout<<"valeur choisis est : "<<valeur<<" ; "<< cmpt;

}


