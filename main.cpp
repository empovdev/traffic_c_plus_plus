#include<iostream>
#include<graphics.h>
int main()
{


		initwindow(900, 800);

		rectangle(250, 50, 350, 350);

		circle(300, 100, 50);
		circle(300, 200, 50);
		circle(300, 300, 50);

		//creating animation
		for(int i =0; i < 999999999; i++){

			setfillstyle(1, RED);
			floodfill(300, 100, WHITE);
			outtextxy(280, 100, "STOP");
			delay(2500);

            setfillstyle(1, BLACK);
			floodfill(300, 100, WHITE);

			setfillstyle(1, GREEN);
			floodfill(300, 200, WHITE);
			outtextxy(280, 200, "GO");
			delay(2500);

            setfillstyle(1, BLACK);
			floodfill(300, 200, WHITE);

			setfillstyle(1, YELLOW);
			floodfill(300, 300, WHITE);
			outtextxy(280, 300, "HOLD");
			delay(2500);

            setfillstyle(1, BLACK);
			floodfill(300, 300, WHITE);



		}

		getch();
		closegraph();



}
