/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __TestCpp__UILoadingBarTest__
#define __TestCpp__UILoadingBarTest__

#include "../UIScene.h"

class UILoadingBarTest_Left : public UIScene
{
public:
    UILoadingBarTest_Left();
    ~UILoadingBarTest_Left();
    bool init();
    void update(float delta);

	virtual void previousCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void restartCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void nextCallback(Ref* sender, Widget::TouchEventType type) override;
    
protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarTest_Left)
    int _count;
};

class UILoadingBarTest_Right : public UIScene
{
public:
    UILoadingBarTest_Right();
    ~UILoadingBarTest_Right();
    bool init();
    void update(float delta);

	virtual void previousCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void restartCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void nextCallback(Ref* sender, Widget::TouchEventType type) override;
    
protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarTest_Right)
    int _count;
};

class UILoadingBarTest_Left_Scale9 : public UIScene
{
public:
    UILoadingBarTest_Left_Scale9();
    ~UILoadingBarTest_Left_Scale9();
    bool init();
    void update(float delta);

	virtual void previousCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void restartCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void nextCallback(Ref* sender, Widget::TouchEventType type) override;
    
protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarTest_Left_Scale9)
    int _count;
};

class UILoadingBarTest_Right_Scale9 : public UIScene
{
public:
    UILoadingBarTest_Right_Scale9();
    ~UILoadingBarTest_Right_Scale9();
    bool init();
    void update(float delta);

	virtual void previousCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void restartCallback(Ref* sender, Widget::TouchEventType type) override;
	virtual void nextCallback(Ref* sender, Widget::TouchEventType type) override;
    
protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarTest_Right_Scale9)
    int _count;
};

class UILoadingBarTest_Scale9_State_Change : public UIScene
{
public:
    UILoadingBarTest_Scale9_State_Change();
    ~UILoadingBarTest_Scale9_State_Change();
    bool init();

protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarTest_Scale9_State_Change)
    int _count;
};

class UILoadingBarReloadTexture : public UIScene
{
public:
    UILoadingBarReloadTexture();
    ~UILoadingBarReloadTexture();
    void update(float dt);
    bool init();
    
protected:
    UI_SCENE_CREATE_FUNC(UILoadingBarReloadTexture);
    int _count;
    
};

#endif /* defined(__TestCpp__UILoadingBarTest__) */
