#ifndef PYTHON_PERSON_H
#define PYTHON_PERSON_H

#include <pybind11/pybind11.h>

void AddPerson(pybind11::module& m);
void AddPersonWithLambda(pybind11::module& m);
void AddPersonWithField(pybind11::module& m);

#endif