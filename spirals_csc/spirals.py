import os.path

from src.data.data_management import loadConstantData, naturalAbilityList, perkAbilityList
from src.gui.main import *
from src.modules.Ancestry import Ancestry

loadConstantData()

human = Ancestry(name='Human', natAbilities=[naturalAbilityList[0].key], perkAbilities=[perkAbilityList[0].key])

app = App()

app.run()