#pragma once
#include <iostream>
#include<string>*
#include<vector>

using namespace std;

class utilisateur {
private:
	int IDutilisateur;
	string nomUtilisateur;
	string canaux;
	vector <string> canal;
public:
	void ajouterCanal(string nouveauCanal);
	void supprimercanal(string nomcanal);

};
