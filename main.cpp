#include <iostream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;


int main()
{
    char p1[]= {'0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','\0'};
    char p2[]= {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','\0'};
    int p3;
    int p4;
    bool ans=false;
    int choice;
    int c1;
    int c2;
    int pc;
    cout<<"\n\n\n\n\nWELCOME TO MY GAME\n";
    cout<<"for single player choose 1 then press enter for multiplayer choose 2 then enter : ";
    cin>>choice;
    while(choice!=1&&choice!=2)
    {
        cout<<"invalid number enter a new one : ";
        cin>>choice;
    }
    if (choice==1)
    {
        while(!ans)
        {
            cout<<"\nplayer one turn\n"<<p1<<"\n choose how many numbers you want : ";
            cin>>c1;
            while(c1!=1 &&c1!=2)
            {
                cout<<"invalid number enter a new one : ";
                cin>>c1;
            }
            if (c1==1)
            {
                cout<<"enter your number : ";


                cin>>p3;
                while(p3<0||p3>19||p1[p3]==p2[p3])
                {
                    cout<<"invalid number,enter a new one : ";
                    cin>>p3;
                }
                p1[p3]=p2[p3];
            }
            if(c1==2)
            {
                cout<<"choose your numbers : ";
                cin>>p3>>p4;
                while((p3!=p4+1 &&p3!=p4-1)||p3<0||p3>19||p4<0||p4>19||p1[p3]==p2[p3]||p1[p4]==p2[p4])
                {
                    cout<<"invalid number, enter 2 new adjacent ones : ";
                    cin>>p3>>p4;
                }
                p1[p3]=p2[p3];
                p1[p4]=p2[p4];
            }
            for(int i=0; i<1; i++)
            {
                int counter1=0;
                for (int index=0; index<21; index++)
                {
                    if(p1[index]==p2[index])
                        counter1++;
                    if(counter1==21)
                    {
                        cout<<"first player wins";
                        return 0;
                    }
                }
            }
            cout<<"PC TURN!!!\n";
            pc=rand() % 20;
            while(p1[pc]==p2[pc])
                pc=rand() % 20;
            cout<<"pc number = "<<pc<<"\n";
            p1[pc]=p2[pc];
            cout<<p1;
            for(int i=0; i<1; i++)
            {
                int counter1=0;
                for (int index=0; index<21; index++)
                {
                    if(p1[index]==p2[index])
                        counter1++;
                    if(counter1==21)
                    {
                        cout<<"pc wins";
                        return 0;
                    }
                }
            }
        }
    }
    if (choice==2)
    {
        while(!ans)
        {
            cout<<"player one turn\n"<<p1<<"\n choose how many numbers you want : ";
            cin>>c1;
            while(c1!=1 &&c1!=2)
            {
                cout<<"invalid number enter a new one : ";
                cin>>c1;
            }
            if (c1==1)
            {
                cin>>p3;
                while(p3<0||p3>19||p1[p3]==p2[p3])
                {
                    cout<<"invalid number,enter a new one : ";
                    cin>>p3;
                }
                p1[p3]=p2[p3];
            }
            if(c1==2)
            {
                cout<<"choose your numbers : ";
                cin>>p3>>p4;
                while((p3!=p4+1 &&p3!=p4-1)||p3<0||p3>19||p4<0||p4>19||p1[p3]==p2[p3]||p1[p4]==p2[p4])
                {
                    cout<<"invalid number, enter 2 new adjacent ones : ";
                    cin>>p3>>p4;
                }
                p1[p3]=p2[p3];
                p1[p4]=p2[p4];
            }
            for(int i=0; i<1; i++)
            {
                int counter1=0;
                for (int index=0; index<21; index++)
                {
                    if(p1[index]==p2[index])
                        counter1++;
                    if(counter1==21)
                    {
                        cout<<"first player wins";
                        return 0;
                    }
                }
            }
            cout<<"player two turn\n"<<p1<<"\n choose how many numbers you want : ";
            cin>>c2;
            while(c2!=1 &&c2!=2)
            {
                cout<<"invalid number enter a new one : ";
                cin>>c2;
            }
            if (c2==1)
            {
                cin>>p4;
                while(p4<0||p4>19||p1[p4]==p2[p4])
                {
                    cout<<"invalid number,enter a new one : ";
                    cin>>p4;
                }
                p1[p4]=p2[p4];
            }
            if(c1==2)
            {
                cout<<"choose your numbers : ";
                cin>>p3>>p4;
                while((p3!=p4+1 &&p3!=p4-1)||p3<0||p3>19||p4<0||p4>19||p1[p3]==p2[p3]||p1[p4]==p2[p4])
                {
                    cout<<"invalid number, enter 2 new adjacent ones : ";
                    cin>>p3>>p4;

                }
                p1[p3]=p2[p3];
                p1[p4]=p2[p4];
            }
            for(int i=0; i<1; i++)
            {
                int counter2=0;
                for (int index=0; index<21; index++)
                {
                    if(p1[index]==p2[index])
                    {
                        counter2++;
                    }
                    if(counter2==21)
                    {
                        ans=true;
                        cout<<"second player wins";
                    }
                }
            }
        }
    }
}







