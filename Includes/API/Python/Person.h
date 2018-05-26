#ifndef PYTHON_PERSON_H
#define PYTHON_PERSON_H

#include <pybind11/pybind11.h>

void AddPerson(pybind11::module& m);
void AddPersonv2(pybind11::module& m);

#endif