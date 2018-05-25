#include <API/Python/Add.h>
#include <Core/Add.h>

#include <pybind11/pybind11.h>

void AddAdd(pybind11::module& m)
{
    m.def("Add", &Add, "A function which adds two numbers");
}