#include<stdio.h>
#include<stdlib.h>
struct student
{
	int ID;
	char name[20];
	double score;
	int rank;
};
struct student a[100];
int main()
{
	int i,j,cnt;
	cnt=0;
	i=0;
	FILE*fp;
	fp=fopen("fname.txt","r");
	if(fp==0)
	{
		printf("source file error\n");
		exit(1);
	 }
	 while(fscanf(fp,"%d%s%1f%d",&a[i].ID ,a[i].name ,&a[i].rank,&a[i].score)!=EOF)
	 {
	 	cnt++;
	 	i++;
	 }
	 fclose(fp);
	 for(j=0;j<cnt;j++)
	 {
	 	printf("%s %-8s\t%.2f%6d\n",a[j].ID,a[j].name ,a[j].rank ,a[j].score );
	 	printf("%d",cnt);
	 }
}
