#include "URL.hpp"

URL::URL()
{
    url_storage.clear();
}

bool URL::isValid(string user_url)
{
    string url_pattern = "^(https?:\\/\\/)?([\\da-z\\.-]+)\\.([a-z\\.]{2,6})([\\/\\w \\.-]*)*\\/?$"; // Recoginition pattern for a url
    regex url_regex(url_pattern);   
    if(regex_match(user_url, url_regex))  // compares the user input to the pattern
    {
        return true;                    //if true then return that the url is a url
    }
    else
    {
        return false;                   // if false then return that it is not a good url
    }
    
}

bool URL::storeURL(string user_url)
{
    if(isValid(user_url))                  // only stores if if the url is valid
    {
    url_storage.insert(user_url);
    return true;
    }
    else
    {
        cout<<"URL invalid"<<endl;      // prompts if the url is not valid
        return false;
    }
    
}

bool URL::inputURL()
{
    cin.ignore(numeric_limits<int>::max(), '\n');   // Used to take in a user URL 
    getline(cin,recentURL);
    if(storeURL(recentURL))
     {
        return true;
     }   
    else
    {
        return false;
    }
    
}

void URL::printStorage()
{
    for(auto it = url_storage.begin(); it != url_storage.end(); it++)  //iterates through the set 
    {
        cout<< *it <<endl;
    }
}