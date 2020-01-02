
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct Node{
    int value;
    struct Node*next;
    
} lol;

lol *start;



lol*enqueque(lol*start,int x){
    lol*temp= (lol*)malloc(sizeof(struct Node));
    temp ->value= x;
    temp->next= NULL;
    if(start==NULL)
    {
        start=temp;
        return(start);
    }
    lol*track=start;
    while(track->next!=NULL){
        track=track->next;
    }
    track->next=temp;
    return(start);
}

    lol*dequeque(start)
    {
        lol*track;
        track=start;
        start=track->next;
        free(track);
        return(start);
    }






    void print( lol*start){
       lol*track;
       track=start;
        while(track!=NULL)
        {
            printf(" %d ",track->value);
            track= track->next;
            
        }
        printf("\n");
        }
        
        
 
int main(void)
{
   
       

            start= enqueque(start,5);
            print(start);
             start= enqueque(start,6);
            print(start);
             start= enqueque(start,7);
            print(start);
             start= enqueque(start,9);
            print(start);
             start= dequeque(start);
            print(start);
            start= dequeque(start);
            print(start);
            start=enqueque(start,8);
            print(start);
            
            start = start->next;
            printf("%d", start->next->value);
            
            
            
            
        
  
    

    return (0);
}
