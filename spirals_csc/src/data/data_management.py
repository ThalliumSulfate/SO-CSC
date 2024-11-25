import os
from os import walk
from datafiles import Missing
from path import filePath, appPath

from src.modules.Ability import Ability
from src.modules.Ancestry import Ancestry, naturalAbilityList, perkAbilityList
from src.modules.character import Character

characterList = []
ancestryList = []


def loadConstantData():
    dPath = filePath + '/data/abilities'

    directories = next(walk(dPath))[1]

    for dir in directories:
        files = next(walk(os.path.join(dPath, dir)), (None, None, []))[2]
        for file in files:
            restored = Ability(file.replace(".yml", ""), dir, Missing, Missing)
            match dir:
                case 'natural':
                    naturalAbilityList.append(restored)
                case 'perk':
                    perkAbilityList.append(restored)

    dPath = filePath + '/data/ancestries'


    files = next(walk(dPath), (None, None, []))[2]
    for file in files:
        restored = Ancestry(file.replace(".yml", ""), Missing)
        ancestryList.append(restored)

def hasData():
    data = False
    dPath = appPath + '/characters/'

    if not os.path.isdir(dPath):
       os.mkdir(dPath)

    filenames = next(walk(dPath), (None, None, []))[2]

    if not len(filenames) == 0:
        data = True
        characterList.clear()
        for fileName in filenames:
            restored = Character(fileName.replace(".yml", ""), Missing, Missing)
            characterList.append(restored)

    return data