
#include<sstream>
#include <iostream>
using namespace std;

int main() {

int val,valTry,tryIt,sizeNumber;

tryIt=1;

cout<<"Bienvenue dans le jeu du plus ou moins !"<<endl;

cout<<""<<endl;

cout<<"Qu'elle taille voulez vous choisir pour votre chiffre ?"<<endl;

cout<<"1 : _"<<endl;
cout<<"2 : _ _"<<endl;
cout<<"3 : _ _ _"<<endl;
cout<<"4 : _ _ _ _"<<endl;
cout<<"5 : _ _ _ _ _"<<endl;
cout<<""<<endl;

cin>>sizeNumber;


cout<<"Saisissez votre valeur de la taille choisis, "<<sizeNumber<<" : ";
cout<<""<<endl;
cin>>val;

stringstream ss;
ss<<val;
string tmpVal;
tmpVal = ss.str();

    while(sizeNumber != tmpVal.size()){
        cout<<"Votre chiffre n'a pas la taille choisis ! reecrivez votre chiffre avec le parametre convenu :"<<endl;
        cin>>val;
        ss<<val;
        tmpVal = ss.str();
    }


cout<<"Saisissez une premiere valeur : "<<endl;
cin>>valTry;

    while(val != valTry){
        if(val > valTry){
            cout<<"C'est plus ! Retentez votre chance : "<<endl;
            cin>>valTry;
            tryIt ++;
        }else{
            cout<<"C'est moins ! Retentez votre chance : "<<endl;
            cin>>valTry;
            tryIt ++;
        }
    }
    cout<<"Vous avez trouve ! La valeur de depard etait donc "<<val<<endl;
    cout<<"Vous avez reussi en "<<tryIt<<" coup(s)"<<endl;
    return 0;

}

