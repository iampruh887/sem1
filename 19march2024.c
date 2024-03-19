int countNodes(Tree tree){	
	return tree? 1 + countNodes(tree->left) + countNodes(tree->right) : 0;
}

int countLeafNodes(Tree tree){
	if(!tree) return 0;
	if(tree->left == NULL && tree->right == NULL)
		return 1;
	return countLeafNodes(tree->leaf) + countLeafNodes(tree->right);
}

int countInternalNodes(Tree tree){
	if(!tree) return 0;
	if(tree->left == NULL && tree->right == NULL)
		return 0;
	return 1+ countInternalNodes(tree->left) + countInternalNodes(tree->right);
}

int linearSearch(int a[], int start, int end, int key){
	for(;start<=end;start++)
		if(a[start] == key)
			return start;
	return -1;
}

Tree buildTreeHelper(int post[], int in[], int inStart, int inEnd, int postIndex){
	if (inStart>inEnd) return NULL;
	Tree tree =  newTree(NULL, post[postIndex], NULL, NULL);
	postIndex--;
	int index = linearSearch(in, inStart, inEnd, tree->key);
	tree->right = buildTreeHelper(post, in, index+1, inEnd, postIndex);
	tree->left = buildTreeHelper(post, in, inStart, index-1, postIndex);
	return Tree
}

Tree buildTree(int post[], int in[], int n){
	int inStart = 0;
	int inEnd = n-1;
	int postIndex = n-1;
	
	return buildTreeHelper(n, post, in, inStart, inEnd, postIndex);
}