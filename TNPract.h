#include <iostream>
using namespace std;
class TNPract{
	public:
	 	TNPract(TreeNode* newTN){
	 		tn = newTN;
	 	}
	 	TreeNode* getTN(){
	 		return tn;
	 	}
	 	void create(std::string word) {
			tn->setVal(word.at(0));
			TreeNode* temp = tn;
			for (int i = 1; i < word.length(); i++) {
				temp = tn;
				while ((word.at(i) < temp->getValue() && temp->getLeft()!= NULL)
						|| (word.at(i) >= temp->getValue() && temp->getRight()!= NULL)) {
					while (word.at(i) < temp->getValue() && temp->getLeft() != NULL)
						temp = temp->getLeft();
					while (word.at(i) >= temp->getValue() && temp->getRight() != NULL)
						temp = temp->getRight();
				}
				if (word.at(i) < temp->getValue())
					temp->setLeft(new TreeNode(word.at(i),NULL,NULL));
				else temp->setRight(new TreeNode(word.at(i),NULL,NULL));
			}
		}
	private:
		TreeNode* tn;
};