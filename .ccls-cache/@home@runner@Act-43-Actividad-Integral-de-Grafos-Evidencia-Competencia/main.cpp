// =================================================================
//
// File: main.cpp
// Author:
// Date:
//
// =================================================================
#include <iostream>
#include <fstream>
#include <vector>
#include "ugraph.h"

using namespace std;

//g++ -std=c++11 main.cpp -o app

int main(int argc, char* argv[]) {

  ifstream archivo1(argv[1]); 
  ofstream archivo2(argv[2]);

  int n_cases, puertos_faltantes, numero_cases = 1, numero_conexiones, numero_consultas;
  string pares_puertos, puerto_inicial;

  archivo1 >> numero_conexiones;

  for(int i = 0; i < numero_conexiones; i++){
    archivo1 >> pares_puertos;
  }

  archivo1 >> numero_consultas;

  for(int i = 0; i < numero_consultas; i++){
    archivo1 >> puerto_inicial;
  }

  UMatrixGraph<char> grafo(n_cases);

  // incompleto
  for(int i = 0; i < numero_consultas; i++){
    archivo2 << "Case " << numero_cases <<  puertos_faltantes << " ports not reachable from port " /* << */ << " with MNP = " /* << */ << "/n";

    numero_cases++;
  }

  archivo1.close();
  archivo2.close();
  
	return 0;
}
