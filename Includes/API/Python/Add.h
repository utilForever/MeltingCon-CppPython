#ifndef PYTHON_ADD_H
#define PYTHON_ADD_H

#include <pybind11/pybind11.h>

void AddFuncAdd(pybind11::module& m);
void AddFuncAddWithKeyword(pybind11::module& m);
void AddFuncAddWithDefArg(pybind11::module& m);

#endif