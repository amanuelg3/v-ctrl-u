
//#include "pthread.h"
#include "central_service.h"


int main()
{
    CenterInit();
    CenterStart();
    CenterStop();
    return 0;
}

void FirstInit()
{
    //global variable

    //pthread 

    //comunication

    //system config
}

void ConfigFileInit()
{

}

void CenterInit()
{
    FirstInit();
    
    ConfigFileInit();

    //pthread create 1: keyborad

    //pthread create 2: network

    return ;
}



void CenterStart()
{
    return ;
}

void CenterStop()
{
    return ;
}