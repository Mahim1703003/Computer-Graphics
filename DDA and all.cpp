#include<iostream>
#include<cmath>

using namespace std;

void DDA_and_all(double x1,double y1, double x2, double y2)
{
    double m, added_value_for_x, added_value_for_y, x_plot, y_plot;

    if(x2 == x1)
    {
        if(y1<=y2)
        {
            added_value_for_x = 0;
            added_value_for_y = 1;
        }
        else
        {
            added_value_for_x = 0;
            added_value_for_y = -1;
        }
    }
    else{
    m = (y2 - y1) / (x2 - x1);
    if(m <= 1)
    {
        if(x1<=x2)
        {
            added_value_for_x = 1;
            added_value_for_y = m;
        }
        else
        {
            added_value_for_x = -1;
            added_value_for_y = -1 * m;
        }
    }
    else if(m > 1)
    {
        if(x1<=x2)
        {
            added_value_for_x = 1 / m;
            added_value_for_y = 1;
        }
        else
        {
            added_value_for_x = -1 / m;
            added_value_for_y = -1;
        }
    }
    /*
    else
    {
        if(y1<=y2)
        {
            added_value_for_x = 0;
            added_value_for_y = 1;
        }
        else
        {
            added_value_for_x = 0;
            added_value_for_y = -1;
        }
    }*/
    }

    x_plot = x1;
    y_plot = y1;

    cout<<"Initial Point: ("<<x_plot<<", "<<y_plot<<")"<<endl;

    while(x_plot!=x2 || y_plot!=y2)
    {
        x1 = x1 + added_value_for_x;
        y1 = y1 + added_value_for_y;

        x_plot = round(x1);
        y_plot = round(y1);

        cout<<"Traversed point: ("<<x_plot<<", "<<y_plot<<")"<<endl;
    }
}

int main()
{
    double x1,y1,x2,y2;

    cout<<"X1 = ";
    cin>>x1;

    cout<<"Y1 = ";
    cin>>y1;

    cout<<"X2 = ";
    cin>>x2;

    cout<<"Y2 = ";
    cin>>y2;

    DDA_and_all(x1,y1,x2,y2);

    return 0;
}
