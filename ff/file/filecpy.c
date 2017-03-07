#include<stdio.h>
main()
{
            FILE *fp,*fp1;
            char ch;
            char str[100];
            fp=fopen("myfile1","r");
            fp1=fopen("myfile2","w");
            /*if(fp==NULL)
            {
                printf("file doesnot exist\n");
            }
            else
            {
                printf("enter teh char\n");

                do
                {
//printf("enter teh char");
                     ch=getchar();
                     if(ch!='\n')
                     {
                     fputc(ch,fp);
                     }
                    else
                         break;
                 }while(ch!=EOF);
            }
fclose(fp)*/;
fp=fopen("myfile1","r");
                 if(fp==NULL)
                 {
                    printf("error we are getting\n");
                 }
                 else
                 {
                      //do
                       // {
                           // ch=fgetc(fp);
                            while(fgets(str,sizeof(str),fp))
                            {
                                    fputs(str,fp1);
                             }
                           //  else
                             //   break;
                       //}while(ch!=EOF);
                }
fclose(fp);
fclose(fp1);
/*fp1=fopen("myfile2","r");
if(fp1==NULL)
{
printf("file opening in exist\n");
}
else
{
do
{
ch=fgetc(fp1);
if(ch!=EOF)
{
printf("%c ",ch);
 }
else
 break;
}while(ch!=EOF);
}*/
}


	
