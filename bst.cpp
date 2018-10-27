/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

 bool checkRightTree(Node* root,int data){
     if(root->left==NULL && root->right==NULL)
         return true;
     if(root->left!=NULL && root->right!=NULL){
         if((root->left)->data<root->data && (root->right)->data>root->data){
             if((root->left)->data>data && (root->right)->data>data)
                 return ((checkRightTree(root->left,data))&&(checkRightTree(root->right,data)));
             else
                 return false;
         }
          else
                return false;
     }
      else{
           if(root->left!=NULL){
                if((root->left)->data<root->data){
                    if((root->left)->data>data)
                        return checkRightTree(root->left,data);
                    else
                        return false;
                }   
                else
                    return false;
            }
            else{
                if((root->right)->data>root->data){
                    if((root->right)->data>data)
                        return checkRightTree(root->right,data);
                    else
                        return false;
                }     
                else
                    return false;
            }
        }
 }

bool checkLeftTree(Node* root,int data){
     if(root->left==NULL && root->right==NULL)
         return true;
     if(root->left!=NULL && root->right!=NULL){
         if((root->left)->data<root->data && (root->right)->data>root->data){
             if((root->left)->data<data && (root->right)->data<data)
                 return ((checkLeftTree(root->left,data))&&(checkRightTree(root->right,data)));
             else
                 return false;
         }
          else
                return false;
     }
      else{
           if(root->left!=NULL){
                if((root->left)->data<root->data){
                    if((root->left)->data<data)
                        return checkLeftTree(root->left,data);
                    else
                        return false;
                }   
                else
                    return false;
            }
            else{
                if((root->right)->data>root->data){
                    if((root->right)->data<data)
                        return checkLeftTree(root->right,data);
                    else
                        return false;
                }     
                else
                    return false;
            }
        }
 }
	bool checkBST(Node* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        if(root->left!=NULL && root->right!=NULL){
            if((root->left)->data<root->data &&(root->right)->data>root->data)
                return ((checkLeftTree(root->left,root->data))&&(checkRightTree(root->right,root->data)));
            else
                return false;
        }
        else{
            if(root->left!=NULL){
                if((root->left)->data<root->data)
                    return checkLeftTree(root->left,root->data);
                else
                    return false;
            }
            else{
                if((root->right)->data>root->data)
                    return checkRightTree(root->right,root->data);
                else
                    return false;
            }
        }
	}
