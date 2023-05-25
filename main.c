#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a=0;
    int sayi;
    int gecmenotu;
    float average;
    float total=0;


    printf("\n Enter the pass note:");
    scanf("%d",&gecmenotu);

    printf("\n Enter the number of students: ");
    scanf("%d", &n);

     for (int i=1;i<=n;i++)
     {
          printf("\n Enter the %d. student's grade: ",i);
          scanf("%d",&sayi);

          total = total + sayi;
          if (gecmenotu>sayi)
    {
        a++;

    }

     }


        printf("\n Failed students: %d", a);

        average=total/n;
        printf("\n Grade Average: %.3f", average);



        return 0;
}
