#ifndef INFO_H_HEADER_
#define INFO_H_HEADER_
struct treeNode{
	char* name;
	int uid;
	int no_of_child;
	int typ;
	char* ac_name;
	struct treeNode *child[10];
};

typedef struct treeNode TREE_NODE;
typedef TREE_NODE *PARSE_TREE;
#endif

