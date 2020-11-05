#include <iostream>
#include<sstream>
using namespace std;

int main() {

    int val = 123;
    stringstream ss;
    ss<<val;
    string coucou = ss.str();

    cout<<coucou<<coucou.size();
}
