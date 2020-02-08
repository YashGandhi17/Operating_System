#include<stdio.h>
#define N 50
int q[N];
int count=-1;

void insert(int q[],int *f,int *r,int val)
{
    if((*r)>=N-1)
        printf("queue is full");
    else
    {
        q[++(*r)]=val;
        if((*f)==-1)
           { *f=0;}
    }
}

int display(int q[N],int *f,int *r)
{int n;
    if((*f)==-1&&(*r)==-1)
        printf("queue is empty\n");
    else
        {
            for(n=(*f);n<=(*r);n++)
            {
                printf("%d ",q[n]);
            }
        }
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int a[],int b[],int c[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				swap(&b[j],&b[j+1]);
                swap(&c[j],&c[j+1]);
			}		
		}			
	}
}
void main(){
     int f,r;
    f=-1;r=-1;
	int n;
	float Throughput;
	printf("Enter number of processes");
	scanf("%d",&n);	
	int table[n][6];
	int arrivalTime[n],burstTime[n];
	for(int i=0;i<n;i++){
		printf("Enter arrival time and burst time of process p%d ",i+1);
		scanf("%d %d",&table[i][1],&table[i][2]);
		table[i][0]=i+1;	
	}
	int b[n],p[n],a[n];
	for(int i=0;i<n;i++){
		b[i]=table[i][2];
        a[i]=table[i][1];
		p[i]=table[i][0];
	}
	sort(a,b,p,n);
    int time,bt=1000,pid,z,index;
    time=a[0];
    float tat=0,wt=0;
    while (1)
    {   
        for(int i=0;i<n;i++){
            if(a[i]<=time && b[i]!=0){
                if(b[i]<bt){
                    pid=p[i];
                    bt=b[i];
                    index=i;
                }
            }
        }
       
            b[index]-=1;
            time+=1;
            insert(q,&f,&r,p[index]);
          		
		for(int j=0;j<n;j++){
			if(pid==table[j][0]){
				//calculating complition time
				table[j][3]=time;		
			}		
		}
        bt=1000;
        z=0;
        for(int i=0;i<n;i++){
            if(b[i]!=0)
            { z=1;}
        }
        if(z==0)
        {break;}
		
    }

    for(int j=0;j<n;j++){
				//calculating turn around time
				table[j][4]=table[j][3]-table[j][1];
				tat+=table[j][4];
				//calculating waiting time
				table[j][5]=table[j][4]-table[j][2];
				wt+=table[j][5];				
		}
	 
    
	
	//calculating avarage tat and wt
	tat=tat/n;
	wt=wt/n;
	Throughput=table[n-1][3]/n;
	printf(" P_ID\tA.T\tB.T\tC.T\tT.A.T\tW.T\n");
	for(int i=0;i<n;i++){		
		printf(" %d\t%d\t%d\t%d\t%d\t%d\n",table[i][0],table[i][1],table[i][2],table[i][3],table[i][4],table[i][5]);	
	}

    printf("\n");
    display(q,&f,&r);
	printf("avarage TAT is %f\n",tat);
	printf("avarage Waiting Time is %f\n",wt);
	printf("Throughput is %f\n",Throughput);
}
