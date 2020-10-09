//
// Created by Usuario on 8/10/2020.
//

#include "SaveAsJson.h"

string SaveAsJson::serealizando(Person person) {

    json jsonPerson;

    jsonPerson["id"] = person.getId();
    jsonPerson["age"] = person.getAge();
    jsonPerson["name"] = person.getName();

    string personaSerealizada = jsonPerson.dump(4);

    return personaSerealizada;

}

void SaveAsJson::save(Person person) {

    ofstream archivo;

    try{

        archivo.open("ArchivoJson.json", ios::binary);

    }

    catch (ifstream::failure a) {

        throw runtime_error("Error en archivo");
        exit(1);

    }

    archivo<< serealizando(person)<<endl;

    archivo.close();

}

