#include "profile.h"
#include <string>

Profile::Profile() { 
    username = "";
    displayname = "";
}

Profile::Profile(std::string user, std::string display) { 
    username = user; 
    displayname = display; 
}

std::string Profile::getUsername() { 
    return username; 
}

std::string Profile::getFullName() { 
    return displayname + " (@" + username + ")"; 
}

void Profile::setDisplayName(std::string display) { 
    displayname = display;
}