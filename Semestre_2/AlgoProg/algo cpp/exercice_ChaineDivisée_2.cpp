#include <iostream>

using namespace std;

void Split (string chaine, string & leftString, string & enterString, string & rigthString, int left, int rigth, int enter){

    for(int i = 0; i <= left - 1; i++){
        leftString += chaine[i];
    }

    for(int j = left; j <= (left + enter) - 1; j++){
        enterString += chaine[j];
    }

    for(int k = left + enter; k <= (left + enter + rigth) - 1; k++){
        rigthString += chaine[k];
    }
}

int main(){

    string chaine, leftString, enterString, rigthString;
    int taille, left, rigth, enter;

    taille = 0;

    cout<<"Donnez un mot quelconque que nous allons par la suite divisez en trois parties :"<<endl;
    cin>> chaine;

    for(int i = 1; i <= chaine.size(); i++){
        taille ++;
    }

    cout<<chaine<<" possede "<<taille<<" lettre(s)."<<endl;
    cout<<"Donnez la taille que prendra la premiere partie du mot :"<<endl;
    cin>>left;

        while(left > chaine.size()-2){
            cout<<"ressaisissez la taille que prendra la premiere partie du mot car celle que vous avez donné est incompatible :"<<endl;
            cout<<"Vous pouvez choisir entre, 1 et "<< chaine.size() - 2<<"."<<endl;
            cin>>left;
        }

    cout<<"Donnez la taille que prendra la partie centrale du mot :"<<endl;
    cin>>enter;

        while((enter + left) > chaine.size() - 1){
            cout<<"ressaisissez la taille que prendra la partie centrale du mot car celle que vous avez donné est incompatible :"<<endl;
            cout<<"Vous pouvez choisir entre, 1 et "<< chaine.size() - left - 1<<"."<<endl;
            cin>>enter;
        }

    cout<<"il reste "<< chaine.size() - (enter + left)<<" lettres, quelle taille voulez-vous donnez a la partie droite du mot :"<<endl;
    cin>>rigth;

        while((enter + left + rigth) > chaine.size()){
            cout<<"ressaisissez la taille que prendra la partie droite du mot car celle que vous avez donné est incompatible :"<<endl;
            cout<<"Vous pouvez choisir entre, 1 et "<< chaine.size() - (enter + left)<<"."<<endl;
            cin>>rigth;
        }

    Split(chaine, leftString, enterString, rigthString, left, rigth, enter);

    cout<<"La partie de gauche du mot vaut : "<<leftString<<endl;
    cout<<"La partie centrale du mot vaut : "<<enterString<<endl;
    cout<<"La partie de droite du mot vaut : "<<rigthString<<endl;
}
