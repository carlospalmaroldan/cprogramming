#include "testtree.h"


void testtree(){

struct Node secondLeft ={
		0,
		NULL,
		NULL
	};

	struct Node left = {
		1,
		&secondLeft,
		NULL
	};

	struct Node right = {
		4,
		NULL,
		NULL
	};
	
	
	struct Node root = {
		2,
		&left,
		&right
	};
	

	printTree(&root);

}