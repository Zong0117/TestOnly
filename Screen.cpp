//#include <iostream>
//#include <vector>
//#include "Screen.h"
//using namespace std;
//inline
//char Screen::get(sst r, sst c) const
//{
//	return contents[r * width + c];
//}
//inline
//Screen& Screen::move(sst r, sst c)
//{
//	cursor = r * width + c;
//	return *this;
//}
//inline
//Screen& Screen::set(char c)		//���õ�ǰ����ֵ
//{
//	contents[cursor] = c;
//	return *this;
//}
//inline
//Screen& Screen::set(sst r, sst c, char ch)			//����ָ��λ�ù���ֵ
//{
//	contents[r * width + c] = ch;
//	return *this;
//}
//
//
//inline void Window_mgr::clear(si s)
//{
//	if (s >= sc.size()) return;
//	Screen& sr = sc[s];
//	sr.contents = string(sr.height * sr.width, ' ');
//}