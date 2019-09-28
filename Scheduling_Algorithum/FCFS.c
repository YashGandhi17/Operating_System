#include<stdio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int a[],int b[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				swap(&b[j],&b[j+1]);			
			}		
		}			
	}
}
void main(){
	int n;
	printf("Enter number of processes");
	scanf("%d",&n);	
	int table[n][6];
	int arrivalTime[n],burstTime[n];
	for(int i=0;i<n;i++){
		printf("Enter arrival time and burst time of process p%d ",i+1);
		scanf("%d %d",&table[i][1],&table[i][2]);
		table[i][0]=i+1;	
	}
	int a[n],p[n];
	for(int i=0;i<n;i++){
		a[i]=table[i][1];
		p[i]=table[i][0];
	}
	sort(a,p,n);
	float tat=0,wt=0;
	int ct=a[0];
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			if(p[i]==table[j][0]){
				//calculating complition time
				table[j][3]=ct+table[j][2];
				ct+=table[j][2];
				//calculating turn around time
				table[j][4]=table[j][3]-table[j][1];
				tat+=table[j][4];
				//calculating waiting time
				table[j][5]=table[j][4]-table[j][2];
				wt+=table[j][5];		
			}		
		}
		
	}
	//calculating avarage tat and wt
	tat=tat/n;
	wt=wt/n;
	printf(" P_ID\tA.T\tB.T\tC.T\tT.A.T\tW.T\n");
	for(int i=0;i<n;i++){		
		printf(" %d\t%d\t%d\t%d\t%d\t%d\n",table[i][0],table[i][1],table[i][2],table[i][3],table[i][4],table[i][5]);	
	}
	printf("avarage TAT is %f\n",tat);
	printf("avarage Waiting Time is %f\n",wt);
}
