#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[10],b[10],t[10],w[10],g[10],i,m;
	float att=0,awt=0;
	//g[0]=0;
	clrscr();
	    for(i=0;i<10;i++)
	    {
			a[i]=0; b[i]=0; w[i]=0; g[i]=0;
	    }
	printf("enter the number of process");
	    scanf("%d",&n);

	printf("enter the burst times \n");
	    for(i=0;i<n;i++)
			scanf("%d",&b[i]);

	printf("\nenter the arrival times\n");
	    for(i=0;i<n;i++)
			scanf("%d",&a[i]);


	    for(i=0;i<10;i++)
			g[i+1]=g[i]+b[i];

	     for(i=0;i<n;i++)
	    {
		w[i]=g[i]-a[i];
			t[i]=g[i+1]-a[i];
			awt=awt+w[i];
			att=att+t[i];
	    }
	    awt =awt/n;
	    att=att/n;
	    printf("\n\tprocess\tburst time\twaiting time\tturn arround time\n");
	    for(i=0;i<n;i++)
	    {
			printf("\t%d\t\t%d\t\t%d\t\t%d\n",i,b[i],w[i],t[i]);
	    }
	printf("the average waiting time is %f\n",awt);
	printf("the average turn around time is %f\n",att);
}


/*enter the number of process3
enter the burst times                                                           
24                                                                              
5                                                                               
7                                                                               
                                                                                
enter the arrival times                                                         
0                                                                               
1                                                                               
1                                                                               
                                                                                
        process burst time      waiting time    turn arround time               
        0               24              0               24                      
        1               5               23              28                      
        2               7               28              35                      
the average waiting time is 17.000000                                           
the average turn around time is 29.000000                                       
                                                                                
  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





