#include<stdio.h>


void main(){
    int noOfProcess,noOfResources;
    printf("Enter numbe of processes"); //Input total number of processes
    scanf("%d",&noOfProcess);
    printf("Enter numbe of resources");//Input total number of resources
    scanf("%d",&noOfResources);
    int alocated[noOfProcess][noOfResources];
    int requested[noOfProcess][noOfResources];
    int totalResources[noOfResources];
    int totalAvailable[noOfResources];
	int flag[noOfProcess]; 
    //Input total resources
    printf("Enter total resources.\n");
    for(int i=0;i<noOfResources;i++){
        printf("Enter total resources of R%d",i);
        scanf("%d",&totalResources[i]);
        totalAvailable[i]=totalResources[i];

    }
    //Input Alocated resources
    printf("Enter assigned resources\n");
    for(int i=0;i<noOfProcess;i++){
        for (int j = 0; j < noOfResources; j++)
        {
        
            printf("Enter assigned resources for P%d_R%d",i,j);
            scanf("%d",&alocated[i][j]);
            totalAvailable[j]-=alocated[i][j];
        }
		
	}
    //Printing table
    for (int i = 0; i < noOfProcess; i++)
    {
        flag[i]=0;
        printf("\nP%d",i);
        for (int j = 0; j < noOfResources; j++)
        {
            printf("\t%d",alocated[i][j]);
        }
        
    }
     
    //Input requested resources
    printf("\nEnter requested resources\n");
    for(int i=0;i<noOfProcess;i++){
        for (int j = 0; j < noOfResources; j++)
        {
        
            printf("Enter required resources for P%d_R%d",i,j);
            scanf("%d",&requested[i][j]);
        }
		
	}
    //Printing table
    for (int i = 0; i < noOfProcess; i++)
    {
        printf("\nP%d",i);
        for (int j = 0; j < noOfResources; j++)
        {
            printf("\t%d",alocated[i][j]);
        }
        printf("\t|");
        for (int j = 0; j < noOfResources; j++)
        {
            printf("\t%d",requested[i][j]);
        }
        
    }
    printf("\n");
    int index=0,y=0;
    while (index<noOfProcess)
    { 
        
        for (int i = 0; i < noOfProcess; i++)
        { y=0;
            if(flag[i]==0){
                int j;
                for (j = 0; j < noOfResources; j++)
                {
                    if(requested[i][j]>totalAvailable[j])
                    {break;}
                   
                    
                }
                if(j==noOfResources){
                    flag[i]=1;
                    for (j = 0; j < noOfResources; j++)
                    {
                        requested[i][j]=0;
                        totalAvailable[j]+=alocated[i][j];
                    }
                    printf("P%d\t",i);
                    index++;
                    y=1;
                   break;
                }
            }
            
        }
        if(y==0){
            printf("\nDeadLock..");
            break;
        }
    }
    if(y==1){
        printf("\nNo DeadLock.\n");
    }
}	
