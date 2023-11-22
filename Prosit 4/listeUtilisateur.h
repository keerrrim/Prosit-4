#pragma once
#include "Utilisateur.h"
#include<vector>

class listeUtilsateur {
private:
	int nbUtilisateur;
	vector <int> nbUtilisateur;
public:
	void SupprimerUtilisateur(IDutilisateur);
	void AjouterUtilisateur(int nouveauUtilisateur);
	void BloquerUtilisateur(IDutilisateur);
};