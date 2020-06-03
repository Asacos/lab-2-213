#include <iostream>
#include <cstring>
#include "car.h"
#include "func.h"

int main()
{
    using namespace std;
    car c[10];
    int n[10];
    for (int i=0; i<10; i++)
        n[i]=0;
    int l=0;
    while (l==0)
    {
        int ch;
        cout<<"Select what to do:\n 1. Show\n 2. Change\n 3. Delete\n 4. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<" 1. Show car\n 2. Show all"<<endl;
            int ch_sh;
            cin>>ch_sh;
            switch (ch_sh)
            {
            case 1:
                int num_sh;
                cout<<"  What number of car do you want to see? (1-10)"<<endl;
                cin>>num_sh;
                if ((num_sh>=1)&&(num_sh<=10))
                    n[num_sh-1]=_show(n[num_sh-1], &c[num_sh-1], num_sh);
                break;
            case 2:
                int j;
                for (j=0; j<10; j++)
                    {
                        n[j]=_show(n[j], &c[j], j);
                    }
                break;
            default:
                break;
            }
                continue;
        case 2:
            cout<<" 1. Change model\n 2. Change order"<<endl;
            int ch_ch;
            cin>>ch_ch;
            switch (ch_ch)
            {
            case 1:
                cout<<"  What model do you want to change? (1-10)"<<endl;
                int num_ch;
                cin>>num_ch;
                if ((num_ch>=1)&&(num_ch<=10))
                    _change(&c[num_ch-1], num_ch-1);
                break;
            case 2:
                cout<<"  What model number do you want to change?"<<endl;
                int num_ord_ch;
                cin>>num_ord_ch;
                cout<<"  Would you like to increase or decrease model order?\n   1. Upper\n   2. Lower"<<endl;
                int do_ord_ch;
                cin>>do_ord_ch;
                switch (do_ord_ch)
                {
                case 1:
                    if ((num_ord_ch>=1)&&(num_ord_ch<=9))
                        {
                            ++c[num_ord_ch-1];
                            --c[num_ord_ch];
                        }
                    break;
                case 2:
                    if ((num_ord_ch>=2)&&(num_ord_ch<=10))
                        {
                            --c[num_ord_ch-1];
                            ++c[num_ord_ch-2];
                        }
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            continue;
        case 3:
            cout<<" 1. Delete model\n 2. Delete all"<<endl;
            int ch_del;
            cin>>ch_del;
            switch (ch_del)
            {
            case 1:
                cout<<"  What model do you want to delete? (1-10)"<<endl;
                int num_del;
                cin>>num_del;
                if ((num_del>=1)&&(num_del<=10))
                    {
                        n[num_del-1]=0;
                        n[num_del-1]=_show(n[num_del-1], &c[num_del-1], num_del-1);
                    }
                break;
            case 2:
                int k;
                for (k=0; k<10; k++)
                {
                    n[k]=0;
                    n[k]=_show(n[k], &c[k], k);
                }
                break;
            default:
                break;
            }
            continue;
        case 4:
            l=1;
            break;
        default:
            continue;
        }
    }
    return 0;
}
