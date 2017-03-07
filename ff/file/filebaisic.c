	#include<stdio.h>
main()
{
       FILE *fp;
        char ch;
         /*fp=fopen("myfile","w");
           if(fp==NULL)
           {
              printf("file doesnot exist");
           } 
            else
             {
                   printf("enter the cha\n");
                 do{
                      // printf("enter the char\n");
                               ch=getchar();
                                 if(ch!=EOF)
                                  {
                                    fputc(ch,fp);
                                   }
                                   else
                                   break;
                     }while(ch!='\n');
            }
    fclose(fp);*/
    //rewind(fp);
    fp=fopen("myfile2","r");
   if(fp==NULL)
   {
     printf("file not exist\n");
   }
else
{
    do 
      {
        ch=fgetc(fp);
        printf("%c ",ch);
    }while(ch!=EOF);
}
}
