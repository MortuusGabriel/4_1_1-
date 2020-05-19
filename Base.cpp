#include "Base.h"

Base::Base(Base* ptr)
{
	base_ptr = ptr;
}

Base::Base(Base* ptr, string name)
{
	base_ptr = ptr;
	object_name = name;
}

void Base::Set_Name(string my_object_name)
{
	object_name = my_object_name;
}

string Base::Get_Name()
{
	return object_name;
}

void Base::Push(Base* base_ptr)
{
	this->children.push_back(base_ptr);
}

void Base::Print_Tree()
{
	cout << Get_Name();
	for (int i = 0; i < children.size(); i++) {
		cout << "  " << children[i]->Get_Name();
	}

	for (int i = 0; i < this->children.size(); i++) {
		if (children[i]->children.size() != 0) {
			cout << endl;
			children[i]->Print_Tree();
		}
	}
}
