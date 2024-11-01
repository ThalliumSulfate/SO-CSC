from PyQt6.QtCore import Qt
from PyQt6.QtWidgets import QLabel, QVBoxLayout

from src.gui.main import *

app = App()

mainUI(False, app)

app.run()