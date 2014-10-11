//
//  CAppData.h
//  ThingsLocationProject
//
//  Created by Kirill_Mag on 9/28/14.
//
//

#ifndef __ThingsLocationProject__CAppData__
#define __ThingsLocationProject__CAppData__

#include "cocos2d.h"
#include "CGPSPoint.h"

class CAppData
    : public cocos2d::CCObject
{
public:
    CAppData();
    
    virtual ~CAppData();
    
    friend class CAppCore;
private:
    CC_SYNTHESIZE_READONLY(const CGPSPoint*, mKeyCoordinate, KeyCoordinate)
    
    CC_SYNTHESIZE_READONLY(const CGPSPoint*, mCarCoordinate, CarCoordinate)
    
    CC_SYNTHESIZE_READONLY(const CGPSPoint*, mMyCoordinate, MyCoordinate)
    
    CC_SYNTHESIZE(bool, mIsTakeKey, IsTakeKey)
};

#endif /* defined(__ThingsLocationProject__CAppData__) */
