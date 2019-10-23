#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n=1;
   struct node
   {
       int data;
       node* left;
       node* right;
   };
   
   node* getnode(int data)
   {
       node* newnode=new node();
       newnode->data=data;
       newnode->left=newnode->right=NULL;
       return newnode;
   }
   
   node* insert(node* root,int data)
   {
       if(root==NULL)
       {root=getnode(data);
       return root;}
       else if(data<root->data)
       root->left=insert(root->left,data);
       else
       root->right=insert(root->right,data);
       return root;
   }
   
   bool search(node* root,int data)
   {
       if(root==NULL)
       return false;
       else if(root->data==data)
       return true;
       else if(data<root->data)
       return search(root->left,data);
       else 
       return search(root->right,data);
   }
   
   int CountNodes(node* root)
   {
       if(root==NULL)
       return 0;
       if(root->left!=NULL)
       {n=n+1;
       n=CountNodes(root->left);}
       if(root->right!=NULL){
         n=n+1;
       n=CountNodes(root->right);}
       return n;
   }
    
    int minValue(node* root)
    { 
       while (root->left != NULL)  
        root = root->left;
        return(root->data); 
    }
    
    void inorder(node* root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }    
    }
    node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
    
    node* Delete(node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
		    node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}    

int isbst(node* root,int min,int max)
{
    if(root==NULL)
    return 1;
    else if(root->data>=min&&root->data<max&&isbst(root->left,min,root->data)&&isbst(root->right,root->data,max))
    return 1;
    else return 0;
}
int isvbst(node*root){
    return isbst(root,INT_MIN,INT_MAX);
}

int main() {
    node* root=NULL;
    root = insert(root,15);	
	root = insert(root,10);	
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
	int v=isvbst(root);
	if(v)
	cout<<"YES";
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	int lame=minValue(root);
	cout<<lame<<endl;
	
int t =	CountNodes(root);
cout<<t<<endl;
	inorder(root);
	root=Delete(root,10);
	inorder(root);
	return 0;
}
