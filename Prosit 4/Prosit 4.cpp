#include "emetteur.h"
#include <iostream>
#include "recepteur.h"

using namespace std;

string  message;

int main(){
    cout << "quel message voulez vous transmettre ?";
    cin >> message;
    emetteur emission;
    emission.signal(message);
};


