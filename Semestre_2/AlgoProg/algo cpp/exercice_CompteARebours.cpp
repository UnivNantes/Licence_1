#include <iostream>

using namespace std;

void compteRebour(int & hour, int & minute, int & seconde){
    int total;

    total = hour * 3600 + minute * 60 + seconde;

    while (hour != 0 && minute != 0 && seconde != 0){
        for (int i = 0; i <= total - 1; i ++){
                    seconde --;
                if(seconde == -1){
                    seconde = 59;
                    minute --;
                }else if(minute == -1){
                    minute = 59;
                    hour --;
                }
            cout<<hour<<", "<<minute<<", "<<seconde<<endl;
        }
    cout<<"Le temps est ecoule"<<endl;
    }
}

int main(){
    int hour, minute, seconde, total;

    cout<<"Saisissez une heure : "<<endl;
    cin>>hour;
    cout<<"Saisissez une minute : "<<endl;
    cin>>minute;
    cout<<"Saisissez une seconde : "<<endl;
    cin>>seconde;

    compteRebour(hour, minute, seconde);

}


