#include <iostream>
#include "TreeNode.h"
class TreeNode{
	public:
		TreeNode(){
			value = 0;
			left = NULL;
			right = NULL;
		}
		TreeNode(char num, TreeNode* newRight, TreeNode* newLeft){
			value = num;
			right = newRight;
			left = newLeft;
		}
		void setLeft(TreeNode* newLeft){
			left = newLeft;
		}
		void setRight(TreeNode* newRight){
			right = newRight;
		}
		void setVal(char num){
			value = num;
		}
		TreeNode* getLeft(){
			return left;
		}
		TreeNode* getRight(){
			return right;
		}
		char getValue(){
			return value;
		}
	private:
		char value;
		TreeNode* left;
		TreeNode* right;
};
