//
// Created by Usuario on 7/10/2020.
//

#include "PersonList.h"

PersonList::PersonList(const vector<Person> &personList) : personList(personList) {}

const vector<Person> PersonList::getListPerson() {

    vector<Person> personListReturn;

    for(int i=0; i < personList.size(); i++){

        personListReturn.push_back(personList[i]);

    }

    return personList;
}

void PersonList::addPerson(Person person1) {

    personList.push_back(person1);

}

PersonList::~PersonList() {

    delete person;

}

string PersonList::displayPersonList() {
    stringstream s;

    for(int i = 0; i < personList.size(); i++){

        s<< personList[i].toString() << "\n";

    }

    return s.str();
}