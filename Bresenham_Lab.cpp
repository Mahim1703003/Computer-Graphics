#include<iostream>

using namespace std;

void Bresenham(int x1, int y1, int x2, int y2)
{
    int delta_x, delta_y, p;

    // Step 1
    delta_x = x2 - x1;
    delta_y = y2 - y1;

    // Step 2
    p = 2 * delta_y - delta_x;

    cout<<"Initial Point: "<<x1<<" "<<y1<<endl;

    // step 3
    while(x1!=x2 || y1!=y2)
    {
        if(p<0)
        {
            x1 = x1 + 1;
            y1 = y1;
            p = p + 2 * delta_y;
        }
        else if(p>=0)
        {
            x1 = x1 + 1;
            y1 = y1 + 1;
            p = p + 2 * delta_y - 2 * delta_x;
        }
        cout<<x1<<" "<<y1<<endl;
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
