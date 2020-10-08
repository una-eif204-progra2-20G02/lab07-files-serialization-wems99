//
// Created by Usuario on 7/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_PERSONLIST_H
#define LAB07_FILES_SERIALIZATION_WEMS99_PERSONLIST_H

#include "Person.h"
#include <vector>


class PersonList {

private:

    Person * person;
    vector<Person> personList;

public:

    PersonList(const vector<Person> &personList);

    const vector<Person> getListPerson();

    void addPerson(Person);

    string displayPersonList();

    virtual ~PersonList();

};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_PERSONLIST_H
