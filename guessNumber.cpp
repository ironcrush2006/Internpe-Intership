#include<iostream>
#include<cstdlib>
#include<ctime>

void GuessNumber(int value);
//Menu function
void Menu(){ 
    std::cout<<"----------------Welcome---------------\n";
    std::cout<<"\t\t1.Start\n";
    std::cout<<"\t\t2.Quit\n";
    std::cout<<"--------------------------------------\n";
    std::cout<<"Press 1 to start and 2 to quit\n";
}
//for Random Generator 
int Random_num_Generator()
{  
    srand(time(NULL));
    int numberRandom=rand()%20;
    std::cout<<numberRandom;
    std::cout<<"\n";
   return numberRandom;
}

//For Start
void Start_Game(int value){ 
    int click=value;
    switch(click)
    {  
        case 1:
           std::cout<<"Started the Game\n";
           GuessNumber(Random_num_Generator());
           break;
        case 2:
         if(click==2){
           std::cout<<"You quit the Game";
           break;
         }
         break;
        default : 
            std::cout<<"You entered the wrong key\n";
            break;
    }
}
//for guesses
void GuessNumber(int value){ 
     int number=0;
     int num_guess=5;
    do{
    std::cout<<"Enter the Number:";
    std::cin>>number;
    if(number<value)
    { 
        std::cout<<"Your choice is low\n";
        GuessNumber(Random_num_Generator());
    }
    else if (number>value)
    { 
        std::cout<<"Your choice is high\n";
        GuessNumber(Random_num_Generator());
    }
    else
    { 
        std::cout<<"You win the Game\n";
        exit(1);
    }
    }while(number <=num_guess);

 

 
    
}


//Main function
int main()
{ 
      int value;
     Menu();
     std::cin>>value;
     Start_Game(value);  
   return 0;
}