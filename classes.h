// =================================================================
//
// File: classes.h
// Autores: David René Langarica Hernández - A01708936, Sebastian Flores Lemus - A01709229
// Description: 
//
// Copyright (c) 2022 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================

#ifndef Ship_MNP
#define Ship_MNP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

using std::cin;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::string;

class PuertosBuscados{
	private:
    string puerto_nombre;
    int mnp_inicial;

	public:
		PuertosBuscados(){};
		PuertosBuscados(string,int);
    /*
    int consultaRecorrido(){

    };
    */
      
		string getPuerto_nombre(){
			return puerto_nombre;
		};

		int getMnp_inicial(){
			return mnp_inicial;
		};
};

PuertosBuscados::PuertosBuscados(string puerto_nombre_, int mnp_inicial_)
{
	puerto_nombre = puerto_nombre_;
	mnp_inicial = mnp_inicial_;
}

#endif