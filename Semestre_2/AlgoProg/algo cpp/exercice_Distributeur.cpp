#include <iostream>

using namespace std;

int main(){
    int montant, tmpMontant, billet10(100), billet20(100), billet50(100);
    string reponse;

    cout<<"Voulez vous continuer ?"<<endl;
    cin>>reponse;
    while(reponse = "oui"){
    cout<<"Il y a "<< billet10 << " billets de 10, "<< billet20
        << " billets de 20 et "<< billet50 << " billets de 50 disponible."<<endl;
    cout<<"Bienvenue en mode clients !!!"<<endl;
    cout<<"Donnez la sommes que vous voulez retirez."<<endl;
    cout<<"Ce chiffre doit etre rond :"<<endl;
    cin>>montant;

    tmpMontant = montant;

    while(tmpMontant != 0){
        while(tmpMontant >= 50){
            tmpMontant = tmpMontant - 50;
            billet50 --;
            }
        while(tmpMontant >= 20){
            tmpMontant = tmpMontant - 20;
            billet20 --;
        }
        while(tmpMontant >= 10){
            tmpMontant = tmpMontant - 10;
            billet10 --;
        }
    cout<<billet50<<billet20<<billet10<<endl;
    }
    }
}
