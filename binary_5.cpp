void mirror(Node* node) 
{
        if(node==NULL)
        {
            return;
        }
        queue<Node*>q;
        q.push(node);
        while(q.size()>0)
        {
            Node* root=q.front();
            q.pop();
            if(root->left)
            {
                q.push(root->left);
            }
            if(root->right)
            {
                q.push(root->right);
            }
            swap(root->left,root->right);
        }
     
}

