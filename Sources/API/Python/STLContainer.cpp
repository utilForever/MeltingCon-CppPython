#include <API/Python/STLContainer.h>
#include <Core/STLContainer.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

void AddSTLContainer(pybind11::module& m)
{
    m.def("CastArray", &CastArray);
    m.def("LoadArray", &LoadArray);

    m.def("CastMap", &CastMap);
    m.def("LoadMap", &LoadMap);

    m.def("CastSet", &CastSet);
    m.def("LoadSet", &LoadSet);

    m.def("CastValArray", &CastValArray);
    m.def("LoadValArray", &LoadValArray);

    m.def("CastVector", &CastVector);
    m.def("LoadVector", &LoadVector);

    m.def("CastBoolVector", &CastBoolVector);
    m.def("LoadBoolVector", &LoadBoolVector);
}