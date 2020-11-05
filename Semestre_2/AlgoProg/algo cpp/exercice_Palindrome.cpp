#include <iostream>
using namespace std;

/*bool PalindromeIt(string chaine){

    for (int i = 0;  i <= chaine.size()-1; i++) {
            if (chaine[i]!=chaine[chaine.size()-i-1]){
                return false;
            }
    }
    return true;
}*/

bool PalindromeRec(string chaine, int deb){
    if (chaine.size()==1){
        return true;
    }
    if(deb + 1 > chaine.size()-deb-1){
        return true;
    }
    if(chaine[deb]!=chaine[chaine.size()-deb-1]){
        return false;
    }else{
        return PalindromeRec(chaine, deb + 1);
    }

}

int main(){
    string chaine;
    int deb=0;
    bool res;

    cout<<"Saisissez un mot :"<<endl;
    cin>>chaine;

    res = PalindromeRec(chaine, deb);
    if (PalindromeRec(chaine, deb)){
        cout<<"C'est un palindrome"<<endl;
    }else{
        cout<<"Ce n'est pas un palindrome"<<endl;
    }
}
