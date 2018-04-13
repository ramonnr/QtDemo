#ifndef CHANGELISTENER_H
#define CHANGELISTENER_H
#include <QObject>

class ChangeListener : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int changes READ getNChanges NOTIFY nChangesChanged)
public:
    ChangeListener(QObject* parent = nullptr) : QObject(parent) {}
public slots:
    void updateChanges(void){
        nChanges++;
        emit nChangesChanged();
    }
signals:
    void nChangesChanged(void);
private:
    int getNChanges(void){  return nChanges;    }
    int nChanges = 0;
};

#endif // CHANGELISTENER_H
