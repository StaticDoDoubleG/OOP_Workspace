//tpp는 template을 정의한 파일이다.
#pragma once
#include "fun.hpp"

template <typename T>
Fun <T> ::Fun(T d)
: data(d)
{
}
template <typename T>
Fun <T> :: ~Fun()
{
}

template <typename T>
T Fun <T> ::get() const
{
return data;
}
template <typename T>
void Fun <T> ::set(T d)
{
data = d;
}