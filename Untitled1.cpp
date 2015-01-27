# include <iostream>
# include<windows.h>
# include<conio.h>
using namespace std;

//Proto types
void menuOptions();
int evenOdd(int);
int gcd(int, int);
void guessTheNumberGame();
int main()
{
     menuOptions();
system ("Pause");
return 0;
}

// void function
 void menuOptions()
 {
      int num = 0;
      int number = 0; 
      int numberO = 0;
      int numberT = 0;    
      char letter;
    system("color 1e");
    cout<<"\t\t\t\tFunction Manipulation\n";
    cout<<"\t\t\t\t*********************\n";
    cout<<"\n";
    cout<<"\n";    
    cout<<"\t\t\t\t     Menu Option\n";   
    cout<<"\t\t\t\t     ***********\n"; 
    cout<<"\n";
    cout<<"\n";
    cout<<"\t            PRESS [E] - TO CHECK IF NUMBER IF ODD or EVEN\n";
    cout<<"\t            PRESS [D] - TO FIND THE GCD OF TWO NUMBERS\n";
    cout<<"\t            PRESS [G] - TO PLAY GUESS-THE-NUMBER GAME\n";
    cout<<"\t            PRESS [X] - TO EXIT PROGRAM\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t            ENTER CHOICE---> [";
    cin>> letter;
    
    system("cls");// Clears screen
//switch statement    
    switch (toupper(letter))
    {
          case 'E':
                   cout<<"\t\t\t\tFunction Manipulation\n";
                   cout<<"\t\t\t\t*********************\n";
                   cout<<"Enter a Number:";
                   cin>>num;
                   cout<<"\n";//clears screen
                   number = evenOdd (num);
                           if( number == 0 )
                               cout<<num<<" is an even integer\n";
                           else
                               cout<<num<<" is an odd integer\n";
                   cout<<"\t                   PRESS ANY KEY TO RETURN TO MENU...";
                 // system("pause");
                  getch();
                   system("cls");// clears screen
                   main();
          break;
          case 'D':
                   cout<<"\t\t\t\tFunction Manipulation\n";
                   cout<<"\t\t\t\t*********************\n";
                   cout <<"\nEnter two integers:";
                   cout <<"\nValue #1 -->:";
                   cin >> numberO;
                   cout <<"\nValue #2 -->";
                   cin >> numberT;
                   gcd(numberO, numberT);
                   cout <<"The greatest common divisor of " <<numberO <<" and " <<numberT <<" is " <<gcd(numberO, numberT) <<endl;
                   cout<<"\t                   PRESS ANY KEY TO RETURN TO MENU...";
                 //  getch();
                   system("cls");// clears screen
                   main();
          break;
          case 'G':
                   cout<<"\t\t\t\tFunction Manipulation\n";
                   cout<<"\t\t\t\t*********************\n";
                   guessTheNumberGame();
                   cout<<"\t                   PRESS ANY KEY TO RETURN TO MENU...";
                  // getch();
                   system("cls");// clears screen
                   main();
          break; 
          case 'X':
                   exit (0);
          break;
          default:
                  cout<<"\t\t\t\tFunction Manipulation\n";
                  cout<<"\t\t\t\t*********************\n";                           
                  cout<<"                                    INVALID CHOICE\n";
                  cout<<"\t                   PRESS ANY KEY TO RETURN TO MENU...";
            //      getch();
                  system("cls");// clears screen
                  main(); 
    }//end of switch  
}// End of void function

//A VOID FUNCTION THATS TEST FOR AN EVEN OR AN ODD NUMBER.
   int evenOdd (int num)
   {
       if(num % 2==0)
          return 0;
       else
          return 1;
}// end of funtion

//VALUE RETURNING FUNCTION THAT SWITCHES THE DIGITS OF A NUMBER BACKWARDS.
  int reverseDigits(int number)
  {
      int num1;
     int holdRemain;
 
     while (number > 0)
     {
      holdRemain = number % 10;
   
      num1 = holdRemain;
      number = number / 10;
      cout<<num1; 
     }
   cout <<"\n";
   return 0; 
}//end of function

//VALUE RETURN FUNCTION TO FIND THE GREATEST COMMON DIVIDER OF TWO NUMBERS.
int gcd(int number1, int number2) 
{
  	if (number1 == 0)
        return number2;
    if (number2 == 0)
        return number1; 
        return gcd(number2, number1 % number2); 
}// end of function       

//A VOID FUNCTION THAT ALLOWS THE USER TO GUESS A NUMBER AND GIVE THEM THE OPTION OF TRY AGAIN OR QUITING.
void guessTheNumberGame(){
     system("cls");
     
     int hold, guess;
     char decision;
     
     cout << "                                  FUNCTION MANIPULATION" << endl;
     cout << "                                  *********************" << endl; 
     cout << endl;
     
     
     cout << "I Have A Number Between 1 and 1000.\nCan You Guess What My Number?" << endl;
     cout << "Please Enter Your First Guess" << endl;
     cin >> guess;
     
     hold = 1 + rand()% 1000;
     
     //BEGINNING OF WHILE.
     while(guess != hold){
                 //BEGINNING OF IF STATEMENT.    
                 if(guess < hold){
                 cout << "Too Low. Try Again." << endl;
                 cin >> guess;
                 }
                 
                 else if(guess > hold){
                 cout << "Too High. Try Again." << endl;
                 cin >> guess;
                 }//END OF IF
     }//END OF WHILE.           
     
     
     
     //BEGINNING OF WHILE.
     while(guess == hold){
                 
                 cout << "Excellent! You Guessed The Number!\nEither You Know The Secret Or You Got Lucky!" << endl;
                 cout << "Would You Like To Play Again (y or n)?" << endl;
                 cin >> decision;
                 break;
                 }//END OF WHILE.
                 //BEGINNING OF IF STATEMENT.
                 if(decision == 'y'){
                             guessTheNumberGame();
                 }
                 
                 else if(decision == 'n'){
                 cout << "Thanks For Playing!!" << endl;
                 }//END OF IF.
                 
}// END OF FUNCTION              
     
