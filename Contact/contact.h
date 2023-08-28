#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 30

typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];	//存放人的信息
	int count;			//记录当前通讯录的实际人数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//添加通讯录
void AddContact(Contact* pc);

//打印通讯录信息
void ShowContact(const Contact* pc);

//删除通讯录信息
void DelContact(Contact* pc);

//搜索通讯录信息
void SearchContact(Contact* pc);

//修改通讯录信息
void ModifyContact(Contact* pc);

//排序通讯录的信息
void SortContact(Contact* pc);