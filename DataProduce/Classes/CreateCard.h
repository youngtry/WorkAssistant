//
//  CreateCard.hpp
//  DataProduce
//
//  Created by tianrunyan on 16/3/3.
//
//

#ifndef CreateCard_hpp
#define CreateCard_hpp

#include "cocos2d.h"
using namespace cocos2d;
using namespace std;

class CreateCard : public Layer{
    
public:
    static Scene* createScene();
    
    virtual bool init();
    
    void createAllCard();
    
    CREATE_FUNC(CreateCard);
    
private:
    
    Size m_WinSize;
    
};

#endif /* CreateCard_hpp */
