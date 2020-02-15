#pragma once

#include <regex>
#include <string.h>
#include <iostream>
#include <set>
using namespace std;

class URL  //Class used to handle the User URL input
{
    public:
    URL();
    bool isValid(string user_url); //used to check if the link is valid
    bool storeURL(string user_url); // Stores the URL in a set
    bool inputURL();    // Takes in user URL
    void printStorage(); // Prints the content of the set
    
    private:
   
    string recentURL;   
    set<string> url_storage; // Uses a set to prevent duplicates

};