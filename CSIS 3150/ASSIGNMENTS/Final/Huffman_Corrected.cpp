// Huffman Encoder

#include <iostream>
#include <ostream>
#include <string>
#include <sstream>
#include <queue>
#include <vector>
#include <algorithm>
#include <fstream>
#include <unistd.h>
#include <windows.h>
#include <stdio.h>

using namespace std;


typedef vector<char>::iterator It;

struct TreeNode{
    int num;
    int key;
    char record;
    TreeNode *left;
    TreeNode *right;
    bool vLeft;
    bool vRight;
    bool visited = false;
    bool isRoot = false;

    TreeNode(){
        num = 0;
        left = NULL;
        right = NULL;
        vLeft = false;
        vRight = false;
    }

    // This is for the dummy nodes only.

    TreeNode(int k){
        key = k;
        num = 0;
        left = NULL;
        right = NULL;
        vLeft = false;
        vRight = false;
    }

    TreeNode(int n, char c, int k){
        num = n;
        key = k;
        record = c;
        left = NULL;
        right = NULL;
        vLeft = false;
        vRight = false;
    }

    TreeNode(int n, char c, TreeNode *leftNode, TreeNode *rightNode){
        record = c;
        num = n;
        left = leftNode;
        right = rightNode;
        vLeft = false;
        vRight = false;
    }

    TreeNode(TreeNode *leftNode, TreeNode *rightNode){
        record = ' ';
        num = leftNode->num + rightNode->num;
        left = leftNode;
        right = rightNode;
        vLeft = false;
        vRight = false;
    }

    bool operator() (const TreeNode &a, const TreeNode &b){
        return a.num > b.num;
    }
};

//easy iterator for TreeNode Vectors, here because TreeNode
//has to be initialized first.

typedef vector<TreeNode>::iterator Itn;
void traverse1(TreeNode node);

// Allows sorting TreeNodes by their num, which is required
//for Huffman and a lot easier this way than manually
//creating a sort function.

bool compareByNumber(const TreeNode &a, const TreeNode &b)
{
    return a.num < b.num;
}

// Methods to traverse the tree.

int traverse(TreeNode *n, string huff){
    stringstream os;

    if (n->left != NULL) {

        traverse(n->left, huff+'0');
        traverse(n->right, huff+'1');

    }

    else{
        cout << n->record << " => " << huff << endl;
    }
    return 1;

}

void crawl_binarytree(TreeNode rootnode){
    // initiate stuff here, then pass to params + initiate recursive traversal
    TreeNode n = rootnode;
    int res = traverse(&n, "");
}

// Used as main menu
string dataGet(){
    string data;
    string temp;

    cout << "Press 1 for a file." << endl;
    cout << "Press 2 for user input." << endl;
    cout << "Press 3 if you want to know more." << endl;
    cin >> temp;

    if(temp == "1"){
        string temp2;
        cout << "Please place the data in a file named \"test.txt\" and any key and enter to continue." << endl;
        //cout << "Please make sure that your file is in the main directory of the Huffman Encoder, then enter the exact file name.\n";
        cin >> temp2;



        try{

        FILE *ftp;
        ftp = fopen("test.txt", "r");
        char text[50000];
        fread(text,1,50000,ftp);
        string text1 = text;

        data = text;

        }

        catch(std::istream::failure){
            cout << "Failed to load file. Using \"Huffman\" instead.";
            data = "Huffman";
        }
        return data;
    }
   else if (temp == "2"){
        cout << "Input string:" << endl;
        string temp3 = "temp";
        cin.ignore();
        getline(cin, temp3);
        data = temp3;
        cout << endl;
        if (data == ""){
            cout << "You didnt enter any Data! Using \"Huffman\" instead.";
            data = "Huffman";
        }
        return data;
    }else if (temp == "3"){
        cout << "\nHuffman Encoder programmed by Alexander Cannell, Nathan Erickson & Chris Kelly\n\n";
        cout << "Final Project CSIS 3150\n";
        cout << endl;

        data = dataGet();
        return data;

    }
    else if (temp == "4"){
        cout << "YOU FOUND NARNIA!!!\n";
        cout << "\n";
        cout << "\n";
        char url1[1000] = "http://global3.memecdn.com/narnia_o_990009.jpg";
        std::fstream fs;
        fs.open(url1);
        fs.close();


        usleep(300000);


        ShellExecute(NULL, "open", "http://weknowmemes.com/wp-content/uploads/2012/05/wait-a-minute-this-isnt-narnia.jpg", 0, 0 , SW_SHOW );

        data = dataGet();
        return data;
    }
    else{
        cout << "Sorry, I didn't understand that."<<endl;
        data = dataGet();
        return data;
    }

}

int main(){
    string str;
    cout << "Welcome to the Huffman Encoder." << endl;

    str = dataGet();

    cout << endl;
    vector<char> v(str.begin(), str.end());
    priority_queue<char> pq;
    priority_queue<TreeNode, vector<TreeNode>, TreeNode> pq1;
    vector<TreeNode> tn;
    vector<TreeNode> trunk;
    TreeNode root = (0);

    //Adds a dummy TreeNode to tn for sorting purposes.
    //Also gets rid of any nulls later on.

    tn.push_back(TreeNode(0, '\0', 0));


    //puts chars into a priority queue for first sortying.

    for (It it = v.begin(); it != v.end(); it++){
		pq.push(*it);
	}

    //creates TreeNodes and, if a char repeats, adds 1 to
    //the correct node.

	while (!pq.empty()){
		TreeNode x = TreeNode(1, pq.top(), 1);
		char i = x.record;
		char j = tn.back().record;

		if (i == j){
            tn.back().num++;
		}
		else{
            tn.push_back(x);
        }
		pq.pop();
	}

    //erases a dummy TreeNode

    tn.erase(tn.begin());
    while (tn.size() != 0){
        TreeNode n = tn.front();
        pq1.push(n);
        tn.erase(tn.begin());
    }

    while (pq1.size() != 1){
        TreeNode *left = new TreeNode (pq1.top());

        pq1.pop();
        TreeNode *right = new TreeNode (pq1.top());

        pq1.pop();
        TreeNode dummy = (0);
        dummy.left = left;
        dummy.right = right;
        dummy.num = left->num + right->num;

        pq1.push(dummy);
    }




    root.left = pq1.top().left;
    root.right = pq1.top().right;

    crawl_binarytree(root);


}
