#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "fonction.c"
int main(){
    FILE*fichier=fopen("/var/log/auth.log","r");
    char*lettre=malloc(1000);
        char mois[100];
        char jour[100];
        char heure[100];
        char session[100];
        char user[100];
    if(fichier==NULL){
        exit(1);
    }      
    printf("Context-type:text/html\n\n"
    "<html lang=\"en\">"
    "<head>"
    "<meta charset=\"UTF-8\">"
    "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
    "<title>Document</title>"
    "<style>"
        "*{"
            "margin: 0;"
            "padding: 0;"
            "box-sizing: border-box;"
         "}"
         ".vatany{"
           "height: 5vw;"
            "background-color:wheat;"
            "width: 50vw;"
            "position: relative;"
            "left: 10vw;"
            "color: darkslategray;"
         "}"
         ".tableau{"
            "margin-top:5vw;"
             "height:40vw;"
                "width: 80vw;"
                "font-size: 2.2vw;"
               "background-color: floralwhite;"
               "border-radius: 2vw;"
         "}"
         ".soratraAmbony{"
            "font-size:2.9vw;"
            "position: relative;"  
            "left: .7vw;"
         "}"
         ".var{"
            "margin-top:2vw;"
            "font-size:3.5vw;"
            "background-color:khaki;"
            "border-radius:5px;"
         "}"
    "</style>"
    "</head>"
    "<header>"
       "<div class=\"var\" ><h1><center>/var/log/auth.log</center></h1></div>"
    "</header>"
    "<section>"
    "<body class=\"vatany\">"
    "<center>"
    "<table  class=\"tableau\" id=\"\">");
    printf("<TR class=\"soratraAmbony\">");
             printf("<td><b>Jour</b></td>");
             printf("<td><b>Mois</b></td>");
             printf("<td><b>Heure</b></td>");
             printf("<td><b>Session</b></td>");
             printf("<td><b>User</b></td>");
    printf("</TR>");
    while (!feof(fichier))
     {
        fgets(lettre,1000,fichier);
        if(strstr(lettre,"session") && strstr(lettre,"for user")){
             sscanf(lettre,"%[^ ] %[^ ] %[^ ] %*[^ ] %*[^ ] %*[^ ] %*[^ ] %[^ ] %*[^ ] %*[^ ] %[^\n]",mois,jour,heure,session,user);
            if(strstr(session,"opened")){
                printf("<tr bgcolor=\" chartreuse\">");
                printf("<td>%s\t%s</td>",datyGasy(jour,mois),jour);
                printf("<td>%s</td>",volana(mois));
                printf("<td>%s</td>",heure);
                printf("<td>%s</td>",session);
                printf("<td>%s</td>",user);
                printf("</tr>");
            }
            else{
                printf("<tr>");
                printf("<td>%s\t%s</td>",datyGasy(jour,mois),jour);
                printf("<td>%s</td>",volana(mois));
                printf("<td>%s</td>",heure);
                printf("<td>%s</td>",session);
                printf("<td>%s</td>",user);
                printf("</tr>");
            }    
        }
     }  
printf("</table>");
printf("</center>");
printf("</body>");
printf("</section>");
printf("<footer>""</footer>");
printf("</html>");
    return 0;
}
