//
// Created by Usuario on 8/10/2020.
//

#include "SaveAsBinary.h"

void SaveAsBinary::save(Person person) {

    ofstream  archivo;

    try{

        archivo.open("ArchivoBinario.dat", ios::app | ios::binary);

    }

    catch (std::ifstream::failure a) {

        throw runtime_error("Error abriendo el archivo");

    }

    archivo.write((char*) &person, sizeof(Person));

    archivo.close();

}