#include "raylib.h"
#include <stdio.h>
#include <math.h>

int main() {
    InitWindow(800, 600, "Burn Your Eyes XD");

    SetTargetFPS(60);

    int pos1X, pos1Y, pos2X, pos2Y, pos3X, pos3Y;
    int Red, Gre, Blu, Alp;
    int Red2, Gre2, Blu2, Alp2;

    Red = 50;
    Gre = 50;
    Blu = 50;
    Alp = 100;

    Red2 = 51;
    Gre2 = 50;
    Blu2 = 50;
    Alp2 = 100;

    pos1X = 40;
    pos1Y = 10;

    pos2X = 30;
    pos2Y = 30;

    pos3X = 50;
    pos3Y = 30;

    int speed  = 3;
    int colorspeed1 = 5;
    int colorspeed2 = 3;
    int colorspeed3 = 7;
    int colorspeed4 = 9;

    while(WindowShouldClose() == false)
    {
        //1. Logic stage
        if (Red < 0)
            Red = 255;
        if (Blu < 0)
            Blu = 255;
        if (Gre < 0)
            Gre = 255;
        if (Alp < 0)
            Alp = 100;

        if (Red > 255)
            Red = 0;
        if (Blu > 255)
            Blu = 0;
        if (Gre > 255)
            Gre = 0;
        if (Alp > 100)
            Alp = 0;

        if (Red2 < 0)
            Red2 = 255;
        if (Blu2 < 0)
            Blu2 = 255;
        if (Gre2 < 0)
            Gre2 = 255;
        if (Alp2 < 0)
            Alp2 = 100;

        if (Red2 > 255)
            Red2 = 0;
        if (Blu2 > 255)
            Blu2 = 0;
        if (Gre2 > 255)
            Gre2 = 0;
        if (Alp2 > 100)
            Alp2 = 0;

        Color TriangleColor = {Red, Gre, Blu, 100};
        Color BackColor = {Red2, Gre2, Blu2, 100};

        if (!(Red == Red2  && Gre == Gre2 && Blu == Blu2 && Alp == Alp2))
        {
            if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W))
            {
                // move in a good side (UP)
                pos1Y -= speed;
                pos2Y -= speed;
                pos3Y -= speed;
                // change the triangle color by colorspeed1 (RED)
                Red += colorspeed1;
                //  change the triangle color by colorspeed2 (OTHERS)
                Gre -= colorspeed2;
                Blu -= colorspeed2;
                Alp -= colorspeed2;

                // change the back color by colorspeed3 (RED)
                Red2 += colorspeed3;
                //  change the back color by colorspeed4 (OTHERS)
                Gre2 -= colorspeed4;
                Blu2 -= colorspeed4;
                Alp2 -= colorspeed4;
                printf("Result KEY UP: csp1:%d csp2:%d csp3:%d csp4:%d \n               Red:%d, Gre:%d, Blu:%d, Alp:%d\n               Red2:%d, Gre2:%d, Blu2:%d, Alp2:%d\n",colorspeed1, colorspeed2, colorspeed3, colorspeed4, Red, Gre, Blu, Alp, Red2, Gre2, Blu2, Alp2);
            }
            if (IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A))
            {
                pos1X -= speed;
                pos2X -= speed;
                pos3X -= speed;
                // change the triangle color by colorspeed1 (Gre)
                Gre += colorspeed1;
                //  change the triangle color by colorspeed2 (OTHERS)
                Red -= colorspeed2;
                Blu -= colorspeed2;
                Alp -= colorspeed2;

                // change the back color by colorspeed3 (Gre)
                Gre2 += colorspeed3;
                //  change the back color by colorspeed4 (OTHERS)
                Red2 -= colorspeed4;
                Blu2 -= colorspeed4;
                Alp2 -= colorspeed4;
                printf("Result KEY UP: csp1:%d csp2:%d csp3:%d csp4:%d \n               Red:%d, Gre:%d, Blu:%d, Alp:%d\n               Red2:%d, Gre2:%d, Blu2:%d, Alp2:%d\n",colorspeed1, colorspeed2, colorspeed3, colorspeed4, Red, Gre, Blu, Alp, Red2, Gre2, Blu2, Alp2);
            }
            if (IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D))
            {
                pos1X += speed;
                pos2X += speed;
                pos3X += speed;
                // change the triangle color by colorspeed1 (Blu)
                Blu += colorspeed1;
                //  change the triangle color by colorspeed2 (OTHERS)
                Gre -= colorspeed2;
                Red -= colorspeed2;
                Alp -= colorspeed2;
                    
                // change the back color by colorspeed3 (Blu2)
                Blu2 += colorspeed3;
                //  change the back color by colorspeed4 (OTHERS)
                Gre2 -= colorspeed4;
                Red2 -= colorspeed4;
                Alp2 -= colorspeed4;
                printf("Result KEY UP: csp1:%d csp2:%d csp3:%d csp4:%d \n               Red:%d, Gre:%d, Blu:%d, Alp:%d\n               Red2:%d, Gre2:%d, Blu2:%d, Alp2:%d\n",colorspeed1, colorspeed2, colorspeed3, colorspeed4, Red, Gre, Blu, Alp, Red2, Gre2, Blu2, Alp2);
            }
            if (IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S))
            {
                pos1Y += speed;
                pos2Y += speed;
                pos3Y += speed;
                // change the triangle color by colorspeed1 (Alp)
                Alp += colorspeed1;
                //  change the triangle color by colorspeed2 (OTHERS)
                Gre -= colorspeed2;
                Blu -= colorspeed2;
                Red -= colorspeed2;
                    
                // change the back color by colorspeed3 (Alp)
                Alp2 += colorspeed3;
                //  change the back color by colorspeed4 (OTHERS)
                Gre2 -= colorspeed4;
                Blu2 -= colorspeed4;
                Red2 -= colorspeed4;
                printf("Result KEY UP: csp1:%d csp2:%d csp3:%d csp4:%d \n               Red:%d, Gre:%d, Blu:%d, Alp:%d\n               Red2:%d, Gre2:%d, Blu2:%d, Alp2:%d\n",colorspeed1, colorspeed2, colorspeed3, colorspeed4, Red, Gre, Blu, Alp, Red2, Gre2, Blu2, Alp2);
            }

        char    TextColors[100];
        sprintf(TextColors, "Colors:\n R:%d G:%d B:%d\n R2:%d G2:%d B2:%d", Red, Gre, Blu, Red2, Gre2, Blu2);

        //2. Drawing
        BeginDrawing();

        ClearBackground(BackColor);

        DrawText(TextColors,  10, 500, 20, BLACK);

        Vector2 pos1 = {pos1X, pos1Y};
        Vector2 pos2 = {pos2X, pos2Y};
        Vector2 pos3 = {pos3X, pos3Y};



        DrawTriangle(pos1, pos2, pos3, TriangleColor);

        EndDrawing();
        }
        else
        {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("WAIT YOU WON??",  250, 500, 20, WHITE);

        EndDrawing();
        }
    }

    CloseWindow();
    return(0);
}