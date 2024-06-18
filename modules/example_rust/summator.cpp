/* summator.cpp */

#include "summator.h"
#include "example_rust/src/lib.rs.h"

void Summator::add(int p_value) {
	count = add_rs(count, p_value);
}

void Summator::reset() {
	count = 0;
}

int Summator::get_total() const {
	return count;
}

void Summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

Summator::Summator() {
	count = 0;
}
