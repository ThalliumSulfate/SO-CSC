from datafiles import datafile

from path import filePath

newPath = filePath + '/data/abilities'


@datafile(newPath + '/{self.aType}/{self.key}.yml')
class Ability:
    key: str
    name: str
    desc: str
    aType: str

    def __init__(self, key='', aType='', name='', desc=''):
        self.name = name
        self.desc = desc
        self.aType = aType
        if key == '':
            temp = name.replace(" ", "_")
            self.key = temp
        else:
            self.key = key

    def getName(self):
        return self.name

    def __str__(self):
        return f'{self.name} \n\tDescription: {self.desc}'