#include "Prompt.hpp"

Prompt::Prompt()
{
  active_session.activate();
}

void Prompt::displayPrompt()
{
    cout<<"Press 1 to enter new URL"<<endl;
    cout<<"Press 2 to display current URL stored"<<endl;
    cout<<"Press 3 to quit"<<endl;
}

void Prompt::callProgram()
{
    
    while(active_session.checkSession())
    {
        displayPrompt();
        input_choice();
        switch(choice)
        {
            case 1:
                if(url_object.inputURL())  //If url is valid then the session counter will be reset to 3
                {
                    active_session.setCounter();
                    cout<<endl;         //used for aesthetics purposes
                    break;
                }
                else
                {
                    active_session.decrementCounter();  //Decrement if not a valid URL
                    if(active_session.checkCounter() == 0) 
                    {
                        active_session.deactivate();  //Deactive the session if the counter hits 0
                    }
                     cout<<endl;         //used for aesthetics purposes
                    break;
                }
                
            case 2:
                url_object.printStorage(); 
                cout<<endl;              //used for aesthetics purposes
                break;
            case 3:
                active_session.deactivate();
                break;
            default:
                cout<<"Invalid input select again"<<endl;
                break;
        }
    }
   
    cout<<"Session Terminated"<<endl;
}

void Prompt::input_choice()
{
    cin>>choice;
}