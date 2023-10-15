vector<int> findCommon(Node *root1, Node *root2) {
        vector<int> result;
        stack<Node *> stack1, stack2;
    
        while (root1 || root2 || !stack1.empty() || !stack2.empty()) {
            while (root1) {
                stack1.push(root1);
                root1 = root1->left;
            }
    
            while (root2) {
                stack2.push(root2);
                root2 = root2->left;
            }
    
            if (!stack1.empty() && !stack2.empty()) {
                Node *top1 = stack1.top();
                Node *top2 = stack2.top();
    
                if (top1->data == top2->data) {
                    result.push_back(top1->data);
                    stack1.pop();
                    stack2.pop();
                    root1 = top1->right;
                    root2 = top2->right;
                } else if (top1->data < top2->data) {
                    stack1.pop();
                    root1 = top1->right;
                } else {
                    stack2.pop();
                    root2 = top2->right;
                }
            } else if (!stack1.empty()) {
                root1 = stack1.top()->right;
                stack1.pop();
            } else if (!stack2.empty()) {
                root2 = stack2.top()->right;
                stack2.pop();
            }
        }

         return result;
    }
