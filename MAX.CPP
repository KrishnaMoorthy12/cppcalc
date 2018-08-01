
    #include<iostream.h>
    #include<conio.h>

    void max(int a,int b)
    {
     if (a>b)
      cout<<"\nThe maximum value is..."<<a;
     else
      cout<<"\nThe maximum value is..."<<b;
     return;
    }

    void max(int a,int b, int c)
    {
     if (a>b&&b>c)
      cout<<"\nThe maximum value is..."<<a;
     if (b>a&&b>c)
      cout<<"\nThe maximum value is..."<<b;
     if (c>a&&c>b)
      cout<<"\nThe maximum value is..."<<c;
     return;
    }

    void main()
    {
     int a,b,c,ch=0;
     clrscr();
     cout<<"\n1. Maximum of TWO numbers";
     cout<<"\n2. Maximum of THREE numbers";
     cout<<"\n\nEnter your choice...";
     cin>>ch;
     switch (ch)
     {
      case 1:
	    cout<<"\n\nEnter the two numbers:\n";
	    cin>>a>>b;
	    max(a,b);
	    break;
      case 2:
	    cout<<"\n\nEnter the three numbers:\n";
	    cin>>a>>b>>c;
	    max(a,b,c);
	    break;
     }
     getch();
    }
