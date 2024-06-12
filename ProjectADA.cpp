#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Direccion {
    char departamento[20];
    char provincia[20];
    char ciudad[20];
    char distrito[20];
    char ubicacion[50];
};

struct Persona {
    uint32_t dni; 
    char nombres[50]; 
    char apellidos[50]; 
    char nacionalidad[20]; 
    char lugarNacimiento[50]; 
    Direccion direccion;
    char telefono[20]; 
    char correoElectronico[50]; 
    char estadoCivil[20]; 
};