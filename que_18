#include<stdio.h>
int n;
struct process
{

	int p_no;
	
	int arrival_time,burst_time,ct,wait_t,turn_around,p;
	
	int flag;
	 }p_list[100];
	 void Sorting()
	 {
	struct process p;
	
	int i, j;
	
	for(i=0;i<n-1;i++)
	
	{

	for(j=i+1;j<n;j++)
	
	{
	
	if(p_list[i].arrival_time > p_list[j].arrival_time)
	
	{
	
	p = p_list[i];
	
	p_list[i] = p_list[j];
	
	p_list[j] = p;
	
	}
	
	}
	
	}
	 }
