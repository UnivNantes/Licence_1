#include <iostream>
#include <cmath>
using namespace std;

int Impot(int quotient){

    int value;

	const int borne1 = 9807;
	const int borne2 = 27086;
	const int borne3 = 72617;
	const int borne4 = 153783;
	const double tauxB1 = 0;
	const double tauxB2 = 0.14;
	const double tauxB3 = 0.3;
	const double tauxB4 = 0.41;
	const double tauxB5 = 0.45;

	if (quotient < borne1){
            value = tauxB1;
        } else if (quotient < borne2){
            value = tauxB2*(quotient-borne1);
        } else if (quotient < borne3){
            value = tauxB2*(borne2-borne1)+tauxB3*(quotient-borne2);
        } else if (quotient < borne4){
            value = tauxB2*(borne2-borne1)+tauxB3*(borne3-borne2)+tauxB4*(quotient-borne3);
        } else if (quotient > borne4){
            value = tauxB2*(borne2-borne1)+tauxB3*(borne3-borne2)+tauxB4*(borne4-borne3)+tauxB5*(quotient-borne4);
        }

    return value;
}

int main(){
    int revenu, parts, quotient;
	cout << "Entrez vos revenus imposables : ";
	cin >> revenu;
	cout << "Entrez votre nombre de parts : ";
	cin >> parts;
	quotient = (0.9*revenu)/parts;

	cout << "A payer : " << Impot(quotient) << " € " << endl;
}
