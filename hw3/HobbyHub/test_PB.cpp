#include <QtTest/QtTest>
#include <QPushButton>

class TestPushButton : public QObject
{
    Q_OBJECT

private slots:
    void testButtonClick()
    {
        // создаем кнопку
        QPushButton button("Button");

        // проверяем, что кнопка не нажата
        QCOMPARE(button.isDown(), false);

        // эмулируем нажатие кнопки
        QTest::mouseClick(&button, Qt::LeftButton);

        // проверяем, что кнопка нажата
        QCOMPARE(button.isDown(), true);
    }
};

