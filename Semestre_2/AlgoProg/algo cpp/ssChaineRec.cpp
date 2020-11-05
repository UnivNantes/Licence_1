#include <iostream>
using namespace std;


string sCh(string ch, int nb, int deb)
{
	if (nb == 0){return "";}
	else {
		return ch[deb]+sCh(ch,nb-1,deb+1);
	}
}

int main(){
    int deb, nb;
    string ch;

    cout<<"ch";
    cin>>ch;
    cout<<"nb";
    cin>>nb;
    cout<<"deb";
    cin>>deb;

    cout<<sCh(ch, nb, deb);
}
