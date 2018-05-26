#ifndef CPP_FUNCTIONAL_H
#define CPP_FUNCTIONAL_H

#include <pybind11/functional.h>

#include <functional>


inline int FuncArg(const std::function<int(int)>& f)
{
    return f(10);
}

inline std::function<int(int)> FuncRet(const std::function<int(int)>& f)
{
    return [f](int i) { return f(i) + 1; };
}

inline pybind11::cpp_function FuncCpp()
{
    return pybind11::cpp_function([](int i) { return i + 1; }, pybind11::arg("number"));
}

#endif