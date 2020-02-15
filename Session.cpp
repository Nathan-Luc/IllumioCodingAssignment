#include "Session.hpp"

Session::Session()
{
    setCounter();
    deactivate();
}

void Session::setCounter()
{
    invalid_counter = 3;
}

void Session::activate()
{
    active = true;
}

void Session::deactivate()
{
    active = false;
}

void Session::decrementCounter()
{
    invalid_counter--;
}

bool Session::checkSession()
{
    return active;
}
int Session::checkCounter()
{
    return invalid_counter;
}