#pragma once
#include "item.hpp"
#include "bit_stream.hpp"
#include "requirement.hpp"
#include "schema.hpp"
using namespace std;

class Tuple {
	private:
		const Schema& tuple_schema;
		unordered_map<string, Item> tuple_vals;
		bool meet(const Requirement&) const;

	public:
		Tuple(const Tuple&);
		Tuple() = delete;
		~Tuple();
		Tuple(const Schema&, const vector<Item>&);
		Tuple(const Schema&, const BitStream&);
		BitStream toBit() const;
		vector<Item> valueList(const vector<string>&) const;
		bool meetRequirement(const vector<Requirement>&) const;
};