//#pragma once
//#include <vector>
//#include <string>
//#include <initializer_list>
//#include <memory>
//#include <stdexcept>
//using namespace std;
//class ConstStrBlobPtr;
//class StrBlob
//{
//	
//public:
//	friend class ConstStrBlobPtr;
//	ConstStrBlobPtr begin();
//	ConstStrBlobPtr end();
//
//public:
//	typedef vector<string> ::size_type size_type;
//
//	StrBlob();
//	StrBlob(initializer_list<string> li);
//	StrBlob(const StrBlob& s) : 
//		data(make_shared<vector<string>>(*s.data)) {}
//	StrBlob& operator=(const StrBlob& s);
//public:
//	size_type size() const { return data->size(); };
//	bool empty() const { return data->empty(); };
//
//	void push_back(string& s) { return data->push_back(s); };
//	void pop_back(string&);
//
//	string& front() const;
//	string& back() const;
//
//private:
//	shared_ptr<vector<string>> data;
//private:
//	void check(size_type, const string&) const;
//};
////
//StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
//StrBlob::StrBlob(initializer_list<string> li) :
//	data(make_shared<vector<string>>(li)) {}
//void StrBlob::pop_back(string& s)
//{
//	check(0, "pop a empty StrBlob");
//	return data->pop_back();
//}
//string& StrBlob::front() const
//{
//	check(0, "front a empty StrBlob");
//	return data->front();
//}
//string& StrBlob::back() const
//{
//	check(0, "back a empty StrBlob");
//	return data->back();
//}
//void StrBlob::check(size_type i, const string& msg) const
//{
//	if (i >= data->size())
//		throw out_of_range(msg);
//}
///// <summary>
///// /////////////////////
///// </summary>
//class ConstStrBlobPtr
//{
//public:
//	ConstStrBlobPtr() : curr(0) {};
//	ConstStrBlobPtr(const StrBlob& s, size_t sz = 0) :
//		wptr(s.data), curr(sz) {};
//	bool operator!=(const ConstStrBlobPtr& p) { return p.curr != curr; };
//	string& deref() const;
//	ConstStrBlobPtr& incr();
//private:
//	weak_ptr<vector<string>> wptr;
//	size_t curr;
//
//	shared_ptr<vector<string>>
//		check(size_t, const string&) const;
//
//};
////
//shared_ptr<vector<string>>
//ConstStrBlobPtr::check(size_t st, const string& s) const
//{
//	auto ret = wptr.lock();
//	if (!ret)
//		throw runtime_error("unbound StrBlobPtr");
//	if (st >= ret->size())
//		throw out_of_range(s);
//	return ret;
//}
//string& ConstStrBlobPtr::deref() const	//解引用
//{
//	auto p = check(curr, "dereference past end");
//	return (*p)[curr];
//}
//ConstStrBlobPtr& ConstStrBlobPtr::incr()	//递增
//{
//	check(curr, "increment past end of StrBlobPtr");
//	++curr;
//	return *this;
//
//}
//ConstStrBlobPtr StrBlob::begin() { return ConstStrBlobPtr(*this); };
//ConstStrBlobPtr StrBlob::end()
//{
//	return ConstStrBlobPtr(*this, data->size());
//};