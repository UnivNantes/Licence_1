#include <iostream>
#include<sstream>
using namespace std;

int main() {

int val = 123;

stringstream ss;

ss << val;

string tmpVal;

tmpVal = ss.str();

cout<<tmpVal<<endl;
cout<<tmpVal.size()<<endl;



}
