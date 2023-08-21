
#ifndef __UTIL__
    #define __UTIL__

    namespace Util{
        namespace SubUtil{
            
        }
        void testNS();    //Util::test()
    }

    
    namespace UtilNameReallyTooLong{
    }
    // namespace UNRTL = UtilNameReallyTooLong;
    // using  UNRTL = UtilNameReallyTooLong;

    void testNSGlobal();        //test()
#endif