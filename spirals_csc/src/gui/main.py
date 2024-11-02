import sys

from PyQt6.QtCore import *
from PyQt6.QtWidgets import *

from spirals_csc.src.data.data_management import hasData


class App(QApplication):
    def __init__(self):
        super().__init__(sys.argv)
        self.geometry = QApplication.primaryScreen().geometry()
        self.window = (MainWindow(self.geometry))

    def setGeometry(self, geometry):
        self.geometry = geometry
        self.window.setGeometry(self.geometry)

    def run(self):
        self.window.initUI()
        self.window.show()

        self.exec()

class MainWindow(QWidget):
    def __init__(self, geometry):
        super().__init__()
        self.setGeometry(geometry)
        self.setWindowTitle('Spirals CSC')

    def initUI(self):
        box = QGridLayout()

        w1 = QWidget()

        if not hasData():
            noCharacters = QLabel("No characters created", self)
            noCharacters.setAlignment(Qt.AlignmentFlag.AlignCenter)
            box.addWidget(noCharacters, 1, 1)
        else:
            list = QListWidget(parent=self)
            box.addWidget(list, 1, 1)

        createButton = QPushButton('Create Character', self)
        createButton.clicked.connect(self.create_character)

        box.addWidget(w1, 2, 0)
        box.addWidget(w1, 2, 2)
        box.addWidget(createButton, 2, 1)

        self.setLayout(box)
        self.show()


    def create_character(self):
        self.widget = CreateWindow(self.geometry())
        self.close()

class CreateWindow(QWidget):
    def __init__(self, geometry):
        super().__init__()
        self.setWindowTitle('Create Character')
        self.setGeometry(geometry)
        self.initUI()

    def initUI(self):
        box = QGridLayout()

        self.setLayout(box)
        self.show()