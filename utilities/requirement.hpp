#pragma once
#include "basics.hpp"
#include "item.hpp"
using namespace std;

class Requirement {
	private:
		string attribute_name;
		Item item;
		Operator operator_type;
	
	public:
		Requirement(const string&, const Item&, Operator);
		Requirement(const Requirement&);
		~Requirement();

		friend class Tuple;
};