#ifndef BUTTONHANDLER_H
#define BUTTONHANDLER_H

#include <QObject>

class ButtonHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int value READ getValue NOTIFY valueChanged)
public:
    explicit ButtonHandler(QObject *parent = nullptr);

signals:
    void valueChanged(void);
public slots:
    Q_INVOKABLE void inc(void);
    Q_INVOKABLE void dec(void);
private:
    int getValue(void);
    int value = 0;
};

#endif // BUTTONHANDLER_H
