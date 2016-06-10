//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ LINE. All rights reserved
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{
    
};

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{
    
};

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::create()
{
    ___FILEBASENAMEASIDENTIFIER___ *pRet = new(std::nothrow) ___FILEBASENAMEASIDENTIFIER___();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
};

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if(Layer::init())
    {
        
        return true;
    }
    return false;
}
