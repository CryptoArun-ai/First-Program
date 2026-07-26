#include<stdio.h>
#include<conio.h>
int main(){
clrscr();
int num[10],frq[10];
int i,j,k,c=0,n,user,temp;
printf("----------------------Welcome To bad Program-----------------------");
printf("\n>>>Type 1 to Enter Program : ");
scanf("%d",&user);
if(user==1){
printf(">>>Enter Array Size : ");
scanf("%d",&n);
printf("\n----------------------------------------------------------------\n");
for(i=0;i<n;i++){
printf(">>>Enter %d Elements : ",i+1);
scanf("%d",&num[i]);
frq[i]=-1;
}
printf("\n----------------------------------------------------------------\n");
printf("You Enter Array = ");
printf("[");
for(i=0;i<n;i++)  {
printf("%d",num[i]);
if(i<n-1)
printf("-");
}
}
printf("]");

printf("\n----------------------------------------------------------------\n");
printf(">>>Enter 2 to start sorting, else press any key to go next step :  " );
scanf("%d",&user);
printf("\nSorting started.....");
printf("\nProcessing : ");
if(user==2){
for(i=0;i< n;i++){
	for(j=i+1;j<n;j++){
		if(num[i]>num[j]){
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
		}
		else
		num[i]=num[i];
	 }
if(i<5){
c=c+20;
printf("%d% ",c);
}
}

}
printf("\nArray sorted Succefully");
printf("\n----------------------------------------------------------------\n");
printf(">>>If you want to check sorted array, pls type 3 : ");
scanf("%d",&user);
if(user==3){
printf("\n----------------------------------------------------------------\n");
printf("Sorted Array = ");
printf("[");
for(i=0;i<n;i++)  {
printf("%d",num[i]);
if(i<n-1)
printf("-");
}
printf("]");
}
printf("\n----------------------------------------------------------------\n");
printf("\n>>>Type 4 to start frq count : ");
scanf("%d",&user);
if(user==4){
c=0;
printf("\nFrquency counting Start....");
printf("\nProcessing : ");
for(i=0;i<n;i++){
	if(frq[i]==0)
	continue;
frq[i]=1;
}
for(i=0;i< n;i++){
	for(j=i+1;j<n;j++){
		if(num[i]==num[j]){
			frq[j]=0;
			frq[i]++;
		}
	}


if(i<5)   {
c=c+20;
printf("%d% ",c);
}

}
}
printf("\nFrq count succssfully");
printf("\n----------------------------------------------------------------\n");
printf("\n>>>Enter 5 check frq count els type any to skip: ");
scanf("%d",&user);
if(user==5){
	printf("Num = ");
	for(i=0;i<n;i++){
		printf("%d",num[i]);
	}

	printf("||");
		printf("Frq = ");
	for(i=0;i<n;i++){
		printf("%d",frq[i]);
	}
	printf("\n----------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+1==num[j]){
				printf("frq %d count = ",i+1);
				printf("%d",frq[j]);
				printf("\n");
				break;
			}
		}
	}
}
printf("\n----------------------------------------------------------------\n");
getch();

}