//#pragma once
//#include <vector>
//#include <fstream>
//#include <memory>
//#include <string>
//#include <map>
//#include <set>
//#include <sstream>
//using namespace std;
//
//class QueryResult;
//class TextQuery
//{
//	friend QueryResult;
//public:
//	using line_no = vector<string>::size_type;
//	TextQuery(ifstream&);
//	QueryResult query(const string&) const;
//	TextQuery& operator=(const TextQuery&) = delete;
//private:
//	shared_ptr<vector<string>> file;
//	map<string, shared_ptr<set<line_no>>> m;
//};
///// <summary>
///// /
///// </summary>
//class QueryResult
//{
//	friend ostream& print(ostream&, const QueryResult&);
//public:
//	QueryResult(const string s,
//		shared_ptr<set<TextQuery::line_no>> p,
//		shared_ptr<vector<string>> f):
//		sought(s), lines(p), file(f) {}
//	QueryResult& operator = (const QueryResult&) = delete;
//private:
//	string sought;	//保存查询单词
//	shared_ptr<vector<string>> file;	//保存输入文件
//	shared_ptr<set<TextQuery::line_no>> lines;	//保存单词行号
//};
//
////
//QueryResult TextQuery::query(const string& sought) const
//{
//	static shared_ptr<set<line_no>> nodata(new set<line_no>);
//	auto loc = m.find(sought);
//	if (loc == m.end())
//		return QueryResult(sought, nodata, file);
//	else
//		return QueryResult(sought, loc->second, file);
//}
////
//TextQuery::TextQuery(ifstream& ifs) : file(new vector<string>)
//{
//	string text;
//	while (getline(ifs, text))
//	{
//		file->push_back(text);
//		int n = file->size() - 1;
//		istringstream line(text);
//		string word;
//		while (line >> word)
//		{
//			auto& lines = m[word];
//			if (!lines)
//				lines.reset(new set<line_no>);
//			lines->insert(n);
//		}
//	}
//}
////
//ostream& print(ostream& os, const QueryResult& qr)
//{
//	os << qr.sought << " occurs " << qr.lines->size() << " time " << endl;
//	for (auto num : *qr.lines)
//		os << "\t(line " << num + 1 << ")" << *(qr.file->begin() + num) << endl;
//	return os;
//}