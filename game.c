#include<stdio.h>
#include<math.h>

float absolute(float y)
{
if(y<0)
return(y*-1);
else
return(y);
}

int SC1=0,SC2=0,SC3=0,SC4=0;
result(n,V1,V2,V3,V4)
    {
        float r=0.00;
        int S1=0,S2=0,S3=0,S4=0;
        
        switch(n)
        {
            case 5:
            r=((V1+V2)/2.0)*0.7;

            S1=absolute(r-V1);
            S2=absolute(r-V2);

            if(S1<S2)
            {
                SC1=SC1+1;
                SC2=SC2-1;
                
            }
            else
            if(S2<S1)
            {
                SC2=SC2+1;
                SC1=SC1-1;
            }
            else
            if(S2==S1)
            {
                SC2=SC2+1;
                SC1=SC1+1;
            }
            printf("\n");
                printf("******************************************\n");
                printf("RESULTS\n");
                printf("******************************************\n");
                printf("\n");
                printf("Result Value:%f\n",r);
                printf("Player1 entered %d\n",V1);
                printf("Player2 entered %d\n",V2);
                printf("\n");
                printf("*********************LEADERBOARD*********************\n");
                printf("Player1: %d\n",SC1);
                printf("Player2: %d\n",SC2);
            break;

            case 7:
            r=((V1+V2+V3)/3.0)*0.7;
            
            S1=absolute(r-V1);
            S2=absolute(r-V2);
            S3=absolute(r-V3);


            if(S1<S2&&S1<S3)
            {
                SC1=SC1+1;
                SC2=SC2-1;
                SC3=SC3-1;
                
            }
            else
            if(S2<S1&&S2<S3)
            {
                SC2=SC2+1;
                SC1=SC1-1;
                SC3=SC3-1;
            }
            else
            if(S3<S1&&S3<S2)
            {
                SC3=SC3+1;
                SC2=SC2-1;
                SC1=SC1-1;
            }
            //NO CODE WRITTEN IF ANY 2 BECOMES SAME.

            printf("\n");
                printf("******************************************\n");
                printf("RESULTS\n");
                printf("******************************************\n");
                printf("\n");
                printf("Result Value:%f\n",r);
                printf("Player1 entered %d\n",V1);
                printf("Player2 entered %d\n",V2);
                printf("Player3 entered %d\n",V3);
                printf("\n");
                printf("*********************LEADERBOARD*********************\n");
                printf("Player1: %d\n",SC1);
                printf("Player2: %d\n",SC2);
                printf("Player3: %d\n",SC3);

            S1=absolute(r-V1);
            S2=absolute(r-V2);
            S3=absolute(r-V3);
            S4=absolute(r-V4);


            if(S1<S2&&S1<S3&&S1<S4)
            {
                SC1=SC1+1;
                SC2=SC2-1;
                SC3=SC3-1;
                SC4=SC4-1;
                
            }
            else
            if(S2<S1&&S2<S3&&S2<S4)
            {
                SC2=SC2+1;
                SC1=SC1-1;
                SC3=SC3-1;
                SC4=SC4-1;
            }
            else
            if(S3<S1&&S3<S2&&S3<S4)
            {
                SC3=SC3+1;
                SC2=SC2-1;
                SC1=SC1-1;
                SC4=SC4-1;
            }
            else
            if(S4<S1&&S4<S2&&S4<S3)
            {
                SC3=SC3-1;
                SC2=SC2-1;
                SC1=SC1-1;
                SC4=SC4+1;
            }
            //NO CODE WRITTEN IF ANY 2 BECOMES SAME.
            break;

            case 9:
            r=((V1+V2+V3+V4)/4.0)*0.7;
            return r;
            
            break;

        }
    }


int main()
{
    int n;
    printf("*********************************\n");
    printf("WELCOME TO THE GAME OF FATE!!\n");
    printf("*********************************\n");
    printf("\n");
    printf("RULES\n");
    printf("\n");

    printf("1.2-4 PLAYERS REQIURED TO PLAY THE GAME.\n");
    printf("2.ENTER INTEGER BETWEEN 0-100.\n");
    printf("3.THERE WILL BE TOTAL 5 ROUNDS.\n");
    printf("4.NO POINTS WILL BE AWARDED FOR 2 SAME ENTRIES.\n");
    printf("5.LOSER WILL HAVE TO PURCHASE DOPE.\n");
    printf("*********************************\n");
    printf("\n");

    printf("Enter number of players\n");
    scanf("%d",&n);

    char P1[10];
    char P2[10];
    char P3[10];
    char P4[10];

    float V1,V2,V3,V4;

    switch (n)
    {
    case 1 : printf("Minimum players required are 2\n");
    break;

    case 2 :  
    printf("Player1 name :");
    scanf("%s",&P1);

    printf("Player2 name :");
    scanf("%s",&P2);

    printf("\n");
    printf("*********************************\n");
    printf("Registered players\n");
    printf("*********************************\n");
    printf("\n");

    printf("Player1 : %s\n",P1);
    printf("Player2 : %s\n",P2);

    printf("\n");

    for(int i=0;i<=5;i++)
    {
        printf("\n");
        printf("ROUND %d",i);
        printf("\n");

    printf("Sir %s's turn:  ",P1);
    scanf("%f",&V1);
    for(int j=0;j<100;j++)
    {
        printf("\n");
    }
    printf("Sir %s's turn:  ",P2);
    scanf("%f",&V2);

    for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    float r = result(5,V1,V2,P1,P2);
    }
    if(SC1>SC2)
    {
        printf("\n");
        printf("SADDD,%s will have to buy a Dope!\n",P2);
    }
    else
    if(SC2>SC1)
    {
        printf("\n");
        printf("SADDD,%s will have to buy a Dope!\n",P1);
    }
    else
    if(SC2>SC1)
    {
        printf("\n");
        printf("REMATCH??\n");
    }

    break;

    case 3 :  
    printf("Player1 name :");
    scanf("%s",&P1);

    printf("Player2 name :");
    scanf("%s",&P2);

    printf("Player3 name :");
    scanf("%s",&P3);

    printf("\n");
    printf("*****************************************************************\n");
    printf("Registered players\n");
    printf("*****************************************************************\n");
    printf("\n");

    printf("Player1 : %s\n",P1);
    printf("Player2 : %s\n",P2);
    printf("Player3 : %s\n",P3);

    printf("\n");

    for(int i=0;i<=5;i++)
    {
        printf("\n");
        printf("ROUND %d",i);
        printf("\n");

    printf("Sir %s's turn:  ",P1);
    scanf("%f",&V1);

    for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    printf("Sir %s's turn:  ",P2);
    scanf("%f",&V2);

    for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    printf("Sir %s's turn:  ",P3);
    scanf("%f",&V3);

    for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    float r = result(7,V1,V2,V3,P1,P2,P3);
    }

    break;
    
    case 4 :  
    printf("Player1 name :");
    scanf("%s",&P1);

    printf("Player2 name :");
    scanf("%s",&P2);
    
    printf("Player3 name :");
    scanf("%s",&P3);

    printf("Player4 name :");
    scanf("%s",&P4);

    printf("\n");
    printf("*****************************************************************\n");
    printf("Registered players\n");
    printf("*****************************************************************\n");
    printf("\n");
    
    printf("Player1 : %s\n",P1);
    printf("Player2 : %s\n",P2);
    printf("Player3 : %s\n",P3);
    printf("Player4 : %s\n",P4);

    for(int i=1;i<=5;i++)
    {
        printf("\n");
        printf("ROUND %d",i);
        printf("\n");

    printf("Sir %s's turn",P1);
    scanf("%d",V1);

        for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    printf("Sir %s's turn",P2);
    scanf("%d",V2);

        for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    printf("Sir %s's turn",P3);
    scanf("%d",V3);

        for(int j=0;j<100;j++)
    {
        printf("\n");
    }
    
    printf("Sir %s's turn",P4);
    scanf("%d",V4);

    for(int j=0;j<100;j++)
    {
        printf("\n");
    }

    float r = result(9,V1,V2,V3,V4,P1,P2,P3,P4);
    }

    break;
    
    default: printf("Maximum Players are 4\n");
        break;
    }
    }

