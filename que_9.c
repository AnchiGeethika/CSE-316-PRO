#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()

{
	FILE *text = fopen("./cpu_burst.txt", "r");
  	int burst_time[20],pro[20],wait_time[20],turn_ard_time[20],i=0,j,n=5,total=0,pos,temp;
    float avg_wait_time,avg_turn_ard_time;
  	printf("\nReading the File\n");
    while((getc(text))!=EOF){
		fscanf(text, "%d", &burst_time[i]);
        if(burst_time[i]>0){
        	pro[i]=i+1;
			i++;
		}         
	}
	n=i;
	for(i=0;i<n;i++)

	{
    	pos=i;
    	for(j=i+1;j<n;j++)
    	{
        	if(burst_time[j]<burst_time[pos])
            	pos=j;
    	}
		wait_time[0]=0;            
	for(i=1;i<n;i++)
	{
    	wait_time[i]=0;
    	for(j=0;j<i;j++)
        wait_time[i]+=burst_time[j];
    	total+=wait_time[i];
	}
	avg_wait_time=(float)total/n; 
	total=0;
	printf("\nResults:---------------------\n");
	printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
   	for(i=0;i<n;i++)
   	{
       turn_ard_time[i]=burst_time[i]+wait_time[i];     
       total+=turn_ard_time[i];
       printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",pro[i],burst_time[i],wait_time[i],turn_ard_time[i]);
   	}
   	avg_turn_ard_time=(float)total/n;    
   	printf("\n\nAvg Waiting Time=%f",avg_wait_time);
   	printf("\nAvg Turnaround Time=%f\n",avg_turn_ard_time);
   	fclose(text);
   	return 0;

}

    
    	temp=burst_time[i];
    	burst_time[i]=burst_time[pos];
    	burst_time[pos]=temp;
    	temp=pro[i];
    	pro[i]=pro[pos];
    	pro[pos]=temp;
	}
