//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//class Sales_data
//{
//	friend void read(Sales_data& s1);
//	friend void print(Sales_data& s1);
//	friend Sales_data add(const Sales_data& s1, const Sales_data& s2);
//
//public:
//	Sales_data(string bn, unsigned int sa, double sh) :
//		bookno(bn), sale(sa), shouru(sa*sh) 
//	{cout << "1" << endl;};
//	Sales_data(): Sales_data("123", 1, 2){ cout << "2" << endl; };
//	Sales_data(string bn) :Sales_data(bn, 2, 3) { cout << "3" << endl; };
//
//
//	string isbn(void) const { return bookno; };
//	Sales_data& combine(const Sales_data&);
//
//private:
//	string bookno;
//	unsigned int sale = 0;
//	double shouru = 0.0;
//};
