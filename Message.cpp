//#include "Message.h"
//#include <iostream>
//using namespace std;
//void swap(Message& lm, Message& rm)
//{
//	using std::swap;
//	lm.rm_from_Folders();
//	rm.rm_from_Folders();
//	swap(lm.folders, rm.folders);
//	swap(lm.contents, rm.contents);
//	lm.add_to_Folders(lm);
//	rm.add_to_Folders(rm);
//}
////Message}
//void Message::save(Folder& f)
//{
//	addFld(&f);
//	f.addMsg(this);
//}
//void Message::remove(Folder& f)
//{
//	rmFld(&f);
//	f.rmMsg(this);
//}
//void Message::add_to_Folders(const Message& m)
//{
//	for (auto& f : m.folders)
//		f->addMsg(this);
//}
//void Message::rm_from_Folders()
//{
//	for (auto& f : folders)
//		f->rmMsg(this);
//}
//Message::Message(const Message& m)
//	:contents(m.contents), folders(m.folders)
//{
//	add_to_Folders(m);
//}
//Message::~Message()
//{
//	rm_from_Folders();
//}
//Message& Message::operator=(const Message& rhs)
//{
//	rm_from_Folders();
//	contents = rhs.contents;
//	folders = rhs.folders;
//	add_to_Folders(rhs);
//	return *this;
//}
////Folder
//void swap(Folder& lf, Folder& rf)
//{
//	using std::swap;
//	lf.rm_from_Message();
//	rf.rm_from_Message();
//	swap(lf.mes, rf.mes);
//	lf.add_to_Message(lf);
//	rf.add_to_Message(rf);
//}
//void Folder::add_to_Message(const Folder& f)
//{
//	for (auto m : f.mes)
//		m->addFld(this);
//}
//void Folder::rm_from_Message()
//{
//	for (auto m : mes)
//		m->rmFld(this);
//}
//Folder::Folder(const Folder& f): mes(f.mes)
//{
//	add_to_Message(f);
//}
//Folder& Folder::operator=(const Folder& f)
//{
//	rm_from_Message();
//	mes = f.mes;
//	add_to_Message(f);
//	return *this;
//}
//Folder::~Folder()
//{
//	rm_from_Message();
//}
//int main() {};