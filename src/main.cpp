#include <iostream>

#include "randNumGen.cpp"
#include "simpleCal.cpp"

using namespace std;

int main(){
    
    string is;
    cout << "What do you want to calculate today?" << endl;
    cout << "(Example: 1+1)" << endl;
    cout << "(Type HELP to get more information)" << endl;
    cin >> is;
    
    char c;
    char * buffer = new char[is.length()];

    while(is.get(c)){
        
    }

    int randNum = randNumGen(1, 100);

    return randNum;
}