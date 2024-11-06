import QtQuick 2.15
import QtQuick.Controls 2.1

import "."

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("3D Shower")

    Rectangle {
        anchors.fill: parent
        color: "lightblue"

        Ctrl {
            anchors {
                right: parent.right
            }
        }

        Show {
            anchors {
                left: parent.left
            }
        }

        Text {
            anchors.centerIn: parent
            text: "Main Qml"
            font.pointSize: 24
        }
    }
}
