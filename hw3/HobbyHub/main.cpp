#include <QApplication>
#include <QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "tests.h"
#include "greetingpage.h"

int main(int argc, char *argv[])
{


       freopen("testing.log", "w", stdout); // тесты к окну greetingpage
       QApplication a(argc, argv);
       QTest::qExec(new Test_QLineEdit, argc, argv);
       QTest::qExec(new Test_QPushButton, argc, argv);
       QTest::qExec(new TestMainWindow, argc, argv);
       return 0;

//    QApplication a(argc, argv); //запуск приложения
//    GreetingPage w;
//    w.show();
//    return a.exec();

}





//#include <QApplication>
//#include <QTest>
//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include "test_smart.h"

//using namespace std;

//int main(int argc, char *argv[])
//{
//    freopen("testing.log", "w", stdout);
//    QApplication a(argc, argv);
//    QTest::qExec(new Test_Smart, argc, argv);
//    return 0
//}


//#include "greetingpage.h"
//#include <QApplication>
//#include <QTest>
//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include "tests.h"
////#include "test_qlineedit.h"
//#include "test_smart.h"


//int main(int argc, char *argv[])
//{

//    freopen("testing.log", "w", stdout);
//    QApplication a(argc, argv);
//    QTest::qExec(new Test_Smart, argc, argv);
//    return 0;

////    freopen("testing.log", "w", stdout);
////    QApplication a(argc, argv);
////    QTest::qExec(new Test_Smart, argc, argv);
////    std::cout << std::endl;
////    QTest::qExec(new Test_QLineEdit, argc, argv);
////    return 0;
////    QApplication a(argc, argv);
////    GreetingPage w;
////    w.show();
////    return a.exec();
//}
