#include <stdio.h>
int main(){    
    printf("<!DOCTYPE html>"
"<html lang=\"en\">"
"<head>"
    "<meta charset=\"UTF-8\">"
    "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
    "<title>Formulaire</title>"
    "<style>"
        ".ivelany{"
            "margin-top: 15vw;"
            "background-color: wheat;"
            "color: darkslategray;"
            "width: 39vw;"
            "height: 10vw;"
            "border-radius: 20px;"
            "border-color: brown darkslategray;"
            "border-style: double;"
        "}"
        "input{"
            "height: 2.5vw;"
            "border-style: double;"
            "border-radius: 9px;"
           " border-color: darkslategray;"
        "}"
        "body{"
            "background: linear-gradient(darkslategray,burlywood);"
           " height: 50vw;"
        "}"
    "</style>"
"<body>"
    "<center>"
        "<div class=\"ivelany\">"
        "<form method=\"get\" action=\"/Documents/DevoirS2/Authlogcgi/authloc.c\">"
            "<h1>Rechercher Utilisateurs!?</h1>"
            "<input type=\"text\" class=\"text\">"
            "<!-- <input type=\"password\" class=\"password\"> -->"
            "<a href=\"/authlog.cgi\" ><input type=\"submit\" value=\"Rechercher\"></a>"
        "</form>"
        "</div>"
    "</center>"
"</body>"
"</html>");
    return 0;
}