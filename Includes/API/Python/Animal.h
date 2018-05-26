#ifndef PYTHON_ANIMAL_H
#define PYTHON_ANIMAL_H

#include <pybind11/pybind11.h>

void AddAnimal(pybind11::module& m);
void AddDog(pybind11::module& m);
void AddCallGo(pybind11::module& m);

#endif