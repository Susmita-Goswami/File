#include<stdio.h>
int main(void)
{
    FILE *file;

    char name[20]="Susmita goswami";
    int length=strlen(name);
    int i;
    file=fopen("text,txt","w");
    if(file==NULL)
    {
        printf("file doest exist\n");

    }
    else
    {printf("file is open\n");
        for (i=0; i<length; i++)
        {
            fputc(name[i],file);

        }
        fclose(file);

    }
     return 0;
}
