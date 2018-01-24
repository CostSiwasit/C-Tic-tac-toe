#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;
string matrix[4][4];
char player = 'O';
int n;
void Draw()
{
    system("cls");
    cout<<"\n                         Welcome to Tic Tac Toe Game   \n\n                   Are you ready ?  Play game !! ""\n\n\n";
    cout << "Tic Tac Toe Game""\n\n" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<matrix[i][j] << "|";
        }
        cout << endl;
    }
}
void Input ()
{

    char a;
    cout << "\n\n\nSelect the number of the field:";

    if (player =='X')
       {
        int b;
       	b = rand()%17;
       	if(b==1)
            a='a';
        else if (b==2)
            a='b';
        else if (b==3)
            a='c';
        else if (b==4)
            a='d';
        else if (b==5)
            a='e';
        else if (b==6)
            a='f';
        else if (b==7)
            a='g';
        else if (b==8)
            a='h';
        else if (b==9)
            a='i';
        else if (b==10)
            a='j';
        else if (b==11)
            a='k';
        else if (b==12)
            a='l';
        else if (b==13)
            a='m';
        else if (b==14)
            a='n';
        else if (b==15)
            a='z';
        else if (b==16)
            a='p';


		}
    else
    {
    	cin >> a;
	}




    if (a =='a' || a == 'A')
	{
		if (matrix[0][0] == "a")
		    matrix[0][0] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='b' || a == 'B')
	{
		if (matrix[0][1] == "b")
		    matrix[0][1] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='c' || a == 'C')
	{
		if (matrix[0][2] == "c")
		    matrix[0][2] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='d' || a == 'D')
	{
		if (matrix[0][3] == "d")
		    matrix[0][3] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='e' || a == 'E')
	{
		if (matrix[1][0] == "e")
		    matrix[1][0] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='f' || a == 'F')
	{
		if (matrix[1][1] == "f")
		    matrix[1][1] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='g'  || a == 'G')
	{
		if (matrix[1][2] == "g")
		    matrix[1][2] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='h' || a == 'H')
	{
		if (matrix[1][3] == "h")
		    matrix[1][3] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='i' || a == 'I')
	{
		if (matrix[2][0] == "i")
		    matrix[2][0] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='j' || a == 'J')
	{
		if (matrix[2][1] == "j")
		    matrix[2][1] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='k' || a == 'K')
	{
		if (matrix[2][2] == "k")
		    matrix[2][2] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='l' || a == 'L')
	{
		if (matrix[2][3] == "l")
		    matrix[2][3] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='m' || a == 'M')
	{
		if (matrix[3][0] == "m")
		    matrix[3][0] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='n' || a == 'N')
	{
		if (matrix[3][1] == "n")
		    matrix[3][1] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='z' || a == 'Z')
	{
		if (matrix[3][2] == "z")
		    matrix[3][2] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else if (a =='p' || a == 'P')
	{
		if (matrix[3][3] == "p")
		    matrix[3][3] = player;
		else
		{
			cout << "Can't choose this number , try again" << endl;
			Input();
		   }

	}
	else
	{
		cout << "Can't choose this number , try again" << endl;
			Input();
	}
}
void TogglePlayer()
{
    if (player == 'O')
        player = 'X';
    else
        player = 'O';char matrix[4][4];

}
char Win()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X'  )
	    return 'X';
	if (matrix[0][1] == 'X' && matrix[0][2] == 'X' && matrix[0][3] == 'X'  )
	    return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X'  )
	    return 'X';
	if (matrix[1][1] == 'X' && matrix[1][2] == 'X' && matrix[1][3] == 'X'  )
	    return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X'  )
	    return 'X';
	if (matrix[2][1] == 'X' && matrix[2][2] == 'X' && matrix[2][3] == 'X'  )
	    return 'X';
	if (matrix[3][0] == 'X' && matrix[3][1] == 'X' && matrix[3][2] == 'X'  )
	    return 'X';
	if (matrix[3][1] == 'X' && matrix[3][2] == 'X' && matrix[3][3] == 'X'  )
	    return 'X';
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X'  )
	    return 'X';
	if (matrix[1][0] == 'X' && matrix[2][0] == 'X' && matrix[3][0] == 'X'  )
	    return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X'  )
	    return 'X';
	if (matrix[1][1] == 'X' && matrix[2][1] == 'X' && matrix[3][1] == 'X'  )
	    return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X'  )
	    return 'X';
	if (matrix[1][1] == 'X' && matrix[2][2] == 'X' && matrix[3][3] == 'X'  )
	    return 'X';
	if (matrix[0][3] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X'  )
	    return 'X';
	if (matrix[1][2] == 'X' && matrix[2][1] == 'X' && matrix[3][0] == 'X'  )
	    return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X'  )
	    return 'X';
	if (matrix[1][2] == 'X' && matrix[2][2] == 'X' && matrix[3][2] == 'X'  )
	    return 'X';
	if (matrix[0][3] == 'X' && matrix[1][3] == 'X' && matrix[2][3] == 'X'  )
	    return 'X';
	if (matrix[1][3] == 'X' && matrix[2][3] == 'X' && matrix[3][3] == 'X'  )
	    return 'X';


    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O'  )
	    return 'O';
	if (matrix[0][1] == 'O' && matrix[0][2] == 'O' && matrix[0][3] == 'O'  )
	    return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O'  )
	    return 'O';
	if (matrix[1][1] == 'O' && matrix[1][2] == 'O' && matrix[1][3] == 'O'  )
	    return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O'  )
	    return 'O';
	if (matrix[2][1] == 'O' && matrix[2][2] == 'O' && matrix[2][3] == 'O'  )
	    return 'O';
	if (matrix[3][0] == 'O' && matrix[3][1] == 'O' && matrix[3][2] == 'O'  )
	    return 'O';
	if (matrix[3][1] == 'O' && matrix[3][2] == 'O' && matrix[3][3] == 'O'  )
	    return 'O';
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O'  )
	    return 'O';
	if (matrix[1][0] == 'O' && matrix[2][0] == 'O' && matrix[3][0] == 'O'  )
	    return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O'  )
	    return 'O';
	if (matrix[1][1] == 'O' && matrix[2][1] == 'O' && matrix[3][1] == 'O'  )
	    return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O'  )
	    return 'O';
	if (matrix[1][1] == 'O' && matrix[2][2] == 'O' && matrix[3][3] == 'O'  )
	    return 'O';
	if (matrix[0][3] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O'  )
	    return 'O';
	if (matrix[1][2] == 'O' && matrix[2][1] == 'O' && matrix[3][0] == 'O'  )
	    return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O'  )
	    return 'O';
	if (matrix[1][2] == 'O' && matrix[2][2] == 'O' && matrix[3][2] == 'O'  )
	    return 'O';
	if (matrix[0][3] == 'O' && matrix[1][3] == 'O' && matrix[2][3] == 'O'  )
	    return 'O';
	if (matrix[1][3] == 'O' && matrix[2][3] == 'O' && matrix[3][3] == 'O'  )
	    return 'O';

    return '/';
}
int main()
{
int a = 0 , b =0;
string line;
  ifstream myfile ("data.text");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      matrix[a][b]=line;
      b++;
      if(b==3)
      {
          b=0;
          a++;
      }
    }
    myfile.close();
  }
  else cout << "Unable to open file";
    srand(time(0));
    n=0;
    Draw();
    while(1)
    {
        n++;
        Input();
        Draw();

        if (Win() == 'X')
        {
            cout <<"\n" "Com X wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout <<"\n" "Player O wins!" << endl;
            break;
        }
        else if (Win() == '/' && n == 16)
		{
			cout << "It's a Draw!" << endl;
			break;
		}
        TogglePlayer();
    }
    system("pause");
    return 0;
}
