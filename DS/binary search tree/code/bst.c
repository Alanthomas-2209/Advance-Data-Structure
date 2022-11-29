#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* set(int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}


struct node* insertion(struct node* newnode,int key){
	if (newnode == NULL){
		return set(key);
	}
	if (key < newnode->data){
		newnode->left = insertion(newnode->left, key);
	}
	else if (key > newnode->data){
		newnode->right = insertion(newnode->right, key);
	}
	return newnode;
}


void display(struct node *root){
	if(root==NULL){
	printf("Tree is empty....!");
	}
	else{
	printf("Root node: %d",root->data);
	}	
}

void preorder(struct node *root){
	if(root!=NULL){
		printf("%d->",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d->",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d->",root->data);
	}
}

/*
struct node *deleteNode(struct node *root, int key){
	if (root == NULL) 
		return root;
	if (key < root->key)
		root->left = deleteNode(root->left, key);
  	else if (key > root->key)
    		root->right = deleteNode(root->right, key);

  	else{
    		if (root->left == NULL) {
      		struct node *temp = root->right;
      		free(root);
      		return temp;
    		} else if (root->right == NULL) {
      		struct node *temp = root->left;
      		free(root);
      		return temp;
    		}
    	
   	struct node *temp = minValueNode(root->right);
   	root->key = temp->key;
   	root->right = deleteNode(root->right, temp->key);
   	}
   	
  return root;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;

  return current;
}
*/
void main(){

	struct node* root = NULL;
	int choice,data;
	do{
	
		printf("Enter a choice : \n1.insertion of node\n2.Preorder traverse\n3.Inorder traverse\n4.Post order traverse \n5.Dispaly root node\n0.Exit\n\n");
		scanf("%d",&choice);

		switch(choice){
			case 1 : {
					printf("Enter the data :");
				    	scanf("%d",&data);
					insertion(root,data);
					break;
				 }
			case 2 : {
					preorder(root);
					break;
				 }
			case 3 : {
					 inorder(root);
					 break;
				 }
			case 4 : {
					 postorder(root);
					 break;
				 }
			case 5 : {
					 display(root);
					 break;
				 }
			case 0 : {
					printf("Exiting....!\n");
					break;
				 }
			default : {
					  printf("Wrong input\n");
					  break;
				  }
		}
	}while(choice != 0 );
}

/* void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }

}*/
