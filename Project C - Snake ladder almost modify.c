#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
int main ()
{
    int stair[30][60];
    int i,j,o,n=1;

    for(i=0;i<=30;i++)
    {
        for(j=0;j<=60;j++)
        {
            if(j==0 || j==10 || j==20 || j==30 || j==40 || j==50 || j==60)
            {
                printf("|",stair[i][j]);
            }
            else if(i==0 || i==5 || i==10 || i==15 || i==20 || i==25 || i==30)
            {
                printf("-",stair[i][j]);
            }
            else if(i==2 && j==2) printf("S",stair[i][j]); else if(i==4 && j==22) printf("G",stair[i][j]); else if(i==9 && j==52) printf("G",stair[i][j]); else if(i==14 && j==2) printf("G",stair[i][j]); else if(i==14 && j==52) printf("G",stair[i][j]); else if(i==19 && j==12) printf("G",stair[i][j]); else if(i==29 && j==52) printf("G",stair[i][j]);
            else if(i==2 && j==3) printf("T",stair[i][j]); else if(i==4 && j==23) printf("o",stair[i][j]); else if(i==9 && j==53) printf("o",stair[i][j]); else if(i==14 && j==3) printf("o",stair[i][j]); else if(i==14 && j==53) printf("o",stair[i][j]); else if(i==19 && j==13) printf("o",stair[i][j]); else if(i==29 && j==53) printf("o",stair[i][j]);
            else if(i==2 && j==4) printf("A",stair[i][j]); else if(i==4 && j==24) printf("T",stair[i][j]); else if(i==9 && j==54) printf("T",stair[i][j]); else if(i==14 && j==4) printf("T",stair[i][j]); else if(i==14 && j==54) printf("T",stair[i][j]); else if(i==19 && j==14) printf("T",stair[i][j]); else if(i==29 && j==54) printf("T",stair[i][j]);
            else if(i==2 && j==5) printf("R",stair[i][j]); else if(i==4 && j==25) printf("o",stair[i][j]); else if(i==9 && j==55) printf("o",stair[i][j]); else if(i==14 && j==5) printf("o",stair[i][j]); else if(i==14 && j==55) printf("o",stair[i][j]); else if(i==19 && j==15) printf("o",stair[i][j]); else if(i==29 && j==55) printf("o",stair[i][j]);
            else if(i==2 && j==6) printf("T",stair[i][j]); else if(i==4 && j==27) printf("9",stair[i][j]); else if(i==9 && j==56) printf("1",stair[i][j]); else if(i==14 && j==6) printf("1",stair[i][j]); else if(i==14 && j==56) printf("2",stair[i][j]); else if(i==19 && j==16) printf("2",stair[i][j]); else if(i==29 && j==56) printf("3",stair[i][j]);
            else if(i==2 && j==7) printf("!",stair[i][j]); else if(i==9 && j==35) printf("X",stair[i][j]); else if(i==9 && j==57) printf("0",stair[i][j]); else if(i==14 && j==7) printf("1",stair[i][j]); else if(i==14 && j==57) printf("0",stair[i][j]); else if(i==19 && j==17) printf("0",stair[i][j]); else if(i==29 && j==57) printf("5",stair[i][j]);
            else if(i==2 && j==15) printf("2",stair[i][j]); else if(i==14 && j==25) printf("X",stair[i][j]); else if(i==24 && j==25) printf("X",stair[i][j]); else if(i==24 && j==45) printf("X",stair[i][j]);
            else if(i==2 && j==25) printf("3",stair[i][j]);
            else if(i==2 && j==35) printf("4",stair[i][j]);
            else if(i==2 && j==45) printf("5",stair[i][j]);
            else if(i==2 && j==55) printf("6",stair[i][j]);
            else if(i==7 && j==55) printf("7",stair[i][j]);
            else if(i==7 && j==45) printf("8",stair[i][j]);
            else if(i==7 && j==35) printf("9",stair[i][j]);

            else if(i==7 && j==25) printf("0",stair[i][j]); else if(i==7 && j==24) printf("1",stair[i][j]);
            else if(i==7 && j==15) printf("1",stair[i][j]); else if(i==7 && j==14) printf("1",stair[i][j]);
            else if(i==7 && j==5) printf("2",stair[i][j]);  else if(i==7 && j==4) printf("1",stair[i][j]);

            else if(i==12 && j==5) printf("3",stair[i][j]);  else if(i==12 && j==4) printf("1",stair[i][j]);
            else if(i==12 && j==15) printf("4",stair[i][j]); else if(i==12 && j==14) printf("1",stair[i][j]);
            else if(i==12 && j==25) printf("5",stair[i][j]); else if(i==12 && j==24) printf("1",stair[i][j]);
            else if(i==12 && j==35) printf("6",stair[i][j]); else if(i==12 && j==34) printf("1",stair[i][j]);
            else if(i==12 && j==45) printf("7",stair[i][j]); else if(i==12 && j==44) printf("1",stair[i][j]);
            else if(i==12 && j==55) printf("8",stair[i][j]); else if(i==12 && j==54) printf("1",stair[i][j]);

            else if(i==17 && j==55) printf("9",stair[i][j]); else if(i==17 && j==54) printf("1",stair[i][j]);
            else if(i==17 && j==45) printf("0",stair[i][j]); else if(i==17 && j==44) printf("2",stair[i][j]);
            else if(i==17 && j==35) printf("1",stair[i][j]); else if(i==17 && j==34) printf("2",stair[i][j]);
            else if(i==17 && j==25) printf("2",stair[i][j]); else if(i==17 && j==24) printf("2",stair[i][j]);
            else if(i==17 && j==15) printf("3",stair[i][j]); else if(i==17 && j==14) printf("2",stair[i][j]);
            else if(i==17 && j==5) printf("4",stair[i][j]);  else if(i==17 && j==4) printf("2",stair[i][j]);

            else if(i==22 && j==5) printf("5",stair[i][j]);  else if(i==22 && j==4) printf("2",stair[i][j]);
            else if(i==22 && j==15) printf("6",stair[i][j]); else if(i==22 && j==14) printf("2",stair[i][j]);
            else if(i==22 && j==25) printf("7",stair[i][j]); else if(i==22 && j==24) printf("2",stair[i][j]);
            else if(i==22 && j==35) printf("8",stair[i][j]); else if(i==22 && j==34) printf("2",stair[i][j]);
            else if(i==22 && j==45) printf("9",stair[i][j]); else if(i==22 && j==44) printf("2",stair[i][j]);
            else if(i==22 && j==55) printf("0",stair[i][j]); else if(i==22 && j==54) printf("3",stair[i][j]);

            else if(i==27 && j==55) printf("1",stair[i][j]); else if(i==27 && j==54) printf("3",stair[i][j]);
            else if(i==27 && j==45) printf("2",stair[i][j]); else if(i==27 && j==44) printf("3",stair[i][j]);
            else if(i==27 && j==35) printf("3",stair[i][j]); else if(i==27 && j==34) printf("3",stair[i][j]);
            else if(i==27 && j==25) printf("4",stair[i][j]); else if(i==27 && j==24) printf("3",stair[i][j]);
            else if(i==27 && j==15) printf("5",stair[i][j]); else if(i==27 && j==14) printf("3",stair[i][j]);

            else if(i==27 && j==2) printf("F",stair[i][j]);
            else if(i==27 && j==3) printf("I",stair[i][j]);
            else if(i==27 && j==4) printf("N",stair[i][j]);
            else if(i==27 && j==5) printf("I",stair[i][j]);
            else if(i==27 && j==6) printf("S",stair[i][j]);
            else if(i==27 && j==7) printf("H",stair[i][j]);
            else if(i==27 && j==8) printf("!",stair[i][j]);

            else
            {
                printf(" ",stair[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    printf("---------WELCOME TO SNAKE LADDER GAME IN C LANGUAGE----------\n");

    struct player
    {
        char p1[30];
        char p2[30];
    };

    struct player play;

    printf("\nPlease enter the player 1 name : ");
    scanf("%s",play.p1);
    printf("\nPlease enter the player 2 name : ");
    scanf("%s",play.p2);

    printf("\nOK,player 1 is %s and player 2 is %s \n",play.p1,play.p2);

    struct stat
    {
        int p1position;
        int p2position;
        int p1spec;
        int p2spec;
    };

    struct stat st;

    int human,dice,turn=1;

    char go1 = 'y';
    char go2 = 'y';
    int accept = 1;

    st.p1position = 1;
    st.p2position = 1;
    do
    {
        for(i=0;i<=30;i++)
        {
            for(j=0;j<=60;j++)
            {
                if(j==0 || j==10 || j==20 || j==30 || j==40 || j==50 || j==60)
                {
                    printf("|",stair[i][j]);
                }
                else if(i==0 || i==5 || i==10 || i==15 || i==20 || i==25 || i==30)
                {
                    printf("-",stair[i][j]);
                }
                else if(i==2 && j==2) printf("S",stair[i][j]); else if(i==4 && j==22) printf("G",stair[i][j]); else if(i==9 && j==52) printf("G",stair[i][j]); else if(i==14 && j==2) printf("G",stair[i][j]); else if(i==14 && j==52) printf("G",stair[i][j]); else if(i==19 && j==12) printf("G",stair[i][j]); else if(i==29 && j==52) printf("G",stair[i][j]);
                else if(i==2 && j==3) printf("T",stair[i][j]); else if(i==4 && j==23) printf("o",stair[i][j]); else if(i==9 && j==53) printf("o",stair[i][j]); else if(i==14 && j==3) printf("o",stair[i][j]); else if(i==14 && j==53) printf("o",stair[i][j]); else if(i==19 && j==13) printf("o",stair[i][j]); else if(i==29 && j==53) printf("o",stair[i][j]);
                else if(i==2 && j==4) printf("A",stair[i][j]); else if(i==4 && j==24) printf("T",stair[i][j]); else if(i==9 && j==54) printf("T",stair[i][j]); else if(i==14 && j==4) printf("T",stair[i][j]); else if(i==14 && j==54) printf("T",stair[i][j]); else if(i==19 && j==14) printf("T",stair[i][j]); else if(i==29 && j==54) printf("T",stair[i][j]);
                else if(i==2 && j==5) printf("R",stair[i][j]); else if(i==4 && j==25) printf("o",stair[i][j]); else if(i==9 && j==55) printf("o",stair[i][j]); else if(i==14 && j==5) printf("o",stair[i][j]); else if(i==14 && j==55) printf("o",stair[i][j]); else if(i==19 && j==15) printf("o",stair[i][j]); else if(i==29 && j==55) printf("o",stair[i][j]);
                else if(i==2 && j==6) printf("T",stair[i][j]); else if(i==4 && j==27) printf("9",stair[i][j]); else if(i==9 && j==56) printf("1",stair[i][j]); else if(i==14 && j==6) printf("1",stair[i][j]); else if(i==14 && j==56) printf("2",stair[i][j]); else if(i==19 && j==16) printf("2",stair[i][j]); else if(i==29 && j==56) printf("3",stair[i][j]);
                else if(i==2 && j==7) printf("!",stair[i][j]); else if(i==9 && j==35) printf("X",stair[i][j]); else if(i==9 && j==57) printf("0",stair[i][j]); else if(i==14 && j==7) printf("1",stair[i][j]); else if(i==14 && j==57) printf("0",stair[i][j]); else if(i==19 && j==17) printf("0",stair[i][j]); else if(i==29 && j==57) printf("5",stair[i][j]);
                else if(i==2 && j==15) printf("2",stair[i][j]); else if(i==14 && j==25) printf("X",stair[i][j]); else if(i==24 && j==25) printf("X",stair[i][j]); else if(i==24 && j==45) printf("X",stair[i][j]);
                else if(i==2 && j==25) printf("3",stair[i][j]);
                else if(i==2 && j==35) printf("4",stair[i][j]);
                else if(i==2 && j==45) printf("5",stair[i][j]);
                else if(i==2 && j==55) printf("6",stair[i][j]);
                else if(i==7 && j==55) printf("7",stair[i][j]);
                else if(i==7 && j==45) printf("8",stair[i][j]);
                else if(i==7 && j==35) printf("9",stair[i][j]);

                else if(i==7 && j==25) printf("0",stair[i][j]); else if(i==7 && j==24) printf("1",stair[i][j]);
                else if(i==7 && j==15) printf("1",stair[i][j]); else if(i==7 && j==14) printf("1",stair[i][j]);
                else if(i==7 && j==5) printf("2",stair[i][j]);  else if(i==7 && j==4) printf("1",stair[i][j]);

                else if(i==12 && j==5) printf("3",stair[i][j]);  else if(i==12 && j==4) printf("1",stair[i][j]);
                else if(i==12 && j==15) printf("4",stair[i][j]); else if(i==12 && j==14) printf("1",stair[i][j]);
                else if(i==12 && j==25) printf("5",stair[i][j]); else if(i==12 && j==24) printf("1",stair[i][j]);
                else if(i==12 && j==35) printf("6",stair[i][j]); else if(i==12 && j==34) printf("1",stair[i][j]);
                else if(i==12 && j==45) printf("7",stair[i][j]); else if(i==12 && j==44) printf("1",stair[i][j]);
                else if(i==12 && j==55) printf("8",stair[i][j]); else if(i==12 && j==54) printf("1",stair[i][j]);

                else if(i==17 && j==55) printf("9",stair[i][j]); else if(i==17 && j==54) printf("1",stair[i][j]);
                else if(i==17 && j==45) printf("0",stair[i][j]); else if(i==17 && j==44) printf("2",stair[i][j]);
                else if(i==17 && j==35) printf("1",stair[i][j]); else if(i==17 && j==34) printf("2",stair[i][j]);
                else if(i==17 && j==25) printf("2",stair[i][j]); else if(i==17 && j==24) printf("2",stair[i][j]);
                else if(i==17 && j==15) printf("3",stair[i][j]); else if(i==17 && j==14) printf("2",stair[i][j]);
                else if(i==17 && j==5) printf("4",stair[i][j]);  else if(i==17 && j==4) printf("2",stair[i][j]);

                else if(i==22 && j==5) printf("5",stair[i][j]);  else if(i==22 && j==4) printf("2",stair[i][j]);
                else if(i==22 && j==15) printf("6",stair[i][j]); else if(i==22 && j==14) printf("2",stair[i][j]);
                else if(i==22 && j==25) printf("7",stair[i][j]); else if(i==22 && j==24) printf("2",stair[i][j]);
                else if(i==22 && j==35) printf("8",stair[i][j]); else if(i==22 && j==34) printf("2",stair[i][j]);
                else if(i==22 && j==45) printf("9",stair[i][j]); else if(i==22 && j==44) printf("2",stair[i][j]);
                else if(i==22 && j==55) printf("0",stair[i][j]); else if(i==22 && j==54) printf("3",stair[i][j]);

                else if(i==27 && j==55) printf("1",stair[i][j]); else if(i==27 && j==54) printf("3",stair[i][j]);
                else if(i==27 && j==45) printf("2",stair[i][j]); else if(i==27 && j==44) printf("3",stair[i][j]);
                else if(i==27 && j==35) printf("3",stair[i][j]); else if(i==27 && j==34) printf("3",stair[i][j]);
                else if(i==27 && j==25) printf("4",stair[i][j]); else if(i==27 && j==24) printf("3",stair[i][j]);
                else if(i==27 && j==15) printf("5",stair[i][j]); else if(i==27 && j==14) printf("3",stair[i][j]);

                else if(i==27 && j==2) printf("F",stair[i][j]);
                else if(i==27 && j==3) printf("I",stair[i][j]);
                else if(i==27 && j==4) printf("N",stair[i][j]);
                else if(i==27 && j==5) printf("I",stair[i][j]);
                else if(i==27 && j==6) printf("S",stair[i][j]);
                else if(i==27 && j==7) printf("H",stair[i][j]);
                else if(i==27 && j==8) printf("!",stair[i][j]);

                else if(i==1 && j==1 && st.p1position==1) printf("1",stair[i][j]);
                else if(i==1 && j==11 && st.p1position==2) printf("1",stair[i][j]);
                else if(i==1 && j==21 && st.p1position==3) printf("1",stair[i][j]);
                else if(i==1 && j==31 && st.p1position==4) printf("1",stair[i][j]);
                else if(i==1 && j==41 && st.p1position==5) printf("1",stair[i][j]);
                else if(i==1 && j==51 && st.p1position==6) printf("1",stair[i][j]);

                else if(i==6 && j==1 && st.p1position==12) printf("1",stair[i][j]);
                else if(i==6 && j==11 && st.p1position==11) printf("1",stair[i][j]);
                else if(i==6 && j==21 && st.p1position==10) printf("1",stair[i][j]);
                else if(i==6 && j==31 && st.p1position==9) printf("1",stair[i][j]);
                else if(i==6 && j==41 && st.p1position==8) printf("1",stair[i][j]);
                else if(i==6 && j==51 && st.p1position==7) printf("1",stair[i][j]);

                else if(i==11 && j==1 && st.p1position==13) printf("1",stair[i][j]);
                else if(i==11 && j==11 && st.p1position==14) printf("1",stair[i][j]);
                else if(i==11 && j==21 && st.p1position==15) printf("1",stair[i][j]);
                else if(i==11 && j==31 && st.p1position==16) printf("1",stair[i][j]);
                else if(i==11 && j==41 && st.p1position==17) printf("1",stair[i][j]);
                else if(i==11 && j==51 && st.p1position==18) printf("1",stair[i][j]);

                else if(i==16 && j==1 && st.p1position==24) printf("1",stair[i][j]);
                else if(i==16 && j==11 && st.p1position==23) printf("1",stair[i][j]);
                else if(i==16 && j==21 && st.p1position==22) printf("1",stair[i][j]);
                else if(i==16 && j==31 && st.p1position==21) printf("1",stair[i][j]);
                else if(i==16 && j==41 && st.p1position==20) printf("1",stair[i][j]);
                else if(i==16 && j==51 && st.p1position==19) printf("1",stair[i][j]);

                else if(i==21 && j==1 && st.p1position==25) printf("1",stair[i][j]);
                else if(i==21 && j==11 && st.p1position==26) printf("1",stair[i][j]);
                else if(i==21 && j==21 && st.p1position==27) printf("1",stair[i][j]);
                else if(i==21 && j==31 && st.p1position==28) printf("1",stair[i][j]);
                else if(i==21 && j==41 && st.p1position==29) printf("1",stair[i][j]);
                else if(i==21 && j==51 && st.p1position==30) printf("1",stair[i][j]);

                else if(i==26 && j==1 && st.p1position==36) printf("1",stair[i][j]);
                else if(i==26 && j==11 && st.p1position==35) printf("1",stair[i][j]);
                else if(i==26 && j==21 && st.p1position==34) printf("1",stair[i][j]);
                else if(i==26 && j==31 && st.p1position==33) printf("1",stair[i][j]);
                else if(i==26 && j==41 && st.p1position==32) printf("1",stair[i][j]);
                else if(i==26 && j==51 && st.p1position==31) printf("1",stair[i][j]);

                else if(i==1 && j==9 && st.p2position==1) printf("2",stair[i][j]);
                else if(i==1 && j==19 && st.p2position==2) printf("2",stair[i][j]);
                else if(i==1 && j==29 && st.p2position==3) printf("2",stair[i][j]);
                else if(i==1 && j==39 && st.p2position==4) printf("2",stair[i][j]);
                else if(i==1 && j==49 && st.p2position==5) printf("2",stair[i][j]);
                else if(i==1 && j==59 && st.p2position==6) printf("2",stair[i][j]);

                else if(i==6 && j==9 && st.p2position==12) printf("2",stair[i][j]);
                else if(i==6 && j==19 && st.p2position==11) printf("2",stair[i][j]);
                else if(i==6 && j==29 && st.p2position==10) printf("2",stair[i][j]);
                else if(i==6 && j==39 && st.p2position==9) printf("2",stair[i][j]);
                else if(i==6 && j==49 && st.p2position==8) printf("2",stair[i][j]);
                else if(i==6 && j==59 && st.p2position==7) printf("2",stair[i][j]);

                else if(i==11 && j==9 && st.p2position==13) printf("2",stair[i][j]);
                else if(i==11 && j==19 && st.p2position==14) printf("2",stair[i][j]);
                else if(i==11 && j==29 && st.p2position==15) printf("2",stair[i][j]);
                else if(i==11 && j==39 && st.p2position==16) printf("2",stair[i][j]);
                else if(i==11 && j==49 && st.p2position==17) printf("2",stair[i][j]);
                else if(i==11 && j==59 && st.p2position==18) printf("2",stair[i][j]);

                else if(i==16 && j==9 && st.p2position==24) printf("2",stair[i][j]);
                else if(i==16 && j==19 && st.p2position==23) printf("2",stair[i][j]);
                else if(i==16 && j==29 && st.p2position==22) printf("2",stair[i][j]);
                else if(i==16 && j==39 && st.p2position==21) printf("2",stair[i][j]);
                else if(i==16 && j==49 && st.p2position==20) printf("2",stair[i][j]);
                else if(i==16 && j==59 && st.p2position==19) printf("2",stair[i][j]);

                else if(i==21 && j==9 && st.p2position==25) printf("2",stair[i][j]);
                else if(i==21 && j==19 && st.p2position==26) printf("2",stair[i][j]);
                else if(i==21 && j==29 && st.p2position==27) printf("2",stair[i][j]);
                else if(i==21 && j==39 && st.p2position==28) printf("2",stair[i][j]);
                else if(i==21 && j==49 && st.p2position==29) printf("2",stair[i][j]);
                else if(i==21 && j==59 && st.p2position==30) printf("2",stair[i][j]);

                else if(i==26 && j==9 && st.p2position==36) printf("2",stair[i][j]);
                else if(i==26 && j==19 && st.p2position==35) printf("2",stair[i][j]);
                else if(i==26 && j==29 && st.p2position==34) printf("2",stair[i][j]);
                else if(i==26 && j==39 && st.p2position==33) printf("2",stair[i][j]);
                else if(i==26 && j==49 && st.p2position==32) printf("2",stair[i][j]);
                else if(i==26 && j==59 && st.p2position==31) printf("2",stair[i][j]);

                else
                {
                    printf(" ",stair[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n\n");

        srand(time(NULL));
        dice = 1+rand()%6;

        if(st.p1position==36 || st.p2position==36)
        {
            accept = accept + 1;
            if(st.p1position==36)
            {
                printf("\n%s WIN THIS MATCH!!!\n",play.p1);
            }
            else
            {
                printf("\n%s WIN THIS MATCH!!!\n",play.p2);
            }
        }
        else
        {
            printf("\nYou are ('1(player 1)/2(player 2)') : "); fflush(stdin);
            scanf("%d",&human);
            if(human==1)
            {
                if(go1=='n')
                {
                    printf("\nYou got stop!!!\n");
                    go1 = 'y';
                }
                else
                {
                    printf("\n%s rolls the dice and got %d point(s)\n",play.p1,dice);
                    st.p1position = st.p1position + dice;

                    if(st.p1position==3)
                    {
                        go1 = 'n';
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position + 6;
                        st.p1spec = st.p1spec + 2;
                    }
                    else if(st.p1position==7)
                    {
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position + 3;
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==9)
                    {
                        go1 = 'n';
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==13)
                    {
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position - 2;
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==15)
                    {
                        go1 = 'n';
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==18)
                    {
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position + 2;
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==23)
                    {
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position - 3;
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==27)
                    {
                        go1 = 'n';
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==29)
                    {
                        go1 = 'n';
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position==31)
                    {
                        printf("\n%s got the ladder!!\n",play.p1);
                        st.p1position = st.p1position + 4;
                        st.p1spec = st.p1spec + 1;
                    }
                    else if(st.p1position>36)
                    {
                        st.p1position = 36 - (st.p1position - 36);
                    }
                    printf("\n%s ,your current position is %d\n",play.p1,st.p1position);
                }
                printf("\n\n------------------------TURN %d PASS-------------------------\n\n",turn);
                turn = turn + 1;

            }
            else
            {
                if(go2=='n')
                {
                    printf("\nYou got stop!!!\n");
                    go2 = 'y';

                }
                else
                {
                    printf("\n%s rolls the dice and got %d point(s)\n",play.p2,dice);
                    st.p2position = st.p2position + dice;

                    if(st.p2position==3)
                    {
                        go2 = 'n';
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position + 6;
                        st.p2spec = st.p2spec + 2;
                    }
                    else if(st.p2position==7)
                    {
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position + 3;
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==9)
                    {
                        go2 = 'n';
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==13)
                    {
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position - 2;
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==15)
                    {
                        go2 = 'n';
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==18)
                    {
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position + 2;
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==23)
                    {
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position - 3;
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==27)
                    {
                        go2 = 'n';
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==29)
                    {
                        go2 = 'n';
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position==31)
                    {
                        printf("\n%s got the ladder!!\n",play.p2);
                        st.p2position = st.p2position + 4;
                        st.p2spec = st.p2spec + 1;
                    }
                    else if(st.p2position>36)
                    {
                        st.p2position = 36 - (st.p2position - 36);
                    }
                    printf("\n%s ,your current position is %d\n",play.p2,st.p2position);
                }

                printf("\n\n------------------------TURN %d PASS-------------------------\n\n",turn);
                turn = turn + 1;
            }
        }
    }
    while(accept==1);

    turn = turn - 1;

    FILE *fptr;
    char fname[30];
    printf("\nPlease enter game static file name : ");
    scanf("%s",fname); fflush(stdin);
    if((fptr=fopen(fname,"w+")) == NULL)
    {
        printf("ERROR");
        exit(1);
    }

    fprintf(fptr,"Player 1 name : %s\n",play.p1);
    fprintf(fptr,"\n%s got special position : %d time(s)\n",play.p1,st.p1spec);

    fprintf(fptr,"\nPlayer 2 name : %s\n",play.p2);
    fprintf(fptr,"\n%s got special position : %d time(s)\n",play.p2,st.p2spec);

    fprintf(fptr,"\nTurn use to play : %d\n",turn);

    if(st.p1position==36)
    {
        fprintf(fptr,"\n%s WIN THIS MATCH!!!\n",play.p1);
    }
    else
    {
        fprintf(fptr,"\n%s WIN THIS MATCH!!!\n",play.p2);
    }

}
