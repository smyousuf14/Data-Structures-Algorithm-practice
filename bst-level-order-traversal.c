
#include <stdio.h>
#include<stdlib.h>
#include<math.h>     //Yousuf search up Level order traversal on youtube it uses a queque
#include<string.h>

typedef struct Node{ // Created BST node datastructure with type lol
    int value;
    struct Node*left;
    struct Node*right;
    
} lol;

lol*root;

typedef struct fake{ // Created a queque datastucture with type wow ;
    int value;
    struct fake*next;
    
} wow;

wow *start;


wow*enqueque(wow*start,int x){
    wow*temp= (wow*)malloc(sizeof(struct Node));
    temp ->value= x;
    temp->next= NULL;
    if(start==NULL)
    {
        start=temp;
        return(start);
    }
    wow*track=start;
    while(track->next!=NULL){
        track=track->next;
    }
    track->next=temp;
    return(start);
}

    wow*dequeque(start)
    {
        wow*track;
        track=start;
        start=track->next;
        free(track);
        return(start);
    }
    
   void level(lol*root){
       if(root==NULL)
       {
           printf("return");
           return;             //LEvel order traversal this one needs help
           
       }
       
       lol*tempRoot = root;
       
       // enqueque the root.
       start= enqueque(start, tempRoot->value);
       printf(" %d ", start->value);
       
       // Now look through the tree to find the first value of the queque.
       
       while(start ->value != tempRoot-> value)
       {
            // Check the value of the queuque number.
            if(start->value > tempRoot-> value)
            {
                // move to the right.
                tempRoot = tempRoot ->right;
            }
            else
            if(start->value < tempRoot-> value)
            {
                // move to the left.
                tempRoot = tempRoot->left;
            }
       }
       
       // Now that it equals to tempRoot value.
       // Lets queque the right and left children of this tree value, if any exist.
       if(tempRoot->left!=NULL)
        {
            start= enqueque(start, tempRoot->left->value);
        }
        if(tempRoot->right!=NULL)
        {
            start= enqueque(start, tempRoot->right->value);
        }
        
        // Finally dequeque a value from the queque.
        start = dequeque(start);
       
       
       
       while(start!=NULL)
       {
            // Print out the value that is to be dequeque.
            printf(" %d ", start->value);
            
            // Make sure to set tempRoot to the original root value.
            tempRoot = root;
            
             // Now look through the tree to find the first value of the queque.
       
           while(start ->value != tempRoot-> value)
           {
                // Check the value of the queuque number.
                if(start->value > tempRoot-> value)
                {
                    // move to the right.
                    tempRoot = tempRoot ->right;
                }
                else
                if(start->value < tempRoot-> value)
                {
                    // move to the left.
                    tempRoot = tempRoot->left;
                }
           }
           
           // Now that it equals to tempRoot value.
           // Lets queque the right and left children of this tree value, if any exist.
            if(tempRoot->left!=NULL)
            {
                start= enqueque(start, tempRoot->left->value);
            }
            if(tempRoot->right!=NULL)
            {
                start= enqueque(start, tempRoot->right->value);
            }
            
            // Finally dequeque a value from the queque.
            start = dequeque(start);
                
        }
       
   } 
    
    
    
lol*construct(int x)
{
    lol*temp= (lol*)malloc(sizeof(struct Node));   //This one has no problem
    temp->value=x;
    temp->left= NULL;
    temp->right= NULL;
    return(temp);
    
}

lol* Insert(lol*root,int y)
{
    
    if(root==NULL)
    {
        root= construct(y);
    }
    else                             //This one has no problem
    if(y<=root->value)
    {
        root->left= Insert(root->left,y);
    }
    else if(y>root->value)
    {
        root->right= Insert(root->right,y);
    }

    return(root);
    
}


int main(void)
{
   
    root=NULL;
    start=NULL;
    root= Insert(root,15);
    root= Insert(root,4);
    root= Insert(root,21);
    root= Insert(root,3);
    root= Insert(root,5);
    root= Insert(root,16);
    root= Insert(root,33);
    root= Insert(root,9);
    
    level(root);  //calling level order function expecting an output as: 15 4 21 3 5 16 33 9
  
 
  
  
  
    return (0);
}   

