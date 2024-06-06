
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int
            x,
            y,
            screenSize = 15,
            screen = 0,
            cellsLeft = 0,
            totalNeed = 0;

        cin >> x >> y;
        totalNeed = x + (y * 4);
        int ySize = y * 4;
        y = y * 4;

        while (y != 0)
        {
            if (y >= 8)
            {
                screen++;
                cellsLeft = screenSize - 8;
                y -= 8;
            }
            else if (y == 4)
            {
                screen++;
                cellsLeft = screenSize;
                cellsLeft -= 4;
                y -= 4;
            }
        }

        while (x != 0)
        {
            if (x >= 15)
            {
                screen++;
                x -= 15;
            }
            else if (!screen)
            {
                screen++;
                x -= x;
            }
            else
            {
                if (ySize && x > 15)
                {
                    screen++;
                    x -= x;
                }
                else
                {
                    if (x > (screen * 15) - ySize)
                    {
                        screen++;
                        x -= (screen * 15) - ySize;
                    }
                    else
                    {
                        x -= x;
                    }
                }
            }
        }
        cout << screen << endl;
    }
    return 0;
}