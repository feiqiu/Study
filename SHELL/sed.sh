#!/bin/bash

#sed��ϰ
#��һ�е������������ַ���"drink tea"
sed '1,3a drink tea' sed_test.file  

#��һ�д���ΪHi
sed '1c Hi' sed_test.file

#ɾ����һ��
sed '1d' ab
#ɾ�����һ��
sed '$d' ab
#ɾ��1��2��
sed '1,2d' ab
#ɾ��2�����һ��
sed '2,$d' ab

