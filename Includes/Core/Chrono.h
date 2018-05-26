#ifndef CPP_CHRONO_H
#define CPP_CHRONO_H

#include <pybind11/chrono.h>

#include <chrono>

inline auto GetCurrentTime()
{
    return std::chrono::system_clock::now();
}

inline auto GetTimeDifference(std::chrono::system_clock::time_point a,
                              std::chrono::system_clock::time_point b)
{
    return a - b;
}

#endif