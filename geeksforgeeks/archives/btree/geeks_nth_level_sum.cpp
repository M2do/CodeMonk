#include <iostream>
#include <cstring>
#include <utility>
#include <string>

using namespace std;
class Node
{
public:
    Node(Node*, Node*, int value);
    int value;
    Node* left;
    Node* right;
    void inorder(Node* n);
    
};

Node::Node(Node* left, Node* right, int value) {
    this->left = left;
    this->right = right;
    this->value = value;
}

string::iterator findtheclosing(string::iterator begin, string::iterator end) {
    int count = 0;
    string::iterator current = begin;
    while(current != end) {
        if(*current == '(') count++;
        else if (*current == ')') count--;
        current++;
        if (count==0)break;
    }
    return current;
}

Node* createTree(string::iterator begin, string::iterator end) {
    string integer;
    string::iterator current = begin+1;
    while (current != end &&  *current != '(' && *current != ')') {
        integer += *current;
        current++;
    }
    if(integer == "") return NULL;
    int value = atoi(integer.c_str());
    //cout << value;
    string::iterator leftEnd = findtheclosing(current, end);
    
    Node* left = createTree(current, leftEnd);
    Node* right = createTree(leftEnd, end);
    return new Node(left, right, value);
}


int sum;
void inorder(Node * n, int k, int currentLevel)
{
    int localCurrentLevel = ++currentLevel;
    if(n==NULL)
        return;
    inorder(n->left, k, localCurrentLevel);
    //cout << "("<< localCurrentLevel << ": " << n->value << ") ";
    if (currentLevel == k) {
        sum += n->value;
    }
    inorder(n->right, k, localCurrentLevel);
}

int main() {
	//code
	int numTestcases;
	cin >> numTestcases;
	for(int i=0; i<numTestcases; i++) {
	    int level;
	    cin >> level;
	    string tree;
	    cin >> tree;
	    Node* root = createTree(tree.begin(), tree.end());
	    sum = 0;
        inorder(root, level, -1);
        cout<< sum <<endl;
	}
	return 0;
}