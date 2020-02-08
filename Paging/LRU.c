#include<stdio.h>
#include<stdlib.h>

int LRU(int a[],int n){
    int min=a[0],index=0;
    for(int i=0;i<n;i++){
      if(a[i]<min){
        min=a[i];
        index=i;
      }
    }
    return index;
}

void display(int a[],int n){
  for(int i=0;i<n;i++)
  {printf("%d\t",a[i]);}
  printf("\n");
}

int main(){
    int index=0,frameSize,pageFault=0,noOfPages,page,y=0,t=0;
    printf("Enter Frame size");
    scanf("%d",&frameSize);
    int arr[frameSize],time[frameSize];
    printf("Enter No of Pages");
    scanf("%d",&noOfPages);
    int z=0,count;
    for(int i=0;i<frameSize;i++){
      arr[i]=-1;
      time[i]=frameSize;
    }
    printf("Enter page refrences\n");
    for(int i=0;i<noOfPages;i++){
        z=0;
        scanf("%d",&page);
        for (int j = 0; j < frameSize; j++)
        {
          if(arr[j]==page){
            time[j]=t;
            t++;
            z=1;
          }
        }
        if(z==0){
          if(count<frameSize){
            arr[count]=page;
            time[count]=t;
            t++;
            count++;
            pageFault++;
            
          }
          else
          {
            index=LRU(time,frameSize);
            arr[index]=page;
            time[index]=t;
            t++;pageFault++;
          }
        }
        display(arr,frameSize);
        display(time,frameSize);
    }

    printf("\nPage Fault: %d",pageFault);
    
}
