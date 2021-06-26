//#pragma once
//#include <iostream>
//#include <set>
//#include <string>
//using namespace std;
//class Folder;
//class Message
//{
//	friend class Folder;
//	friend void swap(Message&, Message&);
//public:
//	explicit Message(const string& s = "") : contents(s) {}
//	Message(const Message&);
//	Message& operator=(const Message&);
//	~Message();
//	//
//	void save(Folder&);
//	void remove(Folder&);
//	//
//	void print()
//	{
//		cout << contents << endl;
//	}
//private:
//	string contents;
//	set<Folder*> folders;
//	void add_to_Folders(const Message&);
//	void rm_from_Folders();
//	void addFld(Folder* f) { folders.insert(f); }
//	void rmFld(Folder* f) { folders.erase(f); }
//	
//};
//
//void swap(Message&, Message&);
////
//class Folder
//{
//	friend void swap(Folder&, Folder&);
//	friend class Message;
//public:
//	
//	Folder() = default;
//	Folder(const Folder&);
//	Folder& operator=(const Folder&);
//	~Folder();
//	void print()
//	{
//		for (auto m : mes)
//			cout << m->contents << " " << endl;
//	}
//private:
//	set<Message*> mes;
//	void add_to_Message(const Folder&);
//	void rm_from_Message();
//	void addMsg(Message* m) { mes.insert(m); };
//	void rmMsg(Message* m) { mes.erase(m); };
//};
//void swap(Folder&, Folder&);
