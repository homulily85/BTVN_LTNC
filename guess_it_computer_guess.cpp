#include <iostream>

char inputHandle(){
    char temp{};
     while (true)
        {
            std::cin>>temp;
            if (std::cin.fail()) {
                std::cout<<"Invalid input. Try again.\n";
                std::cin.clear();
                std::cin.ignore(100000,'\n');   
            }
            if (!std::cin.eof() && std::cin.peek() != '\n')
            {
                std::cout<<"Invalid input. Try again.\n";
                std::cin.ignore(100000,'\n');   
                continue;
            }
            if (temp=='y'||temp=='n'||temp=='Y'||temp=='N'||temp=='l'||temp=='L'||temp=='h'||temp=='H'||temp=='C'||temp=='c') return temp;
            else {
                std::cout<<"Invalid input. Try again.\n";
            }
        }
}

int main(){
    bool continue_game {true};
    char response {};
    while (continue_game)
    {
        std::cout<<"Think of a number between 1 and 100 and I will guess it.\nAre you ready?(y/n)\n";
        response=inputHandle();
        while (true)
        {
            if (response!='n'&&response!='N'&&response!='y'&&response!='Y') {
                std::cout<<"Invalid input. Try again.\n";
                response=inputHandle();
            }
            else break;
        }
        
        if (response=='y'||response=='Y')
        {
            int low {1}, high{100}, guess{(low+high)/2};
            bool found {false};
            while (!found)
            {
                std::cout<<"I think your number is "<<guess<<"\nPress 'h' if my guess is too high, 'l' if it is too low, or 'c' if it is correct.\n";
                response=inputHandle();
                while (true)
                {
                    if (response!='h'&&response!='H'&&response!='l'&&response!='L'&&response!='C'&&response!='c') {
                        std::cout<<"Invalid input. Try again.\n";
                        response=inputHandle();
                    }
                    else break;
                }
                switch (response)
                {
                case 'c': case 'C':
                    std::cout<<"I guessed your number.\nDo you want to play again? (y/n)\n";
                    response=inputHandle();
                    while (true)
                    {
                        if (response!='n'&&response!='N'&&response!='y'&&response!='Y') {
                            std::cout<<"Invalid input. Try again.\n";
                            response=inputHandle();
                        }
                        else break;
                    }
                    if (response=='n'||response=='N')
                    {
                        continue_game = false;
                        found = true;
                        std::cout<<"Thank you for play with me!";
                    }
                    else
                    {
                        found = true;
                    }
                    break;
                case 'l': case 'L':
                    low = guess+1;
                    guess = (low+high)/2;
                    break;
                case 'h': case 'H':
                    high = guess-1;
                    guess = (low+high)/2;
                    break;
                default:
                    break;
                }
            if (low>high) {
                std::cout<<"I can't guess a number. Are you cheating?.\nDo you want to play again?(y/n)\n";
                response=inputHandle();
                while (true)
                {
                    if (response!='n'&&response!='N'&&response!='y'&&response!='Y') {
                        std::cout<<"Invalid input. Try again.\n";
                        response=inputHandle();
                    }
                    else break;
                }
                if (response=='n'||response=='N')
                    {
                        continue_game = false;
                        found = true;
                        std::cout<<"Thank you for play with me!";
                    }
                    else
                    {
                        found = true;
                    }
            }
            }
        }
        else if (response=='n'||response=='N'){
            std::cout<<"Try again when you are ready.";
            continue_game=false;
        }
    }
    return 0;
}