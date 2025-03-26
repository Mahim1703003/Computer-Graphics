#include<iostream>

using namespace std;


void Bresenham(int x1, int y1, int x2, int y2)
{
    int p,diff_x,diff_y;

    diff_x = x2 - x1;// delta x = x2 - x1
    diff_y = y2 - y1; // delta y = y2 - y1

    cout<<"initial Point: ("<<x1<<", "<<y1<<")"<<endl;

    p = 2 * diff_y - diff_x;

    while(x1 != x2 || y1 != y2)
    {
        printf("P_previous: %d, ",p);
        if(p >= 0)
        {
            x1 = x1 + 1;
            y1 = y1 + 1;
            p = p + 2 * diff_y - 2 * diff_x;
        }
        else
        {
            x1 = x1 + 1;
            y1 = y1;
            p = p + 2 * diff_y;
        }

        // printing k, p and (x,y)
        printf("P_next: %d, (X,Y) = (%d,%d)\n",p,x1,y1);

    }
}

int main()
{
    int x1,y1,x2,y2;

    cout<<"X1 = ";
    cin>>x1;

    cout<<"Y1 = ";
    cin>>y1;

    cout<<"X2 = ";
    cin>>x2;

    cout<<"Y2 = ";
    cin>>y2;

    Bresenham(x1,y1,x2,y2);

    return 0;
}
