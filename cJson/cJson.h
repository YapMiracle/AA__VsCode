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
/*
功能:创建一个string值为name的cJSON_ False节 点，并添加到object
*/
#define cJson_AddFalseToObject(object, name) \
    cJson_AddItemTo0bject (object, name, cJson_Create_False()) 

/*创建一个string值为name的cJSON_ True 节点，并添加到object节点*/
#define cJson_AddTrueTo0bject(object, name) \
    cJson_AddItemTo0bject(object, name, cJson_Create_True() )
/*创建一个string值为name的cJSON Bool/False 节点，并添加到object节点*/
#define cJson_AddFalseTo0bject(object, name, b) \ 
    cJson_AddItemTo0bject(object, name, cJson_Create_Bool(b))
/*创建一个string值为name的cJSON NULL节点，并添加到object节点*/
#define cJson_AddNULLTo0bject(object, name) \
    cJson_AddItemTo0bject(object, name, cJson_Create_Null ())
/*创建一个string值为name的cJSON Number节点，并添加到object节点*/
#define cJson_AddNumberTo0bject(object, name, number) \
    cJson_AddItemTo0bject(object, name, cJson_Create_Number (number))
/*创建一个string值为name的cJSON String节点，并添加到object节点*/
#define cJson_AddStringTo0bbect (object, name, s) \
    cJson_AddItemTo0bject(object, name,cJson_Create_String(s))
#define cJson_SetIntValue(object, val)\
    (object)?((object)->valueInt=(object)->valueDouble=(val)):(val)
#define cJson_SetNumberValue(object, val)\
    (object)?((object)->valueInt=(object)->valueDouble=(val)):(val)
    
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

void cJson_Delete(char * c);

cJson *cJson_Create_object(void);
cJson *cJson_Create_String(const char * string);
cJson *cJson_Create_Number(double number);
cJson *cJson_Create_Array(void);
cJson *cJson_Create_Bool(int b);
cJson *cJson_Create_True(void);
cJson *cJson_Create_False(void);
cJson *cJson_Create_Null(void);

void cJson_AddItemToObject(cJson *object, char * string, cJson * item);
void cJson_AddIdemToArray(cJson *array, cJson * item);


#endif // c_Json_H_