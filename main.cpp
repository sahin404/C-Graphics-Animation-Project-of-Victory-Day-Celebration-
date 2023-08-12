#include<graphics.h>
#include<conio.h>
#include<dos.h>


void Figure(int x, int y)
{

    setfillstyle(SOLID_FILL,5);
    bar(x,y,x+5,y+280);
    setfillstyle(SOLID_FILL,5);
    bar(x-20,y+280,x+25,y+310);
    setfillstyle(SOLID_FILL,5);
    bar(x-70,y+310,x+85,y+340);
    setcolor(5);
    line(0,390,getmaxx(),390);
    setcolor(8);
    circle(x+2,y-2,5);
    setfillstyle(SOLID_FILL,5);
    floodfill(x+2,y-2,8);


    x=460;
    y=80;
    setcolor(0);
    circle(x+60, y+200, 14); //Head
    circle(x+55, y+197, 2); //eye
    circle(x+66, y+197, 2); //eye
    line(x+59, y+205, x+62,y+205); //mouth
    line(x+60, y+214,x+60,y+264); //neck & body
    line(x+60, y+264, x+45, y+310);//leg
    line(x+60, y+264, x+75, y+310); //leg//man
    line(x+60,y+225, x+42,y+240);
    line(x+60,y+225, x+78,y+240);

    x=380;
    y=80;
    setcolor(0);
    circle(x+60, y+200, 14); //Head
    circle(x+55, y+197, 2); //eye
    circle(x+66, y+197, 2); //eye
    line(x+59, y+205, x+62,y+205); //mouth
    line(x+60, y+214,x+60,y+264); //neck & body
    line(x+60, y+264, x+45, y+310);//leg
    line(x+60, y+264, x+75, y+310); //leg//man

}

void HandPosition4()
{
    int x=380;
    int y=80;
    setcolor(BLACK);
    line(x+60,y+225, x+35,y+215);
    line(x+60,y+225, x+42,y+240);
    line(x+42,y+240, x+30,y+215);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x+28, y+215, 6, 3 );
    fillellipse(x+40, y+215, 6, 3 );
    fillellipse(x+33, y+215, 3, 6 );
}

void StaticBallon()
{

    int x= 460;
    int y=80;
    setcolor(YELLOW);
    line(x+42, y+240, x+40, y+170);
    //ballon
    setcolor(9);
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(x+42, y+170, 10,13);
    setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(x+32, y+163, 10,13);
    setfillstyle(SOLID_FILL,GREEN);
    fillellipse(x+22, y+148, 10,14);
    setfillstyle(SOLID_FILL,RED);
    fillellipse(x+12, y+138, 10,13);
    setfillstyle(SOLID_FILL,BLUE);
    fillellipse(x+42, y+162, 10,13);
    setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(x+42, y+153, 10,14);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(x+42, y+142, 10,13);
    setfillstyle(SOLID_FILL,RED);
    fillellipse(x+42, y+132, 10,13);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(x+37, y+143, 10,13);
    setfillstyle(SOLID_FILL,BLUE);
    fillellipse(x+30, y+128, 10,13);
    setfillstyle(SOLID_FILL,GREEN);
    fillellipse(x+52, y+165, 10,14);
    setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(x+62, y+155, 10,13);
    setfillstyle(SOLID_FILL,RED);
    fillellipse(x+72, y+144, 10,14);
    setfillstyle(SOLID_FILL,GREEN);
    fillellipse(x+60, y+135, 10,14);
}

void StaticFlag()
{
    setfillstyle(SOLID_FILL,GREEN);
    bar(140, 203, 165, 223);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(153,213,5);
    floodfill(153, 213, RED);
    setcolor(YELLOW);
    line(160, 270, 152, 48);
}
void ManIntro(int x,int y)
{

    x=280,y=80;

    for(int j=1; j<=14; j++)
    {
        Figure(150,50);
        StaticFlag();
        StaticBallon();
        HandPosition4();
        if(j%2==0)
        {
            setcolor(0);
            line(x+60,y+225, x+55,y+240); //Hand
            line(x+60,y+225, x+65,y+240); //Hand
            circle(x+60, y+200, 14); //Head
            circle(x+55, y+197, 2); //eye
            circle(x+66, y+197, 2); //eye
            line(x+59, y+205, x+62,y+205); //mouth
            line(x+60, y+214,x+60,y+264); //neck & body
            line(x+60, y+264, x+60, y+310);//leg
            line(x+60, y+264, x+60, y+310); //leg

        }

        else
        {
            setcolor(0);
            line(x+60,y+225, x+42,y+240);//Hand
            line(x+60,y+225, x+78,y+240);//Hand
            circle(x+60, y+200, 14); //Head
            circle(x+55, y+197, 2); //eye
            circle(x+66, y+197, 2); //eye
            line(x+59, y+205, x+62,y+205); //mouth
            line(x+60, y+214,x+60,y+264); //neck & body
            line(x+60, y+264, x+42, y+310);//leg
            line(x+60, y+264, x+76, y+310); //leg
        }

        x=x-7;
        delay(400);
        cleardevice();
    }

}

void man(int x, int y)
{
    //man
    setcolor(0);
    circle(x+60, y+200, 14); //Head
    circle(x+55, y+197, 2); //eye
    circle(x+66, y+197, 2); //eye
    line(x+59, y+205, x+62,y+205); //mouth
    line(x+60, y+214,x+60,y+264); //neck & body
    line(x+60, y+264, x+45, y+310);//leg
    line(x+60, y+264, x+75, y+310); //leg
}

void HandPosition1(int x, int y)
{
    setcolor(0);
    line(x+60,y+230,x+50, y +240);//hand
    line(x+50,y+240,x+30, y +225);
    line(x+60,y+230,x+30, y +220);
    setcolor(YELLOW);
    line(x+32, y+225, x+2, y-2);//tie
}
void HandPosition2(int x, int y)
{
    setcolor(0);
    line(x+60,y+230,x+40, y +245);//hand
    line(x+40,y+245,x+30, y +220);
    line(x+60,y+230,x+30, y +210);
    setcolor(YELLOW);
    line(x+32, y+220, x+2, y-2);//tie
}

void HandPosition3(int x, int y)
{
    setcolor(0);
    line(x+60,y+225, x+42,y+240);
    line(x+60,y+225, x+78,y+240);

}


void Tie(int x, int y)
{

    for(int i=1; i<=23; i++)
    {
        setcolor(15);
        HandPosition4();
        Figure(x,y);
        man(x,y);
        StaticBallon();
        setfillstyle(SOLID_FILL,GREEN);
        bar(x-10, y+(160-i*7), x+15, y+(180-i*7));
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(x+3,y+(170-i*7),5);
        floodfill(x+3, y+(170-i*7), RED);

        if(i%2==0)
        {
            HandPosition1(x,y);
        }
        else
        {
            HandPosition2(x,y);
        }
        delay(500);
        cleardevice();
    }
}


void OpenFlag(int x, int y)
{
    x=150;
    y=50;

    Figure(x,y);
    man(x,y);
    HandPosition3(x,y);
    HandPosition3(380,80);

    /*man(x,y);
    HandPosition3(x,y);
    */
    setfillstyle(SOLID_FILL,GREEN);
    bar(x, y,x+125, y+75);
    setcolor(RED);
    circle(x+63,y+38,23);
    setfillstyle(SOLID_FILL,RED);
    floodfill(x+63,y+37,RED);

}


void DinamicBallon(int x, int y)
{
    //ballon
    x= 460;
    y=80;
    //pigeon1
    int a=380;
    int b=80;
    //text
    int c=150;
    int d=-40;
    //pigeon2
    int e=380;
    int f =80;

    for(int i=1; i<35; i++)
    {

        OpenFlag(150,50);
        if(i%2==0)
        {
            //text
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(c+160, d+140,"50 Years of ");
            setcolor(GREEN);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(c+200, d+180,"Victory!");

            //pigeon1
            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            fillellipse(a+28, b+215, 6, 3 );
            fillellipse(a+40, b+215, 6, 3 );
            fillellipse(a+33, b+215, 3, 6 );

            //pigeon2
            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            fillellipse(e+28, f+215, 6, 3 );
            fillellipse(e+40, f+215, 6, 3 );
            fillellipse(e+33, f+215, 3, 6 );

            setcolor(YELLOW);
            line(x+42, y+240, x+40, y+170);
            //ballon
            setcolor(9);
            setfillstyle(SOLID_FILL, BLUE);
            fillellipse(x+42, y+170, 10,13);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+32, y+163, 10,13);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+22, y+148, 10,14);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+12, y+138, 10,13);
            setfillstyle(SOLID_FILL,BLUE);
            fillellipse(x+42, y+162, 10,13);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+42, y+153, 10,14);
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x+42, y+142, 10,13);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+42, y+132, 10,13);
            setfillstyle(SOLID_FILL,BLACK);
            fillellipse(x+37, y+143, 10,13);
            setfillstyle(SOLID_FILL,BLUE);
            fillellipse(x+30, y+128, 10,13);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+52, y+165, 10,14);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+62, y+155, 10,13);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+72, y+144, 10,14);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+60, y+135, 10,14);
        }

        else
        {
            //text
            setcolor(GREEN);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(c+160, d+140,"50 Years of ");
            setcolor(RED);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(c+200, d+180,"Victory!");

            //pigeon1
            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            fillellipse(a+28, b+215, 4, 3 );
            fillellipse(a+40, b+215, 4, 3 );
            fillellipse(a+35, b+215, 4, 6 );

            //pigeon2
            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            fillellipse(e+28, f+215, 4, 3 );
            fillellipse(e+40, f+215, 4, 3 );
            fillellipse(e+35, f+215, 4, 6 );

            setcolor(YELLOW);
            line(x+42, y+240, x+40, y+170);
            //ballon
            setcolor(9);
            setfillstyle(SOLID_FILL, BLUE);
            fillellipse(x+42, y+170, 10,13);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+32, y+163, 10,13);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+22, y+148, 10,14);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+12, y+138, 10,13);
            setfillstyle(SOLID_FILL,BLUE);
            fillellipse(x+42, y+162, 10,13);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+42, y+153, 10,14);
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x+42, y+142, 10,13);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+42, y+132, 10,13);
            setfillstyle(SOLID_FILL,BLACK);
            fillellipse(x+37, y+143, 10,13);
            setfillstyle(SOLID_FILL,BLUE);
            fillellipse(x+30, y+128, 10,13);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+52, y+165, 10,14);
            setfillstyle(SOLID_FILL,YELLOW);
            fillellipse(x+62, y+155, 10,13);
            setfillstyle(SOLID_FILL,RED);
            fillellipse(x+72, y+144, 10,14);
            setfillstyle(SOLID_FILL,GREEN);
            fillellipse(x+60, y+135, 10,14);
        }
        y=y-8;
        a=a-5;
        b=b-13;
        e=e-15;
        f=f-13;

        delay(400);
        cleardevice();
    }

}


void Text(int x, int y)
{
    int j=0;
    while(!kbhit())
    {
        y=50;
        man(x,y);
        HandPosition3(x,y);
        OpenFlag(x,y);
        if(j%2==0)
        {
            y=-40;
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(x+160, y+140,"50 Years of ");
            setcolor(GREEN);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(x+200, y+180,"Victory!");
        }


        else
        {
            y=-40;
            setcolor(GREEN);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(x+160, y+140,"50 Years of ");
            setcolor(RED);
            settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
            outtextxy(x+200, y+180,"Victory!");
        }

        delay(1000);
        cleardevice();
        j++;
    }
}


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, " ");
    int x =150, y=50;
    setbkcolor(9);
    Figure(x,y);
    ManIntro(x,y);
    Tie(x,y);
    OpenFlag(x,y);
    DinamicBallon(x,y);
    Text(x,y);

    getch();
    closegraph();
}
