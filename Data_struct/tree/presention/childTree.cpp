//树的孩子表示法  

#define MAX_TREE_SIZE 100

struct CTNode{
    int child;
    CTNode* next;
};

struct CTBox{
    int data;
    CTNode* firstchild;
};

class CTree{
private:
  CTBox nodes[MAX_TREE_SIZE];
  int r,n;

public:
  CTree() = default;
};