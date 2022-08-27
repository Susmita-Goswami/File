#include<stdio.h>
int main(void)
{
    FILE *file;
    file=fopen("text,txt","w");
    if(file==NULL)
    {
        printf("file doest exist");

    }
    else
    {
        printf("file is open");
        fclose(file);
    }
    return 0;
}
