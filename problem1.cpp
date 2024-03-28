#include <iostream>
using namespace std;

class Leaf{
public:
    string msg;
    Leaf(string msg){
        this->msg=msg;
    }
};

class Node{
public:
    int value;
    Node *left;
    Node *right;
    Leaf *leftL;
    Leaf *rightL;
    Node(int val){
        value=val;
        left=NULL;
        right=NULL;
        leftL=NULL;
        rightL=NULL;
    }
};

Leaf* traverse_tree(Node* temp, int n){
    while(temp!=NULL){
        if(n>temp->value){
            if(temp->rightL==NULL){
                temp=temp->right;
            }
            else{
                return temp->rightL;
            }
        }
        else if(n<=temp->value){
            if(temp->leftL==NULL){
                temp=temp->left;
            }
            else{
                return temp->leftL;
            }
        };
    }
    return NULL;
}

int main() {
        Node *root=new Node(80);
        Node *l1=new Node(54);
        Node *r1=new Node(140);
    
        root->left=l1;
        root->right=r1;
    
        Leaf *right_r_Leaf=new Leaf("Net");
        r1->rightL=right_r_Leaf;
    
    // Right left node and leaves
        Node *RL=new Node(104);
        r1->left=RL;
    
        Leaf *right_l_r=new Leaf("Vision");
        RL->rightL=right_l_r;
    
        Leaf *right_l_l=new Leaf("Power");
        RL->leftL=right_l_l;
    
    // Left right node and leaves
        Node *LR=new Node(60);
        l1->right=LR;
    
        Leaf *left_r_r=new Leaf("Flower");
        LR->rightL=left_r_r;
    
        Leaf *left_r_l=new Leaf("55");
        LR->leftL=left_r_l;
    
    // Left left node and leaves
        Node *LL=new Node(49);
        l1->left=LL;
    
        Leaf *left_l_r=new Leaf("Happy");
        LR->rightL=left_l_r;
    
        Leaf *left_l_l=new Leaf("Victory");
        LR->leftL=left_l_l;
    
    int n;
    cin>>n;
    
    Leaf* result=traverse_tree(root, n);
    if(result==NULL){
        cout<<"Error";
    }
    else{
        cout<<result->msg;
    }
    
    return 0;
}
