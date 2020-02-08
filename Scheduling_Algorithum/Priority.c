#include<stdio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int a[],int b[],int c[],int d[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				swap(&b[j],&b[j+1]);
                swap(&c[j],&c[j+1]);
                swap(&d[j],&d[j+1]);
			}		
		}			
	}
}
void main(){
	int n;
	float Throughput;
	printf("Enter number of processes");
	scanf("%d",&n);	
	int table[n][7];
	int arrivalTime[n],burstTime[n];
	for(int i=0;i<n;i++){
		printf("Enter arrival time and burst time and priority of process p%d ",i+1);
		scanf("%d %d %d",&table[i][1],&table[i][2],&table[i][6]);
		table[i][0]=i+1;	
	}
	int pr[n],p[n],a[n],b[n];
	for(int i=0;i<n;i++){
		pr[i]=table[i][6];
        a[i]=table[i][1];
		p[i]=table[i][0];
        b[i]=table[i][2];
	}
	sort(a,pr,p,b,n);
    int time,priority,pid,z,index;
    time=a[0];
    float tat=0,wt=0;
    while (1)
    {   priority=0;
        for(int i=0;i<n;i++){
            if(a[i]<=time && b[i]!=0){
                if(pr[i]>priority){
                    pid=p[i];
                    priority=pr[i];
                    index=i;
                }
            }
        }
       b[index]=0;
		
		for(int j=0;j<n;j++){
			if(pid==table[j][0]){
				//calculating complition time
				table[j][3]=time+table[j][2];
				time+=table[j][2];
				//calculating turn around time
				table[j][4]=table[j][3]-table[j][1];
				tat+=table[j][4];
				//calculating waiting time
				table[j][5]=table[j][4]-table[j][2];
				wt+=table[j][5];		
			}		
		}
       
        z=0;
        for(int i=0;i<n;i++){
            if(b[i]!=0)
            { z=1;}
        }
        if(z==0)
        {break;}
		
    }
	 
    
	
	//calculating avarage tat and wt
	tat=tat/n;
	wt=wt/n;
	Throughput=table[n-1][3]/n;
	printf(" P_ID\tA.T\tB.T\tP.T\tC.T\tT.A.T\tW.T\n");
	for(int i=0;i<n;i++){		
		printf(" %d\t%d\t%d\t%d\t%d\t%d\t%d\n",table[i][0],table[i][1],table[i][2],table[i][6],table[i][3],table[i][4],table[i][5]);	
	}
	printf("avarage TAT is %f\n",tat);
	printf("avarage Waiting Time is %f\n",wt);
	printf("Throughput is %f\n",Throughput);
}
