#include<iostream>
#include<conio.h>
#include<windows.h>
#include <time.h>
using namespace std;
int player1=0,matches=0,player2=0,draw=0,o;//globle declaration
//char a[9]={49,50,51,52,53,54,55,56,57};//globle declaration
string s;//globle declaration

int starting();
int starting()
{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t****************************";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t*        TIC-TAC-TO        *";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t*                          *";
	cout<<"\n\t\t\t****************************\a";
	Sleep(600);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t**                        **";
	cout<<"\n\t\t\t**                        **";
	cout<<"\n\t\t\t**       TIC-TAC-TO       **";
	cout<<"\n\t\t\t**                        **";
	cout<<"\n\t\t\t**                        **";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************\a";
	Sleep(600);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t***                      ***";
	cout<<"\n\t\t\t***      TIC-TAC-TO      ***";
	cout<<"\n\t\t\t***                      ***";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t****************************\a";
	Sleep(900);
	system("cls");
}

int display1(char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8,char a9,int player1,int matches,int player2,int draw);
int display1(char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8,char a9,int player1,int matches,int player2,int draw)
{
	system("cls");
	cout<<"\n\n\n\t\t\t        |        |      ";
	cout<<"\n\t\t\t   "<<a1<<"    |   "<<a2<<"    |   "<<a3<<"  ";
	cout<<"\n\t\t\t________|________|_______";
	cout<<"\n\t\t\t        |        |      ";
	cout<<"\n\t\t\t   "<<a4<<"    |   "<<a5<<"    |   "<<a6<<"  ";
	cout<<"\n\t\t\t________|________|_______";
	cout<<"\n\t\t\t        |        |      ";
    cout<<"\n\t\t\t   "<<a7<<"    |   "<<a8<<"    |   "<<a9<<"  ";
	cout<<"\n\t\t\t        |        |      ";
	
	cout<<"\n\n\n                      |                 |                       |       ";
	cout<<"\n     PLAYER 1 (X)     |     MATCHES     |     PLAYER 2  (O)     |     DRAW ";
	cout<<"\n    ==============    |    =========    |    ===============    |    ====== ";
	
	//scours
	
	cout<<"\n                      |                 |                       |       ";
	cout<<"\n         "<<player1<<"            |        "<<matches<<"        |           "<<player2<<"           |      "<<draw<<"    ";
	cout<<"\n                      |                 |                       |           ";
	
}
int player_value(int i);
int player_value(int i)
{
	if(i%2)
	{
		cout<<"\n\n\t PLAYER 2 (O)  :  ";
		cin>>o;
	}//if
	else
	{
		cout<<"\n\n\t PLAYER 1 (X)  :  ";
		cin>>o;
	}//else
	
}//player value
int computer_value(int i);
int computer_value(int i)
{
	if(i%2)
	{
		srand(time(0));
		o=rand()%11;
	}//if
	else
	{
		cout<<"\n\n\t PLAYER 1 (X)  :  ";
		cin>>o;
	}//else
	
}//player value

int position(int o,int i);//we are not using it becouse globle declaration is making problem
int position(int o,int i)
{
}//position

string check(string s,char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8,char a9);
string check(string s,char a1,char a2,char a3,char a4,char a5,char a6,char a7,char a8,char a9)
{
	if    (((a1=='O')&&(a2=='O')&&(a3=='O'))  ||  ((a4=='O')&&(a5=='O')&&(a6=='O'))   || ((a7=='O')&&(a8=='O')&&(a9=='O'))              ||               ((a1=='O')&&(a4=='O')&&(a7=='O'))   ||   ((a2=='O')&&(a5=='O')&&(a8=='O'))   ||   ((a3=='O')&&(a6=='O')&&(a9=='O'))                 ||                      ((a1=='O')&&(a5=='O')&&(a9=='O'))    ||    ((a3=='O')&&(a5=='O')&&(a7=='O')))
       {
       	     s="PLAYER 2 (O)";
       	     player2++;
	   }//if
	   
	else if(((a1=='X')&&(a2=='X')&&(a3=='X'))  ||  ((a4=='X')&&(a5=='X')&&(a6=='X'))   || ((a7=='X')&&(a8=='X')&&(a9=='X'))              ||               ((a1=='X')&&(a4=='X')&&(a7=='X'))   ||   ((a2=='X')&&(a5=='X')&&(a8=='X'))   ||   ((a3=='X')&&(a6=='X')&&(a9=='X'))                 ||                      ((a1=='X')&&(a5=='X')&&(a9=='X'))    ||    ((a3=='X')&&(a5=='X')&&(a7=='X')))
       {
       	     s="PLAYER 1 (X)";
       	     player1++;
       	    
	   }//else if
	  	 return s;  
}//check





char result(string s);
char result(string s)
{
	
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                       ***********";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                     *************";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                   *************  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                 *************    ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t               *************      ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t             *************        ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t           *************          ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t         *************            ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t       *************              ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t     *************                ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   *************                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t *************                    ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t************                      ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t**********                        ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t                                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t********                          ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t**                                ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t******                            ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t****                              ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t****                              ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t******                            ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t**                                ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t********                          ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t*  CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t**********                        ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t*                                 ";
                	cout<<"\n\t\t\t************                      ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t *************                    ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   *************                  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t     *************                ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t       *************              ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t         *************            ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t           *************          ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t             *************        ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t               *************      ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                 *************    ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                   *************  ";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"   ";
                	cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t                     *************";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                  ";
	                cout<<"\n\t\t\t                                  ";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                       ***********";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                                 *";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                         *********";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                               ***";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                           *******";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                             *****";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                             *****";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                           *******";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                               ***";
	Sleep(50);
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                         *********";
	                cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t   CONGRACTULATION "<<s<<"  *";
                	cout<<"\n\t\t\t                                 *";
                	cout<<"\n\t\t\t                                 *";
	Sleep(50);
}//result

 main()
{
	starting();
	 int q=0,g;
	 cout<<"\n\n\n\n\t PRESS \"1\" FOR MULTIPLAYER PRESS \"2\" FOR SINGLE PLAYER ";
	 cin>>g;
		do{
		s='kk';//this for the result 
	  char a[9]={49,50,51,52,53,54,55,56,57};
	display1(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],player1,matches,player2,draw);
	for(int i=0;i<9;i++)
	{
     	do {
	 	    q=0;
	 	           switch(g)
					{
	 	           	case 1:player_value(i);break;
	 	           	case 2:computer_value(i);break;
			        }
	 		
			 
	 		
	 		
	 		
	 		
//*******************************************************************************************************************************************************************************   	    
   	 		
	 		
	 		
     	    
	if(o==3)
	{	
	    if(a[2]==88 ||a[2]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
    		
    			if(i%2)
    			{
    				a[2]='O';
    			}//inner if
    			else
    			{
    			    a[2]='X';
    			}//inner else
        }//ELSE
	}//if
	
	
	else if(o==2)
	{ 
	    if(a[1]==88 ||a[1]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
			if(i%2)
	    	
			{
	    		a[1]='O';
	    	}//inner if
	    	else
	    	{
	    	    a[1]='X';
	    	}//inner else
    	}//if
	
	}
	
	else if(o==1)
	{
	    if(a[0]==88 ||a[0]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
		if(i%2)
				{
					a[0]='O';
				}//inner if
				else
				{
				    a[0]='X';
				}//inner else
			}//if
	}
	
	
	else if(o==6)
	{	
	    if(a[5]==88 ||a[5]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
            	
				if(i%2)
				{
					a[5]='O';
				}//inner if
				else
				{
				    a[5]='X';
				}//inner else		
		}//ELSE
	}//ELSE if
	
	
	else if(o==5)
	{		
	    if(a[4]==88 ||a[4]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
			
		if(i%2)
				{
					a[4]='O';
				}//inner if
				else
				{
				    a[4]='X';
				}//inner else
		}//ELSE
	}//ELSE if
	
	
	else if(o==4)
	{
				
	    if(a[3]==88 ||a[3]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
    		
    				if(i%2)
    				{
    					a[3]='O';
    				}//inner if
    				else
    				{
    				    a[3]='X';
    				}//inner else
	    }//ELSE
	}//ELSE if
	
	
	else if(o==9)
	{		
	    if(a[8]==88 ||a[8]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
			   	   if(i%2)
		   		{
			   		a[8]='O';
			   	}//inner if
			   	else
			   	{
			   	    a[8]='X';
			   	}//inner else
		}//ELSE
	}//ELSE if
	
	
	else if(o==8)
	{	
	    if(a[7]==88 ||a[7]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
		    if(i%2)
		   		{
		   			a[7]='O';
		   		}//inner if
		   		else
		   		{
		   		    a[7]='X';
		   		}//inner else
		}//ELSE
	}//ELSE if
	
	
	else if(o==7)
	{	
	    if(a[6]==88 ||a[6]==79)
	    {
	    	q=1;
	    	cout<<"                   YOU HAVE TO CHOOSE EMPTY BLOCK (TRY AGAIN)";
		}
       	else
    	{
	     	if(i%2)
	     			{
	     				a[6]='O';
	     			}//inner if
	     			else
	     			{
	     			    a[6]='X';
		     		}//inner else
		}//ELSE
		
	}//ELSE if
	else
	{
		q=1;
		cout<<"                                INVALID NUMBER (TRY AGAIN)";
		q=1;
	}//else
     	    
     	    
     	    
  //*******************************************************************************************************************************************************************************   	    
     	    
		}while(q==1);
		
     	display1(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],player1,matches,player2,draw);
     	
     	s=check(s,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
     	    if(s=="PLAYER 1 (X)" || s=="PLAYER 2 (O)")
     	    {  
     	         break;
			 }
   	}//for i
   	if(s!="PLAYER 1 (X)" && s!="PLAYER 2 (O)")
   	{
   		s="DRAW";
   		draw++;
	 }
   	result(s);
   	matches++;
	 		
   }while(1);	
}//main
