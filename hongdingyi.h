//
// Created by 杨敬华 on 2022/11/26.
//

#ifndef UNTITLED4_HONGDINGYI_H  //如果没有定义宏定义这个宏
#define UNTITLED4_HONGDINGYI_H  //我就定义i这个宏


#ifndef isRelease //如果没有isRelease这个宏
#define isRelease 0//是否是正式环境【我们定义这个宏】
#if isRelease == true
#define  RELEASW;
#elif isRelease == false
#define BEBUG
#endif
#endif
#endif //UNTITLED4_HONGDINGYI_H //结束if
