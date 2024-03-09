/* program : Tic-Tac-Toe with numbers.:two player First player take odd number{1,3,5,7,9} second player take even numbers{0,2,4,6,8}
and start odd number and use each number only once  and the player complete aline to  that add up 15 is the winner and the line can
have both odd and even numbers.
   Author  : Abdulla ahmed Abdulla Abdul Aleem
   section : 21 
   Id      : 20230224
   version : 3.0
   Date    : 28/2/2024
*/   
#include <iostream>
using namespace std ;
int main()
{ 
    //input 10 numbers to use number only one and used for loop  
    cout<<"lets start the Game\n\n";
    string name1;
    string name2;
    cout<<"The First player Enter the Name\n";
    cin>>name1;
    cout<<"The Second player Enter the Name\n";
    cin>>name2;
    cout<<"==================\n\n";
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int result =0;
    for(int i=0;i<9;i++)
    {
        cout<<"The First player start : \n";
        cout<<"choose odd number\n";
        cout<<"{1,3,5,7,9}\n";
        cin>>num1;  
        if((num1==1||num1==3||num1==5||num1==7||num1==9))
        {
            result=result+num1;
            cout<<result<<" is result"<<endl<<endl;
        }  
        else
        {
            cout<<num1<<" : This number is not one of the options \n";
            cout<<"please try again the Game";
            break;
        }   
        if(result==15)
        {
            cout<<name1<<" is winner";
            break;
        }
        if(result>15)
        {
            cout<<"Game over ";
            break;
        } 
        cout<<"The Second player start : \n ";  
        cout<<"choose for even number\n";
        cout<<"{0,2,4,6,8}\n";
        cin>>num2; 
        if((num2==0||num2==2||num2==4||num2==6||num2==8))
        {
            result=result+num2;
            cout<<result<<" is result"<<endl<<endl;
        } 
        else
        {
            cout<<num2<<" : This number is not one of the options\n ";
            cout<<"please try again the game";
            break;
        }
        if(result==15)
        {
            cout<<name2<<" is winner";
            break;
        }     
        if(result>15)
        {
            cout<<"Game Over";
            break;
        } 
        cout<<"The First player start : \n";
        cout<<"choose odd number\n";
        cout<<"{1,3,5,7,9}\n";
        cin>>num3;  
        if((num3==1||num3==3||num3==5||num3==7||num3==9)&&(num3!=num1))
        {
            result=result+num3;
            cout<<result<<" is result"<<endl<<endl;
        }  
        else if(num3==num1) 
        {
            cout<<num3<<" : You are prohibited from choosing this number again\n";
            cout<<"please try again the Game\n";
            break;
        }  
        else
        {
            cout<<num3<<" : This number is not of the options\n"; 
            cout<<"please try again the Game\n";
            break;
        }    
        if(result==15)
        {
            cout<<name1<<" is winner";
            break;
        }
        if(result>15)
        {
            cout<<"Game over ";
            break;
        } 
        cout<<"The Second player start : \n ";  
        cout<<"choose for even number\n";
        cout<<"{0,2,4,6,8}\n";
        cin>>num4; 
         if((num4==0||num4==2||num4==4||num4==6||num4==8)&&(num4!=num2))
        {
            result=result+num4;
            cout<<result<<" is result"<<endl<<endl;
        } 
        else if(num4==num2)
        {
            cout<<num4<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num4<<" : This number is not of the options\n";
            cout<<"please try again the Game ";
            break;
        }    
        if(result==15)
        {
            cout<<name2<<" is winner";
            break;
        }     
        if(result>15)
        {
            cout<<"Game Over";
            break;
        }
        cout<<"The First player start : \n";
        cout<<"choose odd number\n";
        cout<<"{1,3,5,7,9}\n";
        cin>>num5;  
        if((num5==1||num5==3||num5==5||num5==7||num5==9)&&(num5!=num1)&&(num5!=num3))
        {
            result=result+num5;
            cout<<result<<" is result"<<endl<<endl;
        }  
        else if(num5==num1||num5==num3) 
        {
            cout<<num5<<" : You are prohibited from choosing this number again\n";
            cout<<"please try again the Game\n";
            break;
        }  
        else
        {
            cout<<num5<<" : This number is not of the options\n"; 
            cout<<"please try again the Game\n";
            break;
        }    
        if(result==15)
        {
            cout<<name1<<" is winner";
            break;
        }
        if(result>15)
        {
            cout<<"Game over ";
            break;
        } 
        cout<<"The Second player start : \n ";  
        cout<<"choose for even number\n";
        cout<<"{0,2,4,6,8}\n";
        cin>>num6; 
         if((num6==0||num6==2||num6==4||num6==6||num6==8)&&(num6!=num2)&&(num6!=num4))
        {
            result=result+num6;
            cout<<result<<" is result"<<endl<<endl;
        } 
        else if(num6==num2||num6==num4)
        {
            cout<<num6<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num6<<" : This number is not of the options\n";
            cout<<"please try again the Game ";
            break;
        }    
        if(result==15)
        {
            cout<<name2<<" is winner";
            break;
        }     
        if(result>15)
        {
            cout<<"Game Over";
            break;
        }
        cout<<"The First player start : \n";
        cout<<"choose odd number\n";
        cout<<"{1,3,5,7,9}\n";
        cin>>num7;  
        if((num7==1||num7==3||num7==5||num7==7||num7==9)&&(num7!=num1)&&(num7!=num3)&&(num7!=num5))
        {
            result=result+num7;
            cout<<result<<" is result"<<endl<<endl;
        }  
        else if(num7==num1||num7==num3||num7==5)
        {
            cout<<num7<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num7<<" : This number is not one of the options \n";
            cout<<"please try again the Game";
            break;
        }   
        if(result==15)
        {
            cout<<name1<<" is winner";
            break;
        }
        if(result>15)
        {
            cout<<"Game over ";
            break;
        }
        cout<<"The Second player start : \n ";  
        cout<<"choose for even number\n";
        cout<<"{0,2,4,6,8}\n";
        cin>>num8; 
        if((num8==0||num8==2||num8==4||num8==6||num8==8)&&(num8!=num2)&&(num8!=num4)&&(num8!=num6))
        {
            result=result+num8;
            cout<<result<<" is result"<<endl<<endl;
        } 
        else if(num8==num2||num8==num4||num8==num6)
        {
            cout<<num8<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num8<<" : This number is not one of the options\n ";
            cout<<"please try again the game";
            break;
        }
        if(result==15)
        {
            cout<<name2<<" is winner";
            break;
        }     
        if(result>15)
        {
            cout<<"Game Over";
            break;
        } 
        cout<<"The First player start : \n";
        cout<<"choose odd number\n";
        cout<<"{1,3,5,7,9}\n";
        cin>>num9;  
        if((num9==1||num9==3||num9==5||num9==7||num9==9)&&(num9!=num1)&&(num9!=num3)&&(num9!=num5)&&(num9!=num7))
        {
            result=result+num9;
            cout<<result<<" is result"<<endl<<endl;
        }  
        else if(num9==num1||num9==num3||num9==5||num9==num7)
        {
            cout<<num9<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num9<<" : This number is not one of the options \n";
            cout<<"please try again the Game";
            break;
        }   
        if(result==15)
        {
            cout<<name1<<" is winner";
            break;
        }
        if(result>15)
        {
            cout<<"Game over ";
            break;
        } 
        cout<<"The Second player start : \n ";  
        cout<<"choose for even number\n";
        cout<<"{0,2,4,6,8}\n";
        cin>>num10; 
        if((num10==0||num10==2||num10==4||num10==6||num10==8)&&(num10!=num2)&&(num10!=num4)&&(num10!=num6)&&(num10!=num8))
        {
            result=result+num10;
            cout<<result<<" is result"<<endl<<endl;
        } 
        else if(num10==num2||num10==num4||num10==num6||num10==num8)
        {
            cout<<num10<<" : You are prohibited from choosing this number again\n ";
            cout<<"please try again the game";
            break;
        }
        else
        {
            cout<<num10<<" : This number is not one of the options\n ";
            cout<<"please try again the game";
            break;
        }
        if(result==15)
        {
            cout<<name2<<" is winner";
            break;
        }     
        if(result>15)
        {
            cout<<"Game Over";
            break;
        } 
    }
    return 0;
}
