#include "emetteur.h"
#include<iostream>
#include"recepteur.h"

typedef void (*evt)(const char*);
evt e;

void emetteur::signal(const char* message) {
	e = &recepteur::ecoute;
	e(message);
};