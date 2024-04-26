#pragma warning(disable:6387)//使用fgets前应判断指针为空NULL
#pragma warning(disable:6031)//scanf
#pragma warning(disable:6001)//变量初始化
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
//D:/Work/Subject/C/代码/黑马程序员/文件/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<ctype.h>
#include<conio.h>
#include<sys/types.h>//此
#include<sys/stat.h>//此

//stat("文件路径",结构体变量指针)   eg:stat("文件路径",&st)
//struct stat st;//文件状态结构体变量,需写出本行

/*
struct stat {
	dev_t	st_dev:		//文件的设备编号。
	ino_t	st_ino:		//节点
	mode_t	st_mode:	//文件的类型和存取的权限
	nlink_t	st_nlink;	//连到该文件的硬连接数目,刚建立的文件值为1~
	uid_t	st_uid;		//用户ID
	gid_t	st_gid;		//组ID
	dev_t	st_rdev:	//(设备类型)若此文件为设备文件,则为其设备编号
	off_t	st_size:	//文件字节数(文件大小)
	unsigned long st_blksize://块大小(文件系统的I/O缓中区大小)
	unsigned long st_blocks: //块数
	time_t	st_atime	//最后一次访问时间
	time t	st_mtime	//最后一次修改时间
	time t	st_ctime	//最后一次改变时间(指属性)
}
*/

int main58()
{
	return EXIT_SUCCESS;
}