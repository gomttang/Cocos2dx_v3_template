//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved
//

#ifndef _____PROJECTNAME________FILEBASENAME_____H__
#define _____PROJECTNAME________FILEBASENAME_____H__

#include "cocos2d.h"

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::Scene{
public :
    ___FILEBASENAMEASIDENTIFIER___();
    virtual ~___FILEBASENAMEASIDENTIFIER___();
    virtual bool init();
    
    /** create one scene */
    static ___FILEBASENAMEASIDENTIFIER___* create();
    
    /* cocos2d::Scene */
    virtual void onEnterTransitionDidFinish();
    virtual void onExitTransitionDidStart();
    virtual void onEnter();
    virtual void onExit();
    
private :
    cocos2d::EventListenerKeyboard* _keyboardListener;

};

#endif /* defined(_____PROJECTNAME________FILEBASENAME_____H__) */
