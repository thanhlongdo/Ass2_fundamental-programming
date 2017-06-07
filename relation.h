#ifndef RELATION_H_
#define RELATION_H_
#include<iostream>
#include<string>
using namespace std;

//bảng ánh xạ giữa user và account
struct user_account
{
	int user_id;
	string account_no;
};

//bảng ánh xạ giữa account và role
struct account_role
{
	string account_no;
	int role=4;
};
#endif