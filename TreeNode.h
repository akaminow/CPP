class TreeNode{
	public:
		TreeNode();
		TreeNode(char num, TreeNode* newRight, TreeNode* newLeft);
		void setLeft(TreeNode* newLeft);
		void setRight(TreeNode* newRight);
		void setVal(char num);
		TreeNode* getLeft();
		TreeNode* getRight();
		char getValue();
	private:
		char value;
		TreeNode* left;
		TreeNode* right;
};