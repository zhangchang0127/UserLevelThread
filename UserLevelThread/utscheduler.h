#pragma once
#include "uthread.h"

//������
//TODO:���˴�����������Ϊ����  uThNormal��Ϊ���м��ɣ���������Ķ�
typedef struct uThreadScheduler {
	struct uThread * uThdNormal;//��ִ���߳�
	struct uThread * uThdSleep;//˯�����߳�
	struct uThread * uThdFinish;//ִ������߳�
}*utSch;

utSch utSchedulerCreate();
void utSchedulerDestory(utSch sch);
void utSchAddUthd(utSch sch, uThd thd);
void utSchStart(utSch sch);