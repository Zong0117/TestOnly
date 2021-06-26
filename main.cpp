#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <forward_list>
#include <fstream>
#include <stack>
#include <queue>
#include <algorithm>
#include "Chapter6.h"
#include "Screen.h"
#include <graphics.h>
#include <conio.h>
#include <map>
#include <set>
#include <utility>
#include <iostream>
#include <memory>
#include <vector>
#include <stdexcept>
#include "StrBlob.h"
#include "TextQuery.h"
#include "HasPtr.h"
#include "Message.h"
#include <functional>
#include "list.h"
using namespace std;
//void runQueries(ifstream& ifs)
//{
//	TextQuery tq(ifs);
//	while (true)
//	{
//		cout << "enter word to look for,or q to qiut:" << endl;
//		string s;
//		if (!(cin >> s) || s == "q")
//			break;
//		print(cout, tq.query(s));
//	}
//
//}

int main()
{
	LIST l;
	l.Insert(1);
	l.Insert(2);
	l.Insert(3);
	l.Insert(4);
	l.Insert(5);
	l.print();
	reverse();
	l.print();


	/*HasPtr hp1("a");
	HasPtr hp2("k");
	HasPtr hp3("b");
	vector<HasPtr> v;
	v.push_back(hp1);
	v.push_back(hp2);
	v.push_back(hp3);
	sort(v.begin(), v.end());
	for (auto& i : v)
		i.show();*/





	/*ifstream ifs("D:/CPPWorkSpace/TestOnly/test.txt");
	runQueries(ifs);*/


	/*ifstream ifs("D:/CPPWorkSpace/TestOnly/test.txt");
	StrBlob sb;
	for(string s; getline(ifs, s); sb.push_back(s));
	for (StrBlobPtr beg(sb.begin()), end(sb.end()); beg != end; beg.incr())
		cout << beg.deref() << endl;*/
	/*Sales_data sa1;
	Sales_data sa2;
	cout << "ÊäÈëS1" << endl;
	read(sa1);
	while (true)
	{
		print(sa1);
		cout << "ÊäÈëS2" << endl;
		read(sa2);
		if (sa1.isbn() == sa2.isbn())
		{
			add(sa1, sa2);
			print(sa1);
		}
		else
		{
			cout << "s1:" << endl;
			print(sa1);
			sa1 = sa2;
			cout << "ÊäÈëS2" << endl;
		}
	}
	*/

	//Screen s(4, 4, 'a');
	//	s.move(2, 0).set('#').display();
	//	cout << "\n";
	//	s.display();
	//	cout << "\n";
	//	Window_mgr w;
	//	w.clear(s);
	return 0;
}