#include <iostream>
using namespace std;

void frequence(string chaine){

    char tmpCaractere, caractere;
    int tmpMax, maximum=0;

    for(int i = 0; i <= chaine.size() - 1; i++){
            tmpCaractere = chaine[i];
            tmpMax = 0;
        for(int j = 0; j <= chaine.size() - 1; j++){
        if (chaine[j] == tmpCaractere){
            tmpMax ++;
        }
        if(tmpMax > maximum){
            maximum = tmpMax;
            caractere = tmpCaractere;
        }

    }

}
 cout<<"le caractere le plus frequent : "<<caractere<<", "<<maximum<<" fois"<<endl;
}

int main(){
    string chaine;

    cout<<"Saisissez un mot :"<<endl;
    cin>>chaine;
    frequence(chaine);
}
