find & grep

find�������ڣ���һ��Ŀ¼������Ŀ¼���������ļ�

find [-H] [-L] [-P] [-D debugopts] [-Olevel] [path��] [expression]
���ü򻯣�
find [path��] [expression]
path��find���������ҵ�Ŀ¼·����������.����ʾ��ǰĿ¼����/����ʾϵͳ��Ŀ¼
expression��expression���Է�Ϊ������-options [-print -exec -ok ��]��

-options��ָ��find����ĳ���ѡ��½���ϸ����
-print��find���ƥ����ļ��������׼���
-exec��find�����ƥ����ļ�ִ�иò�����������shell���
��Ӧ�������ʽΪ��command�� {  } ;��ע��{   }�ͣ�֮��Ŀո�

find ./ -size 0 -exec rm {} ; ɾ���ļ���СΪ����ļ� 
������������������rm -i find ./ -size 0  �� find ./ -size 0 | xargs rm -f &��
	
Ϊ����ls -l�����г���ƥ�䵽���ļ������԰�ls -l�������find�����-execѡ���У�
	find . -type f -exec ls -l {  } ;
��/logsĿ¼�в��Ҹ���ʱ����5����ǰ���ļ���ɾ�����ǣ�
	find /logs -type f -mtime +5 -exec rm {  } ;
	
-ok����exec��������ͬ��ֻ������һ�ָ�Ϊ��ȫ��ģʽ��ִ�иò�����������shell���
��ִ��ÿһ������֮ǰ�����������ʾ�����û���ȷ���Ƿ�ִ�С�
find . -name ��*.conf��  -mtime +5 -ok rm {  } ; 
�ڵ�ǰĿ¼�в��������ļ�����.LOG��β������ʱ����5�����ϵ��ļ�����ɾ�����ǣ�ֻ������ɾ��֮ǰ�ȸ�����ʾ

find����ĳ���ѡ��
1. -name
�����ļ��������ļ�

2. -perm
�����ļ�Ȩ�޲����ļ�

3.-prune

4.-user

5.-group

6.-mtime -n   +n
�����ļ��ĸ���ʱ������ļ�
-n��ʾ�ļ�����ʱ�������n������
+n��ʾ�ļ�����ʱ�������n����ǰ

7.-nogroup

8.-nouser

9.-newer file1 ! file2
���Ҹ���ʱ����ļ�file1�µ����ļ�file2�ɵ��ļ�

10.-type
����ĳһ���͵��ļ�
	b-���豸�ļ�
	d-Ŀ¼
	c-�ַ��豸�ļ�
	p-�ܵ��ļ�
	l-���������ļ�
	f-��ͨ�ļ�
	
11.-size

12.-depth

13.-mouth

14.-follow

find��xargs
��ʹ��find�����-execѡ���ƥ�䵽���ļ�ʱ�� find�������ƥ�䵽���ļ�һ�𴫵ݸ�execִ�С�����Щϵͳ���ܹ����ݸ�exec������������ƣ�������find�������м�����֮�󣬾ͻ����������󡣴�����Ϣͨ���ǡ�������̫�����򡰲�����������������xargs������ô����ڣ��ر�����find����һ��ʹ�á�

find�����ƥ�䵽���ļ����ݸ�xargs�����xargs����ÿ��ֻ��ȡһ�����ļ�������ȫ��������-execѡ�������������������ȴ������Ȼ�ȡ��һ�����ļ���Ȼ������һ��������˼�����ȥ��

grep����
�����ı�
grep (global search regular expression(RE) and print out the line,ȫ�������������ʽ�����д�ӡ����)��һ��ǿ����ı��������ߣ�����ʹ���������ʽ�����ı�

grep [OPTIONS] PATTERN [FILE��]
grep [OPTIONS] [-e PATTERN | -f FILE] [FILE��]

grep�������ʽԪ�ַ���(������)
^ ê���еĿ�ʼ �磺��^grep��ƥ��������grep��ͷ���С�
$ ê���еĽ��� �磺��grep$��ƥ��������grep��β���С�
��������

grep����ĳ���ѡ�ʵ��

-?

ͬʱ��ʾƥ�������µģ��У��磺grep -2 pattern filenameͬʱ��ʾƥ���е�����2�С�

-b���Cbyte-offset

��ӡƥ����ǰ���ӡ�������ڵĿ���롣

-c,�Ccount

ֻ��ӡƥ�������������ʾƥ������ݡ�

-f File���Cfile=File

���ļ�����ȡģ�塣���ļ��а���0��ģ�壬����ʲô����ƥ�䡣

-h���Cno-filename

����������ļ�ʱ������ʾƥ���ļ���ǰ׺��

-i���Cignore-case

���Դ�Сд���

-q���Cquiet

ȡ����ʾ��ֻ�����˳�״̬��0���ʾ�ҵ���ƥ����С�

-l���Cfiles-with-matches

��ӡƥ��ģ����ļ��嵥��

-L���Cfiles-without-match

��ӡ��ƥ��ģ����ļ��嵥��

-n���Cline-number

��ƥ�����ǰ���ӡ�кš�

-s���Csilent

����ʾ���ڲ����ڻ����޷���ȡ�ļ��Ĵ�����Ϣ��

-v���Crevert-match

��������ֻ��ʾ��ƥ����С�

-w���Cword-regexp

��������ã��Ͱѱ���ʽ��Ϊһ������������

-V���Cversion

��ʾ�����汾��Ϣ��

=====

ls -l | grep ��^a�� ͨ���ܵ�����ls -l��������ݣ�ֻ��ʾ��a��ͷ���С�

grep ��test�� d* ��ʾ������d��ͷ���ļ��а���test���С�

grep ��test�� aa bb cc ��ʾ��aa��bb��cc�ļ���ƥ��test���С�

grep ��[a-z]�� aa ��ʾ���а���ÿ���ַ���������5������Сд�ַ����ַ������С�

grep ��w(es)t.*�� aa ���west��ƥ�䣬��es�ͱ��洢���ڴ��У������Ϊ1��Ȼ������������ַ�(.*)����Щ�ַ��������������һ��es()���ҵ�����ʾ���С������egrep��grep -E���Ͳ��á����Ž���ת�壬ֱ��д�ɡ�w(es)t.*���Ϳ����ˡ�

grep -i pattern files �������ִ�Сд��������Ĭ��������ִ�Сд

grep -l pattern files ��ֻ�г�ƥ����ļ�����

grep -L pattern files ���г���ƥ����ļ�����

grep -w pattern files ��ֻƥ���������ʣ��������ַ�����һ����(��ƥ�䡮magic���������ǡ�magical��)��

grep -C number pattern files ��ƥ��������ķֱ���ʾ[number]�У�

grep pattern1 | pattern2 files ����ʾƥ�� pattern1 �� pattern2 ���У�

grep pattern1 files | grep pattern2 ����ʾ��ƥ�� pattern1 ��ƥ�� pattern2 ���С�

