#ifndef CPP_STL_H
#define CPP_STL_H

#include <array>
#include <map>
#include <set>
#include <valarray>
#include <vector>

inline std::array<int, 2> CastArray()
{
    return std::array<int, 2>{{1, 2}};
}

inline bool LoadArray(const std::array<int, 2>& a)
{
    return a[0] == 1 && a[1] == 2;
}

inline std::map<std::string, std::string> CastMap()
{
    return std::map<std::string, std::string>{{"MeltingCon", "2018"},
                                              {"C++", "Korea"}};
}

inline bool LoadMap(const std::map<std::string, std::string>& m)
{
    return m.at("MeltingCon") == "2018" && m.at("C++") == "Korea";
}

inline std::set<std::string> CastSet()
{
    return std::set<std::string>{"MeltingCon", "C++", "C++"};
}

inline bool LoadSet(const std::set<std::string>& s)
{
    return s.count("MeltingCon") == 1 && s.count("C++") == 2;
}

inline std::valarray<int> CastValArray()
{
    return std::valarray<int>{1, 4, 9};
}

inline bool LoadValArray(const std::valarray<int>& v)
{
    return v.size() == 3 && v[0] == 1 && v[1] == 4 && v[2] == 9;
}

inline std::vector<int> CastVector()
{
    return std::vector<int>{1, 2};
}

inline bool LoadVector(const std::vector<int>& v)
{
    return v.at(0) == 1 && v.at(1) == 2;
}

inline std::vector<bool> CastBoolVector()
{
    return std::vector<bool>{true, false};
}

inline bool LoadBoolVector(const std::vector<bool>& v)
{
    return v.at(0) && !v.at(1);
}

#endif