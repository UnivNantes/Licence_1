#include <iostream>
using namespace std;

void InverseIt(string chaine, string & ssChaine){
    for (int i = 0; i <= chaine.size()-1; i++){
        ssChaine = chaine[i] + ssChaine;
    }
}

int InverseRec(string chaine, int position){
    if (position == chaine.size()){
        return chaine[position];
    }else{
        return InverseRec(chaine, position + 1) + chaine[position];
    }

}

int main(){
    string chaine, ssChaine="";
    int position=0;

    cout<<"Saisissez une chaine ce caractere : ";
    cin>>chaine;
    //InverseIt(chaine, ssChaine);
    cout<<InverseRec(chaine, position);
}
