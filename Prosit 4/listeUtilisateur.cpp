#include "listeUtilisateur.h"

void listeUtilsateur::SupprimerUtilisateur(IDutilisateur)
{
	nbUtilisateur.pop_back(IDutilisateur);
}

void listeUtilsateur::AjouterUtilisateur( int nouveauUtilisateur)
{
	nbUtilisateur.push_back(nouveauUtilisateur);
}

void listeUtilsateur::BloquerUtilisateur(IDutilisateur)
{
}
