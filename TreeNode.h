//#pragma once
//#include <string>
//using namespace std;
//class BinStrTree;
//class TreeNode
//{
//public:
//	TreeNode() :
//		value(string()), count(1), left(nullptr), right(nullptr) {}
//	TreeNode(const TreeNode& t) :
//		value(t.value), count(t.count), left(t.left), right(t.right) {}
//
//	TreeNode& operator=(const TreeNode&);
//	~TreeNode();
//
//private:
//	string value;
//	int count;
//	TreeNode* left;
//	TreeNode* right;
//};
//TreeNode::~TreeNode()
//{
//	if (--count == 0)
//	{
//		delete left;
//		delete right;
//	}
//}
//class BinStrTree
//{
//public:
//	BinStrTree() :root(new TreeNode()) {}
//	BinStrTree(const BinStrTree& bs) : root(new TreeNode(*bs.root)) {}
//	BinStrTree& operator=(const BinStrTree& b);
//	~BinStrTree() { delete root; }
//
//private:
//	TreeNode* root;
//};
