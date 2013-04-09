
#ifndef _CONTER_SERVICE_H_
#define  _CONTER_SERVICE_H_

#include <map>
#include "config_operator.h"
#include "../network/net_module.h"
#include "../keyboard/keyboard_ctrl.h"

// module
CKeyboardCtrl       *g_pKbCtrl;
CNetMod              *g_pNetCtrl;
CConfigOperator    *g_pCfgCtrl;

//pthread


void CenterInit();
void CenterStart();
void CenterStop();


#endif