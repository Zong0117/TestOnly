//#include <iostream>
//#include "chapter6.h"
//using namespace std;
//
//void read(Sales_data& s1)	//��ȡ�������
//{
//	double danjia;
//	cin >> s1.bookno >> s1.sale >> danjia;
//	s1.shouru = s1.sale * danjia;
//}
//void print(Sales_data& s1)	//��ӡ
//{
//	cout << "num: " << s1.isbn() << " sale: " << s1.sale
//		<< " shouru: " << s1.shouru << endl;;
//}
//Sales_data add(const Sales_data& s1, const Sales_data& s2)//���������
//{
//	Sales_data sum = s1;
//	sum.combine(s2);
//	return sum;
//}
//Sales_data& Sales_data::combine(const Sales_data& sa2)//ͬ��
//{
//	sale += sa2.sale;
//	shouru += sa2.shouru;
//	return *this;
//}
