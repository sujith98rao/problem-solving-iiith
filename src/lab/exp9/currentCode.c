	
		#include<stdio.h>
int N;
int no_ways(int index,int index_needed_achieved,int *weights,int curr_sum){

if(index==N)
		return weights[index_needed_achieved]==curr_sum;

if(index==index_needed_achieved)
		return no_ways(index+1,index_needed_achieved,weights,curr_sum);

int a=no_ways(index+1,index_needed_achieved,weights,curr_sum+weights[index]);
int b=no_ways(index+1,index_needed_achieved,weights,curr_sum);
return a+b;

}
main(){
int i;
scanf("%d",&N);
int weights[N];
for(i=0;i< N;i++)
	scanf("%d",weights+i);
int ans=0;
for(i=0;i< N;i++)
	ans+=no_ways(0,i,weights,0);
printf("%d\n",ans);
return 0;
}
	