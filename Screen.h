//#pragma once
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class screen;
//
//class window_mgr
//{
//	
//public:
//	using si = vector<screen>::size_type;
//	inline void clear(si);
//private:
//	vector<screen> sc;
//};
//
//class screen 
//{
//	friend void window_mgr::clear(si);
//public:
//	using sst = string::size_type;
//	screen() = default;
//	screen(sst het, sst wid) : height(het), width(wid), 
//		contents(het* wid,' ') {};
//	screen(sst curs, sst het, sst wid) : height(het), width(wid),
//		contents(het* wid, curs) {};
//
//	char get()const			
//	{
//		return contents[cursor];
//	}
//	char get(sst r, sst c) const;	//返回给定位置的字符
//	screen& move(sst r, sst c);			//移动光标到指定位置
//	screen& set(char);					//设置当前光标的值
//	screen& set(sst r,sst c,char);			//设置指定位置光标的值
//	screen& display(void) { do_display(); return *this; }
//	const screen& display(void) const { do_display(); return *this; }
//	sst size() const;
//private:
//	sst cursor = 0;	//光标位置
//	sst height = 0;	//屏幕高
//	sst width = 0;	//宽
//	string contents;	//屏幕内容
//	void do_display(void) const { cout << contents << endl; }
//	
//};
