#pragma once
#include "URL.hpp"
#include "Session.hpp"
#include <iostream>

class Prompt //Class for the Menu that is prompted for the user
{
    public:
    Prompt();
    void displayPrompt(); //Displays the choices
    void callProgram();   //This is the main program that is running everything
    void input_choice(); //Takes in the User choice for the menu
    
    private:
    Session active_session;
    URL url_object;
    int choice;
};