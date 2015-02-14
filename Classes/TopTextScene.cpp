//
//  TopTextScene.cpp
//  TextLabel
//
//  Created by MAEDAHAJIME on 2015/02/14.
//
//

#include "TopTextScene.h"
// UI GUI用
USING_NS_CC;     // cocos2d
using namespace ui;
using namespace std; // String*

// _/_/_/ コンストラクタ プロパティー _/_/_/
TopTextScene::TopTextScene()
{
    
}

// MainScene デストラクタで解放 メモリーリークを防ぐ
TopTextScene::~TopTextScene()
{
    
}

// createSceneはLayerをSceneに貼り付けて返すクラスメソッドです。
// 自分自身(TopTextScene)を生成し、空のSceneに貼り付けて返す簡単な処理を行っているだけです。
// これでほかのシーンからの遷移が楽に行えます。
Scene* TopTextScene::createScene()
{
    
    auto scene = Scene::create();
    auto layer = TopTextScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool TopTextScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    // 画面サイズを取得
    Size winSize = Director::getInstance()->getVisibleSize();
    // バックグランドカラー
    auto background = LayerColor::create(Color4B::BLUE,
                                         winSize.width,
                                         winSize.height);
    // バックグランドカラー 第2引数は表示順
    this->addChild(background, 0);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // string型 文字（名前）
    auto label = Label::createWithSystemFont("C++型", "arial", 70);
    // ラベルの色:ホワイト
    label->setColor(Color3B::WHITE);
    //画面の中央に表示
    label->setPosition(Point(winSize.width/2, winSize.height/1.2));
    // Layerにラベルを追加
    this->addChild(label);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // Label1::createWithSystemFont("文字列", "フォントの種類", 文字サイズ);
    // string型ラベル
    auto label1 = Label::createWithSystemFont("string型", "arial", 70);
    // ラベルの色:ホワイト
    label1->setColor(Color3B::WHITE);
    //画面の中央に表示
    label1->setPosition(Point(winSize.width/2 - 300, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label1);
    
    
    // Label::createWithSystemFont("文字列", "フォントの種類", 文字サイズ);
    // string型 文字
    string _string = "Cocos2d-x";
    auto label01 = Label::createWithSystemFont(_string, "arial", 70);
    // ラベルの色:ホワイト
    label01->setColor(Color3B::WHITE);
    //画面の中央に表示
    label01->setPosition(Point(winSize.width/2 + 200, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label01);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // int型ラベル
    auto label2 = Label::createWithSystemFont("int型", "arial", 70);
    // ラベルの色:ホワイト
    label2->setColor(Color3B::WHITE);
    //画面の中央に表示
    label2->setPosition(Point(winSize.width/2 - 300, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label2);
    

    // int型 数字
    int _int = 12345;
    auto label02 = Label::createWithSystemFont(StringUtils::toString(_int),"arial", 70);
    // ラベルの色:ホワイト
    label02->setColor(Color3B::WHITE);
    //画面の中央に表示
    label02->setPosition(Point(winSize.width/2 + 200, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label02);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // bool型ラベル
    auto label3 = Label::createWithSystemFont("bool型", "arial", 70);
    // ラベルの色:ホワイト
    label3->setColor(Color3B::WHITE);
    //画面の中央に表示
    label3->setPosition(Point(winSize.width/2 - 300, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label3);
    
    // bool型
    bool _bool = true;
    auto label03 = Label::createWithSystemFont(StringUtils::toString(_bool),"arial", 70);
    // ラベルの色:ホワイト
    label03->setColor(Color3B::WHITE);
    //画面の中央に表示
    label03->setPosition(Point(winSize.width/2 + 200, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label03);

    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // float型ラベル
    auto label4 = Label::createWithSystemFont("float型", "arial", 70);
    // ラベルの色:ホワイト
    label4->setColor(Color3B::WHITE);
    //画面の中央に表示
    label4->setPosition(Point(winSize.width/2 - 300, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label4);
    
    // float型
    float _float = 1.2345f;
    auto label04 = Label::createWithSystemFont(StringUtils::toString(_float),"arial", 70);
    // ラベルの色:ホワイト
    label04->setColor(Color3B::WHITE);
    //画面の中央に表示
    label04->setPosition(Point(winSize.width/2 + 200, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label04);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // double型ラベル
    auto label5 = Label::createWithSystemFont("double型", "arial", 70);
    // ラベルの色:ホワイト
    label5->setColor(Color3B::WHITE);
    //画面の中央に表示
    label5->setPosition(Point(winSize.width/2 - 300, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label5);
    

    // double型
    double _double = 1.2345;
    auto label05 = Label::createWithSystemFont(StringUtils::toString(_double),"arial", 70);
    // ラベルの色:ホワイト
    label05->setColor(Color3B::WHITE);
    //画面の中央に表示
    label05->setPosition(Point(winSize.width/2 + 200, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label05);
    
    // ログ表示
    log("string: %s", _string.c_str());
    log("int: %d", _int);
    log("bool: %d", _bool);
    log("float: %f", _float);
    log("double: %f", _double);
    
    return true;
}

