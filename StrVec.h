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
//	void push_back(const string&); //����Ԫ��
//	size_t size() const { return first_free - elements; }
//	size_t capacity() const { return cap - elements; }
//	string* begin() const { return elements; }
//	string* end() const { return first_free; }
//	void resize();//���·����С
//	void reserve();
//private:
//	string* elements; //��Ԫ��
//	string* first_free; //���һ��ʵ��Ԫ��֮��
//	string* cap; //�ڴ�ĩβ֮��
//	static allocator<string> alloc; //����Ԫ��
//	void chk_n_alloc() //�ж��ڴ��Ƿ���
//	{
//		if (size() == capacity())
//			reallocate();
//	}
//	//�����ڴ棬����һ��������Χ�е�Ԫ��
//	pair<string*, string*> alloc_n_copy(const string*, const string*);
//	void free(); //����Ԫ���ͷ��ڴ�
//	void reallocate(); //�ڴ�����ʱ�������ڴ�
//};