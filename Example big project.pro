TEMPLATE = subdirs

SUBDIRS += \
    SharedLib2 \
    ConsoleApp1 \
    SharedLib3

# where to find the sub projects - give the folders
SharedLib2.subdir = SharedLib2
SharedLib3.subdir = SharedLib3
ConsoleApp1.subdir = ConsoleApp1

# what subproject depends on others
ConsoleApp1.depends = SharedLib2 SharedLib3
