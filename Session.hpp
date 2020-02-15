#pragma once

class Session  //Class used for just handling the Session
{
    public:
    Session();
    void setCounter();    //Sets the invalid_counter to 3 so they have three attempts
    void decrementCounter();    //Decrement the counter
    void deactivate();          // Turns off the active session
    void activate();            // Activates the session
    bool checkSession();        // checks the current status of a session
    int checkCounter();         // checks the current counter

    private:
    int invalid_counter;
    bool active;
};