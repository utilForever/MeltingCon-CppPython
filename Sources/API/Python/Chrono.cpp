#include <API/Python/Chrono.h>
#include <Core/Chrono.h>

#include <pybind11/pybind11.h>

void AddChrono(pybind11::module& m)
{
    m.def("GetCurrentTime", &GetCurrentTime);
    m.def("GetTimeDifference", &GetTimeDifference);
}