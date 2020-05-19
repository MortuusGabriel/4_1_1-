#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Base
{
protected:
	string object_name;
	Base* base_ptr;
	vector <Base*> children;

public:
	Base(Base* base_ptr);
	Base(Base* base_ptr, string object_name);
	void Set_Name(string my_object_name);
	string Get_Name();
	void Push(Base* base_ptr);
	void Print_Tree();
};

