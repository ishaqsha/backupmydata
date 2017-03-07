#include<stdio.h>
main()
{
FILE *fp,*fp1;
int num,ret;
float f;
char str[40];
fp=fopen("file1","r");
//fp1=fope
fp1=fopen("file2","w");
//fp1=fopen("file2","w");
if(fp==NULL)
{
printf("error in opening the file\n");
}
else
{
  
     //while ( (ret=fscanf(fp,"%d%f%s",&num,&f,str)) != 0 && ret != EOF ){
     while ( (ret=fscanf(fp,"%d%f%s",&num,&f,str))!=0 && ret!= EOF ){
	 	printf("ret %d\n",ret);	
		fprintf(fp1,"%d %f  %s",num,f,str);
	} 
	printf("ret %d\n",ret);
       //fread(str,sizeof(str),1,fp);
      //fwrite(str,sizeof(str),1,fp);
}
}

