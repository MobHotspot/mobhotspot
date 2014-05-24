// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    id: rectangle1
    width: 100
    height: 62

    Image {
        id: image1
        anchors.fill: parent
        source: "images.jpg"

        Text {
            id: text1
            x: 32
            y: 17
            width: 36
            height: 17
            color: "#d7d2d2"
            text: qsTr("create")
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            wrapMode: Text.WordWrap
            font.pixelSize: 25
        }
    }
}
