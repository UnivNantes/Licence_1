#include <iostream>
using namespace std;


int Suite (int positionNeme){
    int valeurNeme, tmp=1;

    for(int i = 0; i <= positionNeme-1; i++){
            valeurNeme = 3 * tmp - 1;
            tmp = valeurNeme;
    }
    return valeurNeme;
}

int SuiteRec(int positionNeme){
    if (positionNeme == 0){
        return positionNeme = 1;
    }else{
        return SuiteRec(positionNeme - 1) * 3 - 1;
    }

}

int main(){
    int tmp, valeurNeme, positionNeme;
    cout<<"Saisissez une valeur de N de la suite :";
    cin>>positionNeme;
    cout<<"A la position "<<positionNeme<<" ,Un vaut : "<<SuiteRec(positionNeme)<<endl;
}
