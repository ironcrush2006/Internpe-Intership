#include<iostream>

enum COIN{ 
   ROCK=1,
   PAPER=2,
   SCISSOR=3
};

//Menu function
class Player1{
protected:
    int m_start;
    int m_key;
public: 
void Start(){ 
    int &start=m_start;
    std::cin>>start;
    std::cout<<"Press 1 for rock,2 for paper,3 for scissor";
   }

 void Key1(int * come)
{ 
    COIN *coin =new COIN ;

    switch (*come)
    {
    case ROCK:
        std::cout<<ROCK<<".Its is Rock from player1\n";
        break;
    case PAPER:
        std::cout<<PAPER<<".Its is  Paper from player1\n";
        break;
    case SCISSOR:
        std::cout<<SCISSOR<<".Its is Scissor from player1\n";
        break;
    default:
        std::cout<<"Invalid Key";
        break;
    }
    delete coin;
}

void Key2(int * come)
{ 
    COIN *coin =new COIN ;

    switch (*come)
    {
    case ROCK:
        std::cout<<ROCK<<".Its is Rock from player2\n";
        break;
    case PAPER:
        std::cout<<PAPER<<".Its is  Paper from player2\n";
        break;
    case SCISSOR:
        std::cout<<SCISSOR<<".Its is Scissor from player2\n";
        break;
    default:
        std::cout<<"Invalid Key";
        break;
    }
    delete coin;
}
 
 int  check(int * point1,int * point2) 
 { 
    COIN *coin =new COIN ;

       if (*point1 == *point2) { 
        std::cout<<"Both are same";
        return false; 
    } 
        if (*point1 == SCISSOR && *point2 == PAPER) { 
            std::cout<<"Scissor wins!\n";
        return SCISSOR; 
    } 
    if (*point1 == SCISSOR && *point2 == ROCK) { 
        std::cout<<"Rock wins!\n";
        return ROCK; 
    } 
    if (*point1 == PAPER&& *point2 ==ROCK) { 
        return PAPER; 
    } 
    if (*point1 == PAPER && *point2 == SCISSOR) { 
          std::cout<<"Scissor wins!\n";
        return SCISSOR; 
    } 
    if (*point1 == ROCK && *point2 == PAPER) { 
        std::cout<<"Paper wins!";
        return PAPER; 
    } 
    if (*point1 == ROCK && *point2 == SCISSOR) { 
        std::cout<<"Rock wins!\n";
        return ROCK; 
    } 
     delete coin; 
 }


Player1(){ 
    std::cout<<"----------------Welcome---------------\n";
    std::cout<<"\t\t1.Start\n";
    std::cout<<"\t\t2.Quit\n";
    std::cout<<"--------------------------------------\n";
    std::cout<<"Press 1 to start and 2 to quit\n";
    Start();
    
}
~Player1(){ };
};


int main(){ 
    Player1 ptr;

    while(true){
    int key1,key2;
    std::cout<<"\n";
    
    std::cout<<"For Player1:";
    std::cin>>key1;
    ptr.Key1(&key1);
    std::cout<<"For Player2:";
    std::cin>>key2;
    ptr.Key2(&key2);
    ptr.check(&key1,&key2);     
    }
}