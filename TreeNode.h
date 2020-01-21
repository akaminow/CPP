class treeNode{
	public:
		treeNode();
		treeNode(char num, treeNode* newRight, treeNode* newLeft);
		void setLeft(treeNode* newLeft);
		void setRight(treeNode* newRight);
		void setVal(char num);
		treeNode* getLeft();
		treeNode* getRight();
		char getValue();
};