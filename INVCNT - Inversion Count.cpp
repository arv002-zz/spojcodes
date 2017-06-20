#include<bits/stdc++.h>

using namespace std;

struct node
{
    long long key,index;
    struct node *left, *right;
};

struct node *newNode(long long item, long long i)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    temp->index=i;
    return temp;
}

struct node* insert(struct node* node, long long key, long long  i)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key, i);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key,i);
    else if (key > node->key)
        node->right = insert(node->right, key,i);

    /* return the (unchanged) node pointer */
    return node;
}
long long search(struct node* root, long long key,long long i, long long sum)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL)
       return sum;

    // Key is greater than root's key
    if (root->key <=key )
       {
           if(root->index > i)
            sum++;
           return search(root->right,key,i,sum);
       }

    // Key is smaller than root's key

}


int main()
{
    long long t;

    cin>>t;

    while(t--)
    {

        long long i,j,n,m=0;
        cin>>n;
        long long a[n];

        for(i=0;i<n;i++)
          cin>>a[i];

        struct node *root = NULL;
        root = insert(root, a[0],0);

        for(i=1;i<n;i++)
        {
            insert(root,a[i],i);
        }
        for(i=0;i<n-1;i++)
        {
            m+=search(root,a[i],i,0);
        }
        cout<<m<<"\n";
    }
}
