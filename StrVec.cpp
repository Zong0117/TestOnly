//#include <iostream>
//#include <string>
//#include "StrVec.h"
//using namespace std;
//StrVec::StrVec(const StrVec& s)
//{
//	auto newdata = alloc_n_copy(s.begin(), s.end());
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//}
//StrVec& StrVec::operator=(const StrVec& s)
//{
//	auto newdata = alloc_n_copy(s.begin(), s.end());
//	free();
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//	return *this;
//}
//StrVec::~StrVec()
//{
//	free();
//}
//void StrVec::push_back(const string& s)
//{
//	chk_n_alloc();
//	alloc.construct(first_free++, s);
//}
//pair<string*, string*> 
//	StrVec::alloc_n_copy(const string* f, const string* s)
//{
//	auto data = alloc.allocate(s - f);
//	return { data, uninitialized_copy(f, s, data) };
//}
//void StrVec::free()
//{
//	if (elements)
//	{
//		for (auto p = first_free; p != elements;)
//		{
//			alloc.destroy(--p);
//		}
//		alloc.deallocate(elements, cap - elements);
//	}
//}
//void StrVec::reallocate()
//{
//	auto newcapacity = size() ? 2 * size() : 1;
//	auto newdata = alloc.allocate(newcapacity);
//	auto dest = newdata;
//	auto elem = elements;
//	for (int i = 0; i != size(); ++i)
//		alloc.construct(dest++, move(*elem++));
//	free();
//	elements = newdata;
//	first_free = dest;
//	cap = elements + newcapacity;
//}