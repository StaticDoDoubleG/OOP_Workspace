//hpp는 h(헤더파일)의 c++ 버전이다.

#pragma once
template <typename T>
class Fun
{
private:
	T data;
public:
	Fun(T d)
		:data(d)
	{
	}
	~Fun() {}
	T get() const
	{
		return data;
	}
	void set(T d)
	{
		data = d;
	}
};

/*
* 2형 ----------------------------------
#pragma once
template <typename T>
class Fun
{
private:
	T data;
public:
	Fun(T data);
	~Fun();
	T get() const;
	void set(T data);
};
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
*/
/*
* 1형 ----------------------------------
#pragma once
template <typename T>
class Fun
{
private:
	T data;
public:
	Fun(T data);
	~Fun();
	T get() const;
	void set(T data);
};

#include "fun.tpp"
*/
