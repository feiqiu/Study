2017-01-19
�� Vi ��������������ģʽʵ���ַ����滻���ѵ�ǰ�ļ��еġ� xiaodai��ȫ��
�滻�ɡ� banzhang�������� :%s/xiaodai/banzhang/g

find /home/tarena/workdir/toolchains/opt/S5PV210-crosstools/4.4.6/arm-concenwit-linux-gnueabi/lib/ \( -name "libc-*"-o -name "libc.so*" \) -exec cp -frd {}  lib/  \;

���� ·���� ���е�����Ϊ��libc-���ļ�����libc.so�ļ�) ��ִ�п������������ҵ������ݿ�����lib/·���� 
ע�⣺�ո�ת�������ֺ�

����tar ���ѹ������ѹ����
tar �Cjxvf busybox-1.21.1.tar.bz2
tar �Cxvf Kernel_2.6.35.7_CW210_for_Linux_v1.0.tar.gz
tar -xzvf  .tar.gz
tar -zcvf lastmod.tar.gz


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
-P ������ʹ�þ���·����ѹ����
-N ���Ⱥ���ӵ�����(yyyy/mm/dd)��Ҫ�µĲŻᱻ������½����ļ��У�
--exclude FILE����ѹ���Ĺ����У���Ҫ�� FILE �����

��Linux����ϵͳ�ϱ�дShell�ű�ʱ���������ڱ�����ǰ��ʹ��$��������ȡ�ñ�����ֵ��ͨ���ڽű���ʹ�á�$param�����ִ�˫���ŵĸ�ʽ����Ҳ�г���ʹ��'$param'���ִ����ŵ�ʹ�õĳ��������ȴ�ҿ�һ�����ӣ�
���ƴ��� ��������:

[root@linux ~]# name=TekTea
[root@linux ~]# echo $name
TekTea
[root@linux ~]# sayhello=��Hello $name��
[root@linux ~]# echo $sayhello
Hello TekTea
[root@linux ~]# sayhello='Hello $name'
[root@linux ~]# echo $sayhello
Hello $name

��������û��ʹ���˵����ŵ�ʱ���� $name��ʧȥԭ�еı������ݣ���Ϊһ���ַ�����ʾ��̬���ѣ��������Ҫ�ر�С�����⣡
���ԣ���������˫���ŵ����ͬ����˫������Ȼ���Ա��б��������ݣ����������ڽ�����һ���ַ�����������������ţ�����Ҳ����������⣺'$sayhello' �� ��\$sayhello������ͬ�ġ�
��Shell�ű����������У���Ա����ĵ�����(��)��˫����(��)������Ӧ�ó����ģ������ҵľ����ܽ��������ǣ�
1. ��ȡ����ֵ��ʱ���ʹ��˫����(��)�����ǻ����÷���
2. ������ڽű���Ҫ��дһ���µĽű���ͬʱ����µĽű��л���Ҫ������������Ϳ���ѡ��ʹ�õ�����(��)�ˣ��ر�������һ����ʱ��expect�ű�ʱ��������(��)�ͻᾭ��ʹ�õ��ġ�

�ܵ���|��
�ض��� >      >>
backtick����б��

������sed  �� tr
vi�е������ʽ :%s/ str1/str2/ ����:s/str1/str2/

���̿��ƣ�
1.if
"if" ���ʽ �������Ϊ����ִ��then����Ĳ��֣�
if ....; then
....
elif ....; then
....
else
....
fi

ͨ����" [ ] "����ʾ���� ���ԡ�ע������Ŀո����Ҫ��Ҫȷ�������ŵĿո�
[ -f "somefile" ] ���ж��Ƿ���һ���ļ�
[ -x "/bin/ls" ] ���ж�/bin/ls�Ƿ���ڲ��п�ִ��Ȩ��
[ -n "$var" ] ���ж�$var�����Ƿ���ֵ
[ "$a" = "$b" ] ���ж�$a��$b�Ƿ����


2017-1-20
vi ȡ���к�  set nonu

 
ssh -T git@github.com host key verification failed. ����취
�������ʾ���루yes/no��,����ֱ�ӻس�������yes�ͺ��ˣ�����
https://zhidao.baidu.com/question/488954251016978292.html

2017-02-12
��ô�鵱ǰ���Ի�����
������ϵͳ�汾��bash�汾��make�汾
����"uname -a ",����ʾ�����Լ�����ϵͳ�������Ϣ��
����"cat /proc/version",˵���������е��ں˰汾��
����"cat /etc/issue", ��ʾ���Ƿ��а汾��Ϣ

�鿴�ں˰汾��ƽ̨ uname -r -m
�鿴���а�汾 lsb_release -a

�鿴��ǰϵͳ֧�ֵ�Shell��ʹ��cat��head��more������鿴/etc/shells�����ݼ��ɡ�
cat /etc/shells

��ʾshell�İ汾�� ��bash  --version
��ʾmake�İ汾�ţ�make  --version

.tar.xz
# xz -d ***.tar.xz  //�Ƚ�ѹxz 
# tar -xvf  ***.tar //�ٽ�ѹtar 

���ں˵��ԣ���ӡ��Ϣ�����������
���磺new high speed USB device using s5p-ehci and address 3
������Ǵ������׷��




