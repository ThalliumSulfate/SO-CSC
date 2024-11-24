import os
from path import filePath
from typing import List

from datafiles import datafile

naturalAbilityList = []
perkAbilityList = []

newPath = filePath + '/data/ancestries'

@datafile(newPath + '/{self.key}.yml')
class Ancestry:
    key: str
    name: str
    natAbilities : List[str]
    perkAbilities : List[str]

    def __init__(self, key='', name='', natAbilities=None, perkAbilities=None):
        self.name = name
        self.natAbilities = natAbilities
        self.perkAbilities = perkAbilities
        if key == '':
            temp = name.replace(" ", "_")
            self.key = temp
        else:
            self.key = key

    def __str__(self):
        str = f'{self.name}: \nnatural abilities:'
        for i in naturalAbilityList:
            if self.natAbilities.__contains__(i.key):
                str += f'\n\t{i.__str__()}'
        str += f'\nperk abilities:'
        for i in perkAbilityList:
            if self.perkAbilities.__contains__(i.key):
                str += f'\n\t{i.__str__()}'
        return str


