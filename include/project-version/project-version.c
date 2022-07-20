#include <project-version.h>
#include <stdio.h>

char *getProjectName()
{
    return "embedded-c-project-template";
}

char *getProjectVersion()
{
    return "0.1.0";
}

char *getProjectVersionMajor()
{
    return "0";
}

char *getProjectVersionMinor()
{
    return "1";
}

char *getProjectVersionPatch()
{
    return "0";
}

void printVersion()
{
    printf("%s\nVersion: %s\n", getProjectName(), getProjectVersion());
}
