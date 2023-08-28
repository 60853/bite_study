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
	PeoInfo data[MAX];	//����˵���Ϣ
	int count;			//��¼��ǰͨѶ¼��ʵ������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//���ͨѶ¼
void AddContact(Contact* pc);

//��ӡͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//ɾ��ͨѶ¼��Ϣ
void DelContact(Contact* pc);

//����ͨѶ¼��Ϣ
void SearchContact(Contact* pc);

//�޸�ͨѶ¼��Ϣ
void ModifyContact(Contact* pc);

//����ͨѶ¼����Ϣ
void SortContact(Contact* pc);