#include<stdio.h>
//#include<bits/stdc++.h>
int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	fprintf(fp,"hello file by saurabh \n");
	fscanf(fp);
	fclose(fp);
	return 0;
}
