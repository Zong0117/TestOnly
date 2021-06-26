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
//	char get(sst r, sst c) const;	//���ظ���λ�õ��ַ�
//	screen& move(sst r, sst c);			//�ƶ���굽ָ��λ��
//	screen& set(char);					//���õ�ǰ����ֵ
//	screen& set(sst r,sst c,char);			//����ָ��λ�ù���ֵ
//	screen& display(void) { do_display(); return *this; }
//	const screen& display(void) const { do_display(); return *this; }
//	sst size() const;
//private:
//	sst cursor = 0;	//���λ��
//	sst height = 0;	//��Ļ��
//	sst width = 0;	//��
//	string contents;	//��Ļ����
//	void do_display(void) const { cout << contents << endl; }
//	
//};
