#include <iostream>

using namespace std;

bool nbrPremier(int a){
    bool res;
    int toto;
    toto = 0;
	for(int i = 2; i <=a+1 ; i++){
        int calc = a % i;

		if(calc == 0 ){
            toto ++;
		}
    }
    if (toto > 1){
        res = false;
    }else{
        res = true;
    }
    return res;
}

int main(){
    int a;

    cout<<"Saisissez un nombre :";
    cin>>a;

    cout<<nbrPremier(a);

}
