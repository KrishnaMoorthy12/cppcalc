
  #include<iostream.h>
  #include<stdio.h>
  #include<conio.h>
  #include<math.h>
  #include<string.h>

  static char feed[1][2000];

  long double a,b,c,d,sum,sub,diff,prod,quot,fact; long int x,y,div,remain;
  int clear=0;
  void ui_head()
  {
   cout<<"\n\t ==========================================================";
   cout<<"\n\t ======================= CALCULATOR =======================";
   cout<<"\n\t ======================== VER 4.97 ========================";
   cout<<"\n\t ==========================================================";
  }


   void add()
   {
    long double nos,add,sum=0;
    int f=1;
    clrscr();
    ui_head();
    cout<<"\n\n\t\t       =========== ADDITION ===========";
    cout<<"\n\n\t\t How many numbers do you want to add? \t ";
    cin>>nos;
    cout<<"\n\t\t\t Enter the numbers...\n";

    for(;f<=nos;f++)
    {
     cout<<"\t\t\t +";
     cin>>add;
     sum=sum+add;
    }
 /*   cin>>a;
    cout<<"\t\t+ ";
    cin>>b;
    cout<<"\t\t+ ";
    cin>>c;
    cout<<"\t\t+ ";
    cin>>d;

    sum=a+b+c+d;    */
    cout<<"\t\t\t___________";
    cout<<"\n\t\t\t= "<<sum;
   }

   void minus()
   {
    clrscr();
    ui_head();
    cout<<"\n\n\t\t       =========== SUBTRACTION ===========";
    cout<<"\n\n\t\t  Enter your numbers: \n\n\t\t  ";
    cin>>a;
    cout<<"\t\t- ";
    cin>>b;
    sub=a-b;
    cout<<"\t\t_____________";
    cout<<"\n\t\t= "<<sub;
    }

    void difference()
    {
     clrscr();
     ui_head();
     cout<<"\n\n\t\t       =========== DIFFERENCE ===========";
     cout<<"\n\n\n\t\t\t  Enter any two numbers..  \n\t\t\t  ";
     cin>>a;
     cout<<"\n\t\t\t  ";
     cin>>b;

      if (a>=b)
      {
       diff=a-b;
      }
      if (b>a)
      {
       diff=b-a;
      }

      cout<<"\n\n\t\t The difference between "<<a<<" and "<<b<<" is "<<diff<<".";

    }
    void product()
    {
     clrscr();
     ui_head();
     cout<<"\n\n\t\t       =========== PRODUCT ===========";
     cout<<"\n\n\n\t  Enter any three numbers (Press 1 to skip a number)";
     cout<<"\n\tx  ";
     cin>>a;
     cout<<"\n\tx  ";
     cin>>b;
     cout<<"\n\tx  ";
     cin>>c;

     prod=a*b*c;

     cout<<"\n\n\t  "<<a<<" x "<<b<<" x "<<c<<" = "<<prod<<"";
    }

    void quotient()

     {
      clrscr();
      ui_head();
      cout<<"\n\n\t\t       =========== QUOTIENT ===========";
      cout<<"\n\n\n\t Enter the divident  ";
      cin>>a;
      cout<<"\n\t Enter the divisor  ";
      cin>>b;
      quot=a/b;

      cout<<"\n\n\t\t      "<<quot;
      cout<<"\n\t\t     ---------";
      cout<<"\n\t\t  "<<b<<" | "<<a;
      cout<<"\n\t\t    | "<<a;
      cout<<"\n\t\t     ---------";
      cout<<"\n\t\t      0";

     }

     void divide()
     {
      clrscr();
      ui_head();
      cout<<"\n\n\t        =========== QUOTIENT & REMAINDER ===========";
      cout<<"\n\n\n\t Enter the divident  ";
      cin>>x;
      cout<<"\n\t Enter the divisor  ";
      cin>>y;
      div=x/y;
      remain=x%y;
     long int h=x-remain;

      cout<<"\n\n\t\t        "<<div;
      cout<<"\n\t\t      ----------";
      cout<<"\n\t\t  "<<y<<" | "<<x;
      cout<<"\n\t\t     | "<<h;
      cout<<"\n\t\t      ---------";
      cout<<"\n\t\t       "<<remain;

     }

     long double factd(long int x)
     {
      long double f=1,i;
      for (i=1;i<=x;i++)
       f*=i;
       return (f);
     }

     void factorial()
     {
      clrscr();
      ui_head();
      cout<<"\n\n\t\t        =========== FACTORIAL ===========";
      long int n;
      cout<<"\n\n\t Enter a number to find its factorial...\n\t ";
      cin>>n;
      cout<<"\n\t "<<n<<" x  ... x 1 = "<<factd(n);
     }
   void feedback()
   {
      clrscr();
      ui_head();
      cout<<"\n\n\t\t\t ========= FEEDBACK ========== ";
      cout<<"\n\t Write your feedback here (2000 characters):\n\t\t ";
      gets(feed[0]);
   }
   void view()
   {
     clrscr();
     cout<<"\n\n\t\t\t ========= FEEDBACK ========== ";
     cout<<"\n\n\t\t"<<feed[0];
     cout<<"\n\n\t Size of the feedback:"<<sizeof(feed)<<" KB";
     cout<<"\n\t Do you want to clear the feedback?\n\t 1>YES   2>NO \t";
     cin>>clear;
     switch(clear)
     {
      case 1: cout<<"\n\t Press [ENTER] to clear the feed back";
      gets(feed[0]);
      case 2: cout<<"";
      default: cout<<"";
     }
   }
   void logs()
   {
     clrscr();
     ui_head();
    cout<<"\n\n\t\t\t ========= BUGS ========== ";
     cout<<"\n\t\t 1) Exit dialog loops.";
     cout<<"\n\t\t 2) UI layout glitches.";
    cout<<"\n\n\t\t\t ========= CHANGE-LOG ========== ";
     cout<<"\n\t\t\t :::::::: VERSION 4.97 ::::::::";
     cout<<"\n\t\t # Feedback FC bug fixed, spaces can be used.";
     cout<<"\n\t\t * NEW: Addition can be done for a predefined \n\t\t\tnumber of numbers.";
   }
   void about()
   {
    clrscr();
    ui_head();
    cout<<"\n\n\t\t\t ========= ABOUT ========== ";
    cout<<"\n\n\t\t C++ CALCULATOR";
    cout<<"\n\t\t Version: 4.97";
    cout<<"\n\t\t Status: Stable";
    cout<<"\n\t\t Occasionally updated";
    cout<<"\n\t\t Last update: 01:17 PM, 09.04.2018 ";
    cout<<"\n\t\t Build name: calc4-stable-v4.97-09042018";
    cout<<"\n\t\t New Build ID: dumbold-cppcalc-v0.1-01082018;
    cout<<"\n\n\t\t Developed by Krishna Moorthy A, XII D";
   }

   void operate(int ch=0)
   {

    clrscr();
    ui_head();
    cout<<"\n\n\t\t\t\t  WELCOME! ";
    cout<<"\n\n\t\t\t  CHOOSE AN OPERATION ";
    cout<<"\n\t\t\t  1>Addition";
    cout<<"\n\t\t\t  2>Difference";
    cout<<"\n\t\t\t  3>Subtraction";
    cout<<"\n\t\t\t  4>Product";
    cout<<"\n\t\t\t  5>Quotient";
    cout<<"\n\t\t\t  6>Quotient & Remainder";
    cout<<"\n\t\t\t  7>Factorial";

    cout<<"\n\n\t\t\t 12>Feedback \t 99>Bugs & Changelog";
    cout<<"\n\t\t\t 11>About \t 0>Exit";

    cout<<"\n\n\t Press the respective number to operate the desired function";
    cout<<"\n\t Your choice is: ";
    cin>>ch;

     switch (ch)
     {
     case 1:
      add();
      break;
    case 2:
     difference();
     break;
    case 3:
     minus();
     break;
    case 4:
     product();
     break;
    case 5:
     quotient();
     break;
    case 6:
     divide();
     break;
    case 7:
     factorial();
     break;
    case 0:
    break;
    case 12:
      feedback();
      break;
    case 102:
      view();
      break;
    case 99:
      logs();
      break;
    case 11:
      about();
      break;
   default: cout<<"\n\t <!> INVALID INPUT..";

  }
 }
    void main(int sc=0)
    {

     operate();
     cout<<"\n\n\t  ====================================================== ";
     cout<<"\n\t |	 Do you want to continue to main screen?        |";
     cout<<"\n\t |	       ------- 		  ------	        |";
     cout<<"\n\t |	      | 1>YES |          | 2>NO |               |";
     cout<<"\n\t |	       -------		  ------                |";
     cout<<"\n\t  ====================================================== ";
     cout<<"\n\t Your choice is: ";
     cin>>sc;

     switch (sc)
     {
     case 1: main();   break;
     case 2: cout<<" \n\n\n\n\t\t PRESS ANY KEY TO EXIT :[  ";
     }
     getch();
     }
