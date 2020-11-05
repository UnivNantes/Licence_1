#include <iostream>
using namespace std;

int affichage_table_rec(int nb, int mult){
    if(mult < 5){
        affichage_table_rec(nb,mult+1);
    }
    cout<<nb*mult<<";"<<endl;
}

int main() {
    int nb,mult;
    cout<<"nb"<<endl;
    cin>>nb;
    cout<<"mult"<<endl;
    cin>>mult;

    cout<<affichage_table_rec(nb,mult);

}
