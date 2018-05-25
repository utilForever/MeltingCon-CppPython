#include <API/Python/Add.h>
#include <API/Python/Person.h>

#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyCppPython, m)
{
    m.doc() =
        R"pbdoc(
            MeltingCon 2018 - \"Make Python API using C++\" Example Code 
        )pbdoc";

    AddFuncAdd(m);
    AddFuncAddWithKeyword(m);
    AddFuncAddWithDefArg(m);

    AddPerson(m);
    AddPersonWithLambda(m);
    AddPersonWithField(m);
}