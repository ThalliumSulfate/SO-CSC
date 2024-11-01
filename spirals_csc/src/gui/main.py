import sys

from PyQt6.QtCore import *
from PyQt6.QtWidgets import *


class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle('Spirals CSC')

    def __call__(self):
        return self

class App(QApplication):
    def __init__(self):
        super().__init__(sys.argv)
        self.geometry = QApplication.primaryScreen().geometry()
        self.window = (Window())

    def window(self):
        return self.window

    def UI(self, box):
        self.window.setLayout(box)
        self.window.setGeometry(self.geometry)

    def run(self):
        self.window.show()

        self.exec()

def mainUI(isCharacters, app):
    noCharactersLabel = QLabel(text="No Characters...")
    noCharactersLabel.setAlignment(Qt.AlignmentFlag.AlignCenter)
    noCharactersLabel.resize(300, 30)
    createButton = QPushButton("Create Characters")
    createButton.resize(300, 300)

    w1 = QWidget()
    w2 = QWidget()
    w3 = QWidget()

    mainBox = QGridLayout()
    mainBox.addWidget(w1, 0, 0)
    mainBox.addWidget(w2, 0, 2)
    mainBox.addWidget(w3, 2, 0)
    mainBox.addWidget(noCharactersLabel, 1, 1)
    mainBox.addWidget(createButton, 3, 1)

    app.UI(mainBox)