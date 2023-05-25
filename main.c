#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    int weight;
    int status;

    printf(" Enter you height as meter:\n");
    scanf(" %f",&height);

    printf(" Enter you weight as kilogram:\n");
    scanf(" %d",&weight);

    status = weight / (height*height);
    printf(" Your body mass index is:",status);

    if(status<18)
    {
        printf(" THIN ");
    }

    else if(status<25)
    {
        printf(" NORMAL");
    }


    else if(status<30)
    {
        printf(" FAT");
    }



    else
    {
        printf(" OBESE");
        return 0;
    }




return 0;

}
