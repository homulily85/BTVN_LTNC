#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <chrono>

using namespace std::string_literals;

constexpr int MAX_BAD_GUESS{7};
constexpr char* DICTIONARY_PATH{"hangman_dictionary.txt"};
constexpr char* FIGURE[] = {
        "   -------------    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |           |    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          /     \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          / \\  \n"
        "   |     \n"
        " -----   \n"
    };
    

std::string getMysteryWord(){
    std::mt19937 mt{static_cast<std::mt19937::result_type>(std::chrono::steady_clock::now().time_since_epoch().count())};
    std::uniform_int_distribution random{ 0, 41237};
    std::ifstream dictionary{DICTIONARY_PATH};
    if (!dictionary) {
        std::cout<<"Dictionary file not found";
        exit(-1);
    }
    int lineIndex{random(mt)};
    std::string temp{};
    for (int i{0};i<=lineIndex;i++){
        std::getline(dictionary,temp);
    }
    dictionary.close();
    return temp;
}

char getInput(){
    char temp{};
    std::cin>>temp;
    std::cin.ignore(100000,'\n');
    return temp;
}

bool updateGuess(std::string& mysteryWord, std::string& currentGuess, char inputChar){
    auto index{mysteryWord.find_first_of(inputChar)};
    if (index== std::string::npos) return false;
    else {
        currentGuess[index]=inputChar;
        mysteryWord.erase(index,1);
        return true;
    }
    return true;
}

int main(){
    std::string mysteryWord{getMysteryWord()};
    std::string i_mysteryWord{mysteryWord};
    std::string currentGuess(mysteryWord.size(),'-');
    int currentBadGuess{0};
    std::cout<<"Welcome to Hangman game.\nIn this game I will think a word and you will guess it character by character. You have at most 7 bad guesses.\n";
    std::cout<<"Now, let's start.\n";
    while (currentBadGuess<MAX_BAD_GUESS)
    {
        std::cout<<FIGURE[currentBadGuess]<<'\n';
        std::cout<<"This word contain: ";
        std::cout<<currentGuess;
        std::cout<<"\nYour guess: ";
        if (updateGuess(mysteryWord,currentGuess,getInput())){
            std::cout<<"Correct\n";
            if (mysteryWord==""s) break;
        }
        else {
            std::cout<<"Incorrect\n";
            currentBadGuess++;
        }
    }
    if (currentBadGuess==MAX_BAD_GUESS) {
        std::cout<<FIGURE[MAX_BAD_GUESS];
        std::cout<<"GAME OVER!!!";
        std::cout<<"\nMy word is: "<<i_mysteryWord;
    }
    else {
        std::cout<<"You win!!!";
    }
    return 0;
}