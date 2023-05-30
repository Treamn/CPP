//树的双亲表示法

#define MAX_TREE_SIZE 100

struct PTNode{
    int data;
    int parent;
};

class PTree{
private:
  PTNode nodes[MAX_TREE_SIZE];
  int r,n;

public:
  PTree() = default;

};