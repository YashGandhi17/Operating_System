#include<stdio.h>
#include<stdlib.h>

int F=-1,R=-1;
int y=0;
void enqueue(int q[],int val,int N){
    if((R+1)%N==F){
    }
    R=(R+1)%N;
    q[R]=val;
    if(R==N)
        y=1;
    if(F==-1)
        F=0;
}

void dequeue(int q[],int N){
    int item;

    if(F==-1){
        printf("Queue is empty\n");
    }
    item=q[F];
    if(F==R)
        F=R=-1;
    else
        F=(F+1)%N;
    y=0;
}

void display(int q[],int N){
    int i;
    i=F;

    do{
        printf("%d\t",q[i]);
        i=(i+1)%N;
    }while(i!=F);
    printf("\n");

}
int main(){
    int frameSize,pageFault=0,noOfPages,page;
    printf("Enter Frame size");
    scanf("%d",&frameSize);
    printf("Enter No of Pages");
    scanf("%d",&noOfPages);
    int pages[noOfPages],z=0;
    printf("Enter page refrences\n");
    for (int i = 0; i < noOfPages; i++)
    {   z=0;
        scanf("\n%d",&page);
        for(int j=0;j<noOfPages;j++){
            if(page==pages[j])
                z=1;
        }
        if(z==0){
            if(y==0){
                enqueue(pages,page,frameSize);
                pageFault++;
                printf("Queue");
                display(pages,frameSize);
            }
            else
            {
                dequeue(pages,frameSize);
                enqueue(pages,page,frameSize);
                pageFault++;
                printf("Queue");
                display(pages,frameSize);
            }

        }  
    }
    printf("Page Fault: %d",pageFault);
    
}
