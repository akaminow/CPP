#include <iostream>
#include "TreeNode.cpp"
#include "TNPract.cpp"

using namespace std;
static void printInOrderRecursionPost(TreeNode* node) {
	if (node != NULL) {
		printInOrderRecursionPost(node->getLeft());
		printInOrderRecursionPost(node->getRight());
		cout << node->getValue() << " ";
	}
	
}
static void printInOrderRecursionPre(TreeNode* node) {
	if (node != NULL) {
		cout << node->getValue() << " ";
		printInOrderRecursionPre(node->getLeft());
		printInOrderRecursionPre(node->getRight());
	}
}
static void printInOrderRecursionIn(TreeNode* node) {
	if (node != NULL) {
		printInOrderRecursionIn(node->getLeft());
		cout << node->getValue() << " ";
		printInOrderRecursionIn(node->getRight());
	}
}

int main(){
	TreeNode* newTN = new TreeNode();
	cout << "Please insert a word: ";
	cout << "Hello";
	string word;
	cout << "Hello";
	cin >> word;
	cout << "Hello";
	TNPract tn(newTN);
	cout << "hello";
	tn.create(word);
	printInOrderRecursionPost(tn.getTN());
	cout << " is pre" << endl;
	printInOrderRecursionPre(tn.getTN());
	cout << " is post" << endl;
	printInOrderRecursionIn(tn.getTN());
	cout << "is in";
	return 0;
}