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
    ___FILEBASENAMEASIDENTIFIER___ *pController = new(std::nothrow) ___FILEBASENAMEASIDENTIFIER___();
    if (pController && pController->init())
    {
        pController->autorelease();
        return pController;
    }
    else
    {
        CC_SAFE_DELETE(pController);
        return NULL;
    }
};


bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if(Scene::init())
    {
        // Type your initialization code

        
        return true;
    }
    
    return false;
};

void ___FILEBASENAMEASIDENTIFIER___::onEnterTransitionDidFinish()
{
    //Add keyboard event delegate
    _eventDispatcher->removeEventListener(_keyboardListener);
    _keyboardListener = nullptr;
    
   auto listener = EventListenerKeyboard::create();
//    listener->onKeyReleased = CC_CALLBACK_2(GameScene::onKeyReleased, this);
   _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    
    Scene::onEnterTransitionDidFinish();
};

void ___FILEBASENAMEASIDENTIFIER___::onExitTransitionDidStart()
{
    _eventDispatcher->removeEventListener(_keyboardListener);
    _keyboardListener = nullptr;

    Scene::onExitTransitionDidStart();
};

void ___FILEBASENAMEASIDENTIFIER___::onEnter()
{
    Scene::onEnter();
};

void ___FILEBASENAMEASIDENTIFIER___::onExit()
{
    Scene::onExit();
};