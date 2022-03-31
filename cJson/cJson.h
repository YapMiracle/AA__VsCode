#pragma once
#ifndef _CJSON_H_
#define _CJSON_H_


#define cJson_False     0
#define cJson_True      1
#define cJson_NULL      2
#define cJson_Number    3
#define cJson_String    4
#define cJson_Array     5
#define cJson_Object    6

typedef struct cJson
{
    struct cJson *next, *prev;
    struct cJson *child;

    int type;

    char* valueString;
    int valueInt;
    double valueDouble;

    char *string;
};

// prase function return root
cJson * cJson_Prase(const char *value);
//traverse
char * cJson_Print(cJson * item);

void cJson_Delete()

#endif // c_Json_H_