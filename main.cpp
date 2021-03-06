//Huey Kolowich
//CS 236

#include "Lexer.h"

bool lexerTests(bool argv1, char* argv1_c);

int main(int argc, char* argv[]) 
{
    
    if (argv[1])
    {    
        lexerTests(true, argv[1]);
    } else {
        lexerTests(true, nullptr);
    }

    return 0;
}

bool lexerTests(bool argv1, char* argv1_c)
{
    //Testing for lexer
    //cout << "Begin Testing for Lexer..." << endl;

    Lexer* lexy = new Lexer();
    string testInput;

    //cout << "######################################\n\n" << endl;

    if (argv1)
    {
        //cout << "Testing toString..." << endl;

        testInput = lexy->inputToString(argv1_c);

        //cout << "String: " << testInput << endl;
    } else
    {
        testInput = "";
    }

    //cout << "######################################\n\n" << endl;
    
    //cout << "Testing run..." << endl;

    // bool testRun = lexy->run(testInput);
    
    lexy->run(testInput);

    //cout << "Run output: " << testRun << endl;

    //cout << "######################################\n\n" << endl;

    //cout << "Testing output..." << endl;

    //bool testOutput = lexy->output();

    lexy->output();

    //cout << "Output's output: " << testOutput << endl;

    //cout << "######################################\n\n" << endl;

    delete lexy;
    //cout << "Testing Complete." << endl;

    return true;
}