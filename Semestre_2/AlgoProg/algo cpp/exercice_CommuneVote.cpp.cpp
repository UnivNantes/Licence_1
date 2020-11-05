#include <iostream>

using namespace std;

int main(){

    string nomCommune, nomCommuneMax, reponse;
    int codeCirco, codeCircoMax;
    float participation, participationMax, suffrage, inscrit;

    cout<<"Saisissez le nom de la commune: "<<endl;
    cin>>nomCommune;
    cout<<"Saisissez le code circo: "<<endl;
    cin>>codeCirco;
    cout<<"Saisissez le nombre de suffrage: "<<endl;
    cin>>suffrage;
    cout<<"Saisissez le nombre d'inscrit: "<<endl;
    cin>>inscrit;
    cout<<"Voulez-vous continuer ?"<<endl;
    cout<< "Si oui tapez oui, sinon tapez non :"<<endl;
    cin>>reponse;

    participation = (suffrage/inscrit)*100;
    participationMax = participation;
    nomCommuneMax = nomCommune;
    codeCircoMax = codeCirco;

    while (reponse != "non") {
        cout<<"Saisissez le nom de la commune: "<<endl;
        cin>>nomCommune;
        cout<<"Saisissez le code circo: "<<endl;
        cin>>codeCirco;
        cout<<"Saisissez le nombre de suffrage: "<<endl;
        cin>>suffrage;
        cout<<"Saisissez le nombre d'inscrit: "<<endl;
        cin>>inscrit;
        cout<<"Voulez-vous continuer ?"<<endl;
        cout<< "Si oui tapez oui, sinon tapez non :"<<endl;
        cin>>reponse;
    }

    participation = (suffrage/inscrit)*100;

    if (participation <= participationMax){
        participationMax = participation;
        nomCommuneMax = nomCommune;
        codeCircoMax = codeCirco;
    }

    cout<<"La commune qui a eu le plus de participation est "<< nomCommuneMax <<", avec les code circo :"<< codeCircoMax
        <<", avec un taux de participation de :"<< participationMax <<" %."<<endl;

    return 0;
}
