#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int val;
    struct node *left;
    struct node *right;
};

// recursively preorder traversal of the binary tree
// passed in the strurt pointer tree, int x, int count, and an empty array nums that will contain elements less than x
// return the len of the array num
int traverse(struct node *tree, int x, int count, int nums[])
{

    if (tree == NULL)
    {
        return count;
    }

    // check if tree not null

    // if the node's value is less than int x
    // add it to array nums and increase the count

    if (tree->val < x)
    {
        nums[count] = tree->val;
        count += 1;
    }

    // move to the left node
    if (tree->left != NULL)
    {
        count = traverse(tree->left, x, count, nums);
    }
    // move to the right node
    if (tree->right != NULL)
    {
        count = traverse(tree->right, x, count, nums);
    }

    return count;
}

// count to count the number of nodes in the tree
int count(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + count(root->left) + count(root->right);
    }
}

// function solution passed in the run-time stack array containing integers less than x
// return a heap-allocated array
int *solution(struct node *tree, int x)
{

    int size = count(tree);
    int nums[size];

    int c = 0;

    // count the lenght of array nums
    c = traverse(tree, x, c, nums);

    int n = c;

    // declare a heap-allocated array
    int *res = (int *)malloc(n * sizeof(int));

    // passing elements from nums to res
    res = nums;

    // print out n elements that less than x
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", res[i]);
    }
    printf("\n");

    return res;
}

// function to add new node to the tree
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, int val)
{
    /* If the tree(subtree) is empty, return a new node by calling newNode func.*/
    if (node == NULL)
        return newNode(val);

    /* Else, we will do recursion down the tree to further subtrees */
    if (val < node->val)
        node->left = insert(node->left, val);
    else if (val > node->val)
        node->right = insert(node->right, val);

    /* (Safety) return the node's pointer which is unchanged */
    return node;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 200);
    insert(root, 120);
    insert(root, 80);
    insert(root, 160);
    insert(root, 280);
    insert(root, 240);
    insert(root, 320);

    solution(root, 300);

    return 0;
}