//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ LINE. All rights reserved
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

static ___FILEBASENAMEASIDENTIFIER___ *s_Shared___FILEBASENAMEASIDENTIFIER___ = NULL;

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::getInstance(void)
{
    if (!s_Shared___FILEBASENAMEASIDENTIFIER___)
    {
        s_Shared___FILEBASENAMEASIDENTIFIER___ = new(std::nothrow) ___FILEBASENAMEASIDENTIFIER___();
        s_Shared___FILEBASENAMEASIDENTIFIER___->init();
    }
    
    return s_Shared___FILEBASENAMEASIDENTIFIER___;
}

void ___FILEBASENAMEASIDENTIFIER___::purgeManager()
{
    if (s_Shared___FILEBASENAMEASIDENTIFIER___)
    {
        CC_SAFE_RELEASE_NULL(s_Shared___FILEBASENAMEASIDENTIFIER___);
    }
}

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{
    
};

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{
    
};

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    
    return true;
};


