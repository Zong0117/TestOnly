//#pragma once
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//class HasPtr
//{
//public:
//	friend void swap(HasPtr&,HasPtr&);
//	friend bool operator<(HasPtr& lh, HasPtr& rh);
//
//	HasPtr(const string& s = string()) :
//		ps(new string(s)), i(0), count(new size_t(1)) {}
//	/////////
//	HasPtr(const HasPtr& p) :
//		ps(p.ps), i(p.i), count(p.count) 
//	{
//		++* count;
//	}
//	void show() { cout << *ps << endl; }
//	HasPtr& operator=(const HasPtr& hp);
//	~HasPtr();
//private:
//	vector<string> v;
//	string* ps;
//	int i;
//	size_t* count;
//};
//HasPtr::~HasPtr()
//{
//	if (--*count == 0)
//	{
//		delete ps;
//		delete count;
//	}
//}
//
//bool operator<(HasPtr& lh, HasPtr& rh)
//{
//	return *lh.ps < *rh.ps;
//};
//HasPtr& HasPtr::operator=(const HasPtr& rhp)
//{
//	++*rhp.count;
//	if (-- * count == 0)
//	{
//		delete ps;
//		delete count;
//	}
//	ps = rhp.ps;
//	i = rhp.i;
//	count = rhp.count;
//	return *this;
//}
///// 
//inline
//void swap(HasPtr& lhp, HasPtr& rhp)
//{
//	std::swap(lhp.ps, rhp.ps);
//	std::swap(lhp.i, rhp.i);
//	cout << "swapÖ´ÐÐ" << endl;
//}