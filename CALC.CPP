
   #include<iostream.h>
   #include<conio.h>

   long double a,b,sum,diff,prod,quot1,quot2;
   int ch=0;

   class calc
   {
  public:

				  /*ACCEPT*/
    void accept()
    {
     clrscr();
     cout<<"\n\t=====================================================";
     cout<<"\n\t=========== CALCULATOR by Krishna Moorthy ===========";
     cout<<"\n\t=====================================================";
     cout<<"\n\n\t Enter any two numbers: \n\t ";
     cin>>a;
     cout<<"\n\t ";
     cin>>b;
    }

			      /*CALCULATION*/
    void calculate()
    {
     /*sum*/
     sum=a+b;

     /*difference*/
     if (a>=b)
     {
      diff=a-b;
     }
     if (b>a)
     {
      diff=b-a;
     }

     /*product*/
     prod=a*b;

     /*division*/
     quot1=a/b;
     quot2=b/a;
    }

				  /*DISPLAY*/

    void display()
    {
     cout<<"\n\t The sum of "<<a<<" and "<<b<<" is "<<sum<<".";
     cout<<"\n\n\t The difference between "<<a<<" and "<<b<<" is "<<diff<<".";
     cout<<"\n\n\t The product of "<<a<<" and "<<b<<" is "<<prod<<".";
     cout<<"\n\n\t "<<a<<" divided "<<b<<" by is "<<quot1<<".";
     cout<<"\n\n\t "<<b<<" divided "<<a<<" by is "<<quot2<<".";
     cout<<"\n\n\t=====================================================";
    }

				  /*EXECUTE*/

    void execute()
    {
     accept();
     calculate();
     display();
    }
   };

     /*===============================================================
       ============================== MAIN ===========================
       ===============================================================*/

   void main()
   {
    clrscr();
    calc yes;
    yes.execute();
    cout<<"\n\n\t  Do you want to exit?\n\t  1-->Yes      2-->No\n\t  ";
    cin>>ch;

    switch (ch)
      {
	 case 1:
	 cout<<"\n\n\n\n\n\n\n\t ---------------------------------------";
	 cout<<"\n\t -------------- THANK YOU --------------";
	 cout<<"\n\t ---------------------------------------\n\t  ";
	 break;

	 case 2:
	 main();
	 break;
      }
    getch();
   }



