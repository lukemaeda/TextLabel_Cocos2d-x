//
//  TopTextScene.h
//  TextLabel
//
//  Created by MAEDAHAJIME on 2015/02/14.
//
//

#ifndef __TextLabel__TopTextScene__
#define __TextLabel__TopTextScene__

#include "cocos2d.h"
USING_NS_CC;

class TopTextScene :public Layer
{
protected:
    // コンストラクタ
    TopTextScene();
    // デストラクタ
    virtual ~TopTextScene();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(TopTextScene);
};

#endif /* defined(__TextLabel__TopTextScene__) */
