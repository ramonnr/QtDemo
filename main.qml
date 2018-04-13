import QtQuick 2.10
import QtQuick.Controls 2.2
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("A Cellink Qt demo :)")

    RoundButton {
        id: plus
        x: 455
        y: 180
        text: "+"
        onClicked:{
            console.log('you can also have multiple statements')
            buttonHandler.inc()
        }
    }

    RoundButton {
        id: minus
        x: 145
        y: 180
        text: "-"
        onClicked: buttonHandler.dec()
    }

    TextField {
        id: currentValue
        x: 220
        y: 180
        text: "" + buttonHandler.value
        placeholderText: "Output field"
        horizontalAlignment: Text.AlignHCenter
    }

    TextArea {
        id: textArea
        x: 274
        y: 132
        text: qsTr("Current value")
    }

    TextField {
        id: changesText
        x: 220
        y: 279
        text: "" + changeListener.changes
        horizontalAlignment: Text.AlignHCenter
        placeholderText: "Output field"
    }

    TextArea {
        id: textArea1
        x: 255
        y: 238
        text: qsTr("Total times changed")
    }
}
