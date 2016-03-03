//
//  CreateCard.cpp
//  DataProduce
//
//  Created by tianrunyan on 16/3/3.
//
//

#include "CreateCard.h"

Scene* CreateCard::createScene(){
    auto scene = Scene::create();
    auto layer = CreateCard::create();
    scene->addChild(layer);
    return scene;
}

bool CreateCard::init(){
    if(!Layer::init()){
        return false;
    }
    m_WinSize = Director::getInstance()->getWinSize();
    LayerColor* bg = LayerColor::create(Color4B::WHITE, m_WinSize.width, m_WinSize.height);
    bg->setPosition(Vec2::ZERO);
    addChild(bg);
    
    MenuItem* createbtn = MenuItemSprite::create(Sprite::create("button/buttondi_n.png"), Sprite::create("button/buttondi_d.png"));
    createbtn->setCallback(CC_CALLBACK_0(CreateCard::createAllCard, this));
    createbtn->setPosition(Vec2(m_WinSize.width/2, m_WinSize.height/2));
    
    Menu* menu = Menu::create(createbtn, NULL);
    menu->setPosition(Vec2::ZERO);
    addChild(menu);
    
    
    
    return true;
}

void CreateCard::createAllCard(){
    log("createAllCard");
}