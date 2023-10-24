char*volana(char*valiny){
    char *volana=malloc(100);
    int vol=1;
    if(strstr(valiny,"Jan")){vol=1;}
    if(strstr(valiny,"Fev")){vol=2;}
    if(strstr(valiny,"Mar")){vol=3;}
    if(strstr(valiny,"Avr")){vol=4;}
    if(strstr(valiny,"Mai")){vol=5;}
    if(strstr(valiny,"Jui")){vol=6;}
    if(strstr(valiny,"Juil")){vol=7;}
    if(strstr(valiny,"Aou")){vol=8;}
    if(strstr(valiny,"Sep")){vol=9;}
    if(strstr(valiny,"Oct")){vol=10;}
    if(strstr(valiny,"Nov")){vol=11;}
    if(strstr(valiny,"Dec")){vol=12;}
    switch (vol)
    {
        case 1:
        strcpy(volana,"Janoary");break;
        case 2:
        strcpy(volana,"Febroary");break;
        case 3:
        strcpy(volana,"Martsa");break;
        case 4:
        strcpy(volana,"Aprily");break;
        case 5:
        strcpy(volana,"May");break;
        case 6:
        strcpy(volana,"Jona");break;
        case 7:
        strcpy(volana,"Jolay");break;
        case 8:
        strcpy(volana,"Aogositra");break;
        case 9:
        strcpy(volana,"Septambra");break;
        case 10:
        strcpy(volana,"Oktobra");break;
        case 11:
        strcpy(volana,"Novambra");break;
        case 12:
        strcpy(volana,"Desambra");break;
    }
    return volana;
}
char *datyGasy(char*valiny,char *valiny1){
    char*datyGasy=malloc(100);
    int a=atoi(valiny);
    int b=0,c=0,d=0;
    if(strstr(valiny1,"Jan")){b=1;}
    if(strstr(valiny1,"Fev")){b=2;}
    if(strstr(valiny1,"Mar")){b=3;}
    if(strstr(valiny1,"Avr")){b=4;}
    if(strstr(valiny1,"Mai")){b=5;}
    if(strstr(valiny1,"Jui")){b=6;}
    if(strstr(valiny1,"Juil")){b=7;}
    if(strstr(valiny1,"Aou")){b=8;}
    if(strstr(valiny1,"Sep")){b=9;}
    if(strstr(valiny1,"Oct")){b=10;}
    if(strstr(valiny1,"Nov")){b=11;}
    if(strstr(valiny1,"Dec")){b=12;}
    c=(b)+a+23+(20/4);
    d=c%7;
    switch (d)
    {
    case 0: strcpy(datyGasy,"Sabotsy"); break;
    case 1: strcpy(datyGasy,"Alahady"); break;
    case 2: strcpy(datyGasy,"Alatsinainy"); break;
    case 3: strcpy(datyGasy,"Talata"); break;
    case 4: strcpy(datyGasy,"Alarobia"); break;
    case 5: strcpy(datyGasy,"Alamisy"); break;
    case 6: strcpy(datyGasy,"Zoma"); break;
    }
    return datyGasy;
}
int bissextile(char *valiny){
    int chiffre=atoi(valiny);
    if(chiffre%400==0 && chiffre%100!=0){
        return 1;
    }
    else{return 0;}

}
void print(char*valiny){


}