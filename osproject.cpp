#include<stdio.h>
int fnum;
int snum;
struct faculty
{
    char fname[10];
    int ftime;
}f[20];
struct Student
{
	char sname[10];
	int stime;
}s[20];
int main()
{   
    int i,f1,s1,t1=0,t2=60;
    printf("*****---Welcome Sudesh Sharma---*****\n");
	printf("Enter the number of teacher requested for query:\n");  	
	scanf("%d",&fnum);
	for(i=1;i<=fnum;i++)
	{
		printf("Enter name of faculty%d: ",i);
		scanf("%s",&f[i].fname);
		printf("Enter time for faculty %d: ",i);		
		scanf("%d",&f[i].ftime);
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Number of Students requested for queries: ");  	
	scanf("%d",&snum);
	for(i=1;i<=snum;i++)
	{
		printf("Enter name of student%d: ",i);
		scanf("%s",&s[i].sname);
		printf("Enter time for Student %d: ",i);		
		scanf("%d",&s[i].stime);
		printf("\n");
	}
	
	f1=60/fnum;
	s1=60/snum;
	
	printf("\n");
	for(i=1;i<=fnum;i++)
	{  
		if(f[i].ftime<f1)
		{
			t1=t1+f[i].ftime;
			printf("\n Name of faculty and time for which they have requested : %s for %d minutes ",f[i].fname,f[i].ftime);	
			
		}
		else if(f[i].ftime=f1)
		{
			t1=t1+f1;
			printf("\n Name of faculty and time for which they have requested : %s for %d minutes ",f[i].fname,f[i].ftime);	
					}
		else
		{
			t1=t1+f1;
			printf("\n The query is not received for faculty name : %s ",f[i].fname);	
		}
	}
	printf("\n");
	for(i=1;i<=snum;i++)
	{
		if(s[i].stime<s1)
		{
			t2+=s[i].stime;
			printf("\n The query is received for Student name :%s for %d minutes ",s[i].sname,s[i].stime);	//it shows that message has received
			
		}
		else if(s[i].stime=s1)
		{
			t2+=s1;
			printf("\n The query is received for Student name :%s for %d minutes ",s[i].sname,s[i].stime); //it shows that message has received
		}
		else
		{
			t2+=s1;
			printf("\n The query is not received for Student name :%s ",s[i].sname); //it shows that message has not received
		}
	}
	
    int	total=t1+t2-60;			
	int avg=total/(fnum+snum);	
	printf("\n\nTotal time for query= %d ",total); 	
	printf("\nAverage time for query = %d ",avg);
			
}
