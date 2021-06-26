//#pragma once
//#include <string>
//#include <memory>
//#include <utility>
//using namespace std;
//class StrVec
//{
//public:
//	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
//	StrVec(initializer_list<string>& is)
//		: elements(is.begin());
//	StrVec(const StrVec&);
//	StrVec& operator=(const StrVec&);
//	~StrVec();
//	void push_back(const string&); //拷贝元素
//	size_t size() const { return first_free - elements; }
//	size_t capacity() const { return cap - elements; }
//	string* begin() const { return elements; }
//	string* end() const { return first_free; }
//	void resize();//重新分配大小
//	void reserve();
//private:
//	string* elements; //首元素
//	string* first_free; //最后一个实际元素之后
//	string* cap; //内存末尾之后
//	static allocator<string> alloc; //分配元素
//	void chk_n_alloc() //判断内存是否够用
//	{
//		if (size() == capacity())
//			reallocate();
//	}
//	//分配内存，拷贝一个给定范围中的元素
//	pair<string*, string*> alloc_n_copy(const string*, const string*);
//	void free(); //销毁元素释放内存
//	void reallocate(); //内存用完时分配信内存
//};