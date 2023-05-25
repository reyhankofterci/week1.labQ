
/*0
0
0
00
00
0klþsanmasknSÞD Þ
,Þ<SDVLMSV
ÝÞÝSDKslf
sdlivþlSDVMS
MVSDLÞMVSD
MLÞSDMV
000*/








#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int rolldice1;
    int rolldice2;
    int score1;
    int score2;
    srand(time(NULL));


    printf(" Press 0 to roll the dice\n");
    scanf(" %d",&rolldice1);


    if(rolldice1==0)
    {
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;
        printf(" Your dice numbers are %d and %d",dice1,dice2);

    }

    if(dice1 + dice2 == 7  ||  dice1 + dice2 == 11)
    {
        printf("\n YOU WIN!");
        return 0;
    }

    else if(dice1 + dice2 == 2  ||  dice1 + dice2 == 3  ||  dice1 + dice2 == 12)
    {
        printf("\n YOU LOST!");
        return 0;
    }

    else
    {
        score1 = dice1 + dice2;
        printf("\n Your score is %d", score1);

    }



        printf("\n \n If you roll again and get the same score, you win");
        printf("\n Press 0 to roll the dice again\n");
        scanf("\n %d",&rolldice2);






        dice3 = 1 + rand() %6;
        dice4 = 1 + rand() %6;
        printf("\n Your dice numbers are %d and %d",dice3,dice4);
        score2 = dice3 + dice4;
        printf("\n Your score is %d",score2);


    if(score2 == 7)
    {
        printf("\n YOU LOST!\n");
        return 0;
    }

    else if(score1 == score2)
    {
        printf("\n YOU WIN!");
        return 0;
    }

    else
    {
        printf("\n YOU LOST!");
        return 0;
    }





    return 0;
}
