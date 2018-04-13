#include "buttonhandler.h"

ButtonHandler::ButtonHandler(QObject *parent) : QObject(parent) {    }

void ButtonHandler::inc(void){
    value ++;
    emit valueChanged();
}

void ButtonHandler::dec(void){
    value--;
    emit valueChanged();
}

int ButtonHandler::getValue(void){
    return value;
}
