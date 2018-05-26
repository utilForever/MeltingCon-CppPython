#include <API/Python/Functional.h>
#include <Core/Functional.h>

#include <pybind11/pybind11.h>
#include <pybind11/functional.h>

void AddFunctional(pybind11::module& m)
{
    m.def("FuncArg", &FuncArg);
    m.def("FuncRet", &FuncRet);
    m.def("FuncCpp", &FuncCpp);
}