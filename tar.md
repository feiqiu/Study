2017-03-17
gzip,bzip2,tar,zip����ʹ�÷������-maoj2008-ChinaUnix����
http://blog.chinaunix.net/uid-20779720-id-2547669.html

linux�ʼ� �ļ���ѹ�����ѹ��gzip��bzip2��xz��zip&unzip��tar�����tar�����ѹ������
http://www.mamicode.com/info-detail-1166427.html

tar�������ϸ���� - eros��linuxƽ̨�������Ͽ� - ����Ƶ�� - CSDN.NET
http://blog.csdn.net/eroswang/article/details/5555415/


1.ѹ�����ѹ
ѹ���ļ������ʡ���紫����������ʹ���ʹ���ʡ�����ʹ��һ����cpu��

.tar.xz
xz -d filename.tar.xz  ��ѹȥ��xz  ���filename.tar
tar -xvf  filename.tar

1)gzip&gunzip
��֧��ѹ��Ŀ¼��gzip��ֱ�Ӹ��ļ������ڵ�ǰĿ¼��ѹ��ʱ��ԭ�ļ�����ʧ��
gzip��GNU��ѹ��������ֻ�Ե����ļ�����ѹ���������÷����£�
$ gzip filename
����ִ���Ժ��ļ�������filename.gz������һ������´�С���ԭ�ļ�ҪС��
ע��:���򲢲��½�һ���µ��ļ�filename.gz, ���ǽ�filename���filename.gz

 gzip -9 filename
�����Ϳ��Եõ�gzip�ܹ�ѹ������С�ļ��ߴ磬������Ҫ������ѹ��ʱ�䡣���������ԽС��ѹ����Խ�죬�෴ѹ����Ҳ��ԽС

gzipѹ�����ļ���ѹ��,���Խ�ѹ���ĺ�׺�������ǣ�.gz, -gz, .z, -z, .Z �� �CZ
$ gunzip filename.gz   ���� 
$ gzip -d filename.gz

$zcat file.gz  �鿴.gz�ļ�����

2)bzip2&bunzip2
��֧��ѹ��Ŀ¼��bzip2���ֱ�Ӹ��ļ���Ҳ�ɸ�-z filename,�ڵ�ǰĿ¼��ѹ��ʱ��ԭ�ļ�����ʧ��
��ͬѹ���㷨��ѹ�����ļ���gzipС��ʹ��ͬgzip
$ bzip2 filename
$ bunzip2 filename.bz2
$ bunzip -9 filename
$bzcat file.bz2 �鿴.bz2�ļ�����

3)zip&unzip
�ڵ�ǰĿ¼��ѹ��ʱ��ԭ�ļ�����ʧ��֧��ѹ��Ŀ¼��Ҫ��-r
zip�ļ���ѹ���������zip,��ѹ���������unzip.

ָ��ѹ��·����
$zip /tmp/a/1.txt.zip /tmp/1.txt  ��/tmp/1.txtѹ����/tmp/a/������Ϊ1.txt.zip

ѹ��Ŀ¼��$zip -r yasuo.zip yasuo/

ѹ���ļ���
$zip -r foo *

��ѹ���ļ���
$unizip foo.zip

#unzip -l file.zip �г�file.zip�ļ��б�

��ѹ��ָ��Ŀ¼��#unzip -d /home/ 1.txt.zip

4)xz
��֧��ѹ��Ŀ¼��xz���ֱ�Ӹ��ļ���Ҳ�ɸ�-z filename���ڵ�ǰĿ¼��ѹ��ʱ��ԭ�ļ�����ʧ��
�﷨��$xz -z filename  ѹ���ļ�
         $xz -d filename ��ѹ��

$xzcat file.xz �鿴.xz���ı����ݡ�

ָ����ѹ���ļ��Ľ�ѹ·��������xzѹ���ļ�Ϊ 1.txt.xz
$xz -d 1.txt.xz -c > /tmp/1.txt

5)tar
tar�����ѹ������
tar֧��gzip bzip2 xz��ʽѹ��

tar [-cxtzjvfpPN] �ļ���Ŀ¼ ....

tar����
[root@Linux ~]# tar [-cxtzjvfpPN] �ļ���Ŀ¼ ....
������
-c ������һ��ѹ���ļ��Ĳ���ָ��(create ����˼)��
-x ���⿪һ��ѹ���ļ��Ĳ���ָ�
-t ���鿴 tarfile ������ļ���
�ر�ע�⣬�ڲ������´��У� c/x/t ���ܴ���һ��������ͬʱ���ڣ�
��Ϊ������ͬʱѹ�����ѹ����
-z ���Ƿ�ͬʱ���� gzip �����ԣ��༴�Ƿ���Ҫ�� gzip ѹ����
-j ���Ƿ�ͬʱ���� bzip2 �����ԣ��༴�Ƿ���Ҫ�� bzip2 ѹ����
-v ��ѹ���Ĺ�������ʾ�ļ���������ã������������ڱ���ִ�й��̣�
-f ��ʹ�õ����������⣬�� f ֮��Ҫ�����ӵ���ร���Ҫ�ټӲ�����
����������ʹ�á� tar -zcvfP tfile sfile�����Ǵ����д����Ҫд��
�������� tar -zcvPf tfile sfile���Ŷ�ร�
-p ��ʹ��ԭ�ļ���ԭ�����ԣ����Բ�������ʹ���߶��䣩