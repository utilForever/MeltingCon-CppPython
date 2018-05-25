#include <API/Python/Add.h>
#include <Core/Add.h>

#include <pybind11/pybind11.h>

void AddFuncAdd(pybind11::module& m)
{
    m.def("Add", &Add, "A function which adds two numbers");
    
}

void AddFuncAddWithKeyword(pybind11::module& m)
{
    m.def("AddWithKeyword", &Add, "A function which adds two numbers", pybind11::arg("a"), pybind11::arg("b"));
}

void AddFuncAddWithDefArg(pybind11::module& m)
{
    m.def("AddWithDefArg", &Add, "A function which adds two numbers", pybind11::arg("a") = 1, pybind11::arg("b") = 2);
}