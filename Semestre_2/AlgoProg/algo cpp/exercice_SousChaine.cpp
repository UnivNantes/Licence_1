#include <iostream>

using namespace std;

string SousChaineRec(string chaine, int deb, int nb)
{
	if (nb == 0){
	    return "";
    } else {
		return chaine[deb]+SousChaineRec(chaine,deb+1,nb-1);
	}
}

string SousChaine(string chaine, int deb, int nb){
    string sousChaine;
    sousChaine = "";

    for (int i = deb;  i <= (deb + nb) - 1;  i++){
            sousChaine = sousChaine + chaine[i];
    }
    return sousChaine;
}

int main(){
    int taille, deb, nb, possibility;
    string chaine, sousChaine;

    chaine = "";

    cout<<"Saisissez un mot :"<<endl;
    cin>>chaine;

    taille = chaine.size();

    cout<<"Saisissez la position que prendra le debut de la sous-chaine et qui doit etre inferieur a "<<
    taille - 1 <<endl;
    cin>>deb;

    possibility = taille - deb;

    cout<<"Saisissez la longueur de la sous-chaine compris entre 1 et "<< possibility <<" :"<<endl;
    cin>>nb;

    cout<<"la sous-chaine obtenue a partir de "<< chaine << " avec les parametres que vous avez saisie equivaut a :"
    <<SousChaineRec(chaine, deb, nb)<<endl;
    //SousChaine(chaine, deb, nb) <<endl;

    return 0;
}
