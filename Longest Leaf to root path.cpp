// Given a binary tree, return the longest path from leaf to root. Longest means, a path which contain maximum number of nodes from leaf to root.
// Input format :
// Elements in level order form (separated by space)
// (If any node does not have left or right child, take -1 in its place)
// Output format :
// Line 1 : Binary Tree 1 (separated by space)

vector<int>* longestPath(BinaryTreeNode<int>* root) {
  if (root == NULL) {
    vector<int>* temp = new vector<int>();
    return temp;
  }

  vector<int>* rightvect = longestPath(root->right);
  vector<int>* leftvect = longestPath(root->left);

  if (leftvect->size() > rightvect->size())
    leftvect->push_back(root->data);
  else
    rightvect->push_back(root->data);

  return (leftvect->size() > rightvect->size() ? leftvect : rightvect);
}
