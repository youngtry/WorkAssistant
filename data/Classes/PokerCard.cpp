//
//  PokerCard.cpp
//  DataProduce
//
//  Created by tianrunyan on 16/3/8.
//
//

#include "PokerCard.h"

PokerCard::PokerCard(int number,PokerColor color,int size){
    Sprite::init();
    m_Number = number;
    m_Color = color;
    m_Value = 0;
    m_Size = size;
    m_CardSize.width = 0;
    m_CardSize.height = 0;
    initCard();
}

PokerCard::PokerCard(){
}

PokerCard::~PokerCard(){
}

PokerCard* PokerCard::createPokerCard(int number, PokerColor color,int size){
    PokerCard * card = new PokerCard(number,color,size);
    if (card && card->init())
    {
        return card;
    }
    CC_SAFE_DELETE(card);
    return NULL;
}

bool PokerCard::init(){
    if(!Sprite::init()){
        return false;
    }
    return true;
}

void PokerCard::initCard(){
    this->removeAllChildrenWithCleanup(true);
    
    int num = m_Number+((int)(m_Color))*13;
    if(m_Color  == COLOR_XIAOWANG){
        num = 53;
    }else if (m_Color == COLOR_DAWANG){
        num = 54;
    }
    CCLOG("cardnum  = %d",num);
    m_Card = Sprite::create(__String::createWithFormat("Card/%d.png",num)->getCString());
    m_Card->setPosition(Vec2(0, 0));
    m_Card->setAnchorPoint(Vec2(0, 0));
    this->addChild(m_Card);
    
    m_CardSize = m_Card->getContentSize();
    
}

