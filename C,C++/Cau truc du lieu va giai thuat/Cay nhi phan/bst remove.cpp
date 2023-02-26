int Remove(nodeptr &root, Datatype x){
	if(root == NULL)
		return 0;
	if(root->info > x) // tim va xoa ben trai
		return Remove(root->left, x);
	if(root->info < x)// tim va xoa ben phai
	return Remove(root->right,x);
	
	// Truong hop root-><info == x 
	nodeptr p, f, rp;
	p= root;
	
	if(root->left == NULL ) // co 1 cay con	
		root = root->right;	
	else if (root->right == NULL ) // co 1 caay con
		root = root->left;
	else{
		f= p;
		rp = p->right;
		while(rp->left != NULL){
			f= rp;// luu cha cua reprt
			rp = rp->left;
			}
		p->info = rp->info;
		if(f== p )
			f->right = rp->right;
		else if(rp->left != NULL)
			f->right = rp->left	;
		else f->left = rp->right;
		p= rp;			
		}
	delete p;
	return 1;				
}
