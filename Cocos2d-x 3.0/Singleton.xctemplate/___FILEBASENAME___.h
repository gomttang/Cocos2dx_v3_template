//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ LINE. All rights reserved
//

#ifndef _____PROJECTNAME________FILEBASENAME_____H__
#define _____PROJECTNAME________FILEBASENAME_____H__

#include "cocos2d.h"

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::Ref {
public :
    ___FILEBASENAMEASIDENTIFIER___();
    virtual ~___FILEBASENAMEASIDENTIFIER___();
    virtual bool init();
    
    static ___FILEBASENAMEASIDENTIFIER___* getInstance(void);
    
    static void purgeManager();
private :

};

#endif /* defined(_____PROJECTNAME________FILEBASENAME_____H__) */
