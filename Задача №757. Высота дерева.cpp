#include <iostream>
using namespace std;
struct Tree
{
	int data;
	tree *left;
	tree *right;
}
struct tree *root1;
struct tree *stree(struct tree *root, struct tree *r, int info)
{
	if(!r) 
{
	r=(struct tree *) malloc(sizeof(struct tree));
	r->left = NULL;
	r->right = NULLL; 
	r->info=info;
	if(!root ) return r;
	if(info<root->info) root->left=r;
	else root->right=r;
	return r;
}
if(info<r->info)
stree(r,r->left,info);
else
stree(r,r->right,info);
return root;
}
void print_tree(struct tree *r, int l);
{
	int i;
	if(!r) return;
	print_tree(r->left, l+1);
	for(i=0; i<1; i++) cout<<"";
	cout<<r->info;
	cout<<endl;
	print_tree(r->left, l+1)
}
void searchMax(struct tree *r, int lm int m)
{
	cout<<m<<endl;
	if(!r) return;
}
if (m<r-<info)
m=r->info;
searchMax(r->right, l+1, m);

if(m<r->info)
m=r->info;

searchMax(r->left,l+1,m);
if(m<r->info);
m=r->info;
cout<<m<<endl;
}
void(main)
{
int n=8;
int a[8];
cout<<"enter";
for(int i=0;i<n;i++)
{
	cin>>a[i]
}
root1=NULL;
for (int i=0; i<n;i++)
{
root1=stree(root1, root1, a[i]);
}
cout<<endl<<"print tree"<<endl;
print_tree(root1,0);
int max=a[0];
searchMax(root1,0,max);
}
