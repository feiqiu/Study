2017-01-23
��ʼ��һ��Git�ֿ⣬ʹ��git init���

�����ļ���Git�ֿ⣬��������

��һ����ʹ������git add <file>��ע�⣬�ɷ������ʹ�ã����Ӷ���ļ���
//���ָ����棺http://blog.csdn.net/unityoxb/article/details/20768687

�ڶ�����ʹ������git commit����ɡ�


Ҫ��ʱ���չ�������״̬��ʹ��git status���

���git status���������ļ����޸Ĺ�����git diff���Բ鿴�޸����ݡ�


HEADָ��İ汾���ǵ�ǰ�汾����ˣ�Git���������ڰ汾����ʷ֮�䴩��ʹ������git reset --hard commit_id��
��Git�У���HEAD��ʾ��ǰ�汾����һ���汾����HEAD^������һ���汾����HEAD^^����Ȼ����100���汾д100��^�Ƚ�������������������д��HEAD~100

����ǰ����git log���Բ鿴�ύ��ʷ���Ա�ȷ��Ҫ���˵��ĸ��汾��

Ҫ�ط�δ������git reflog�鿴������ʷ���Ա�ȷ��Ҫ�ص�δ�����ĸ��汾

�汾��  ������  �ݴ�����stage��  master  HEAD

������Git����θ����޸ĵģ�ÿ���޸ģ������add���ݴ������ǾͲ�����뵽commit�С�

2013-01-24
��֧����
�¹���  50%   ����
1��������ϲ���֧
��֧�ߣ�ʱ���ߣ�����֧master    HEADָ��
�ύ��commit  
�������л��������ķ�֧��git checkout -b dev
������֧��git branch  dev
�л���֧��git checkout  dev
�鿴��ǰ��֧��git branch
*  dev  *��ʾ��ǰ��֧

Ȼ�������ύ��
git add readme.txt 
git commit -m "branch test"

�ϲ���master��֧��
git merge dev
Fast-forward��Ϣ��Git�������ǣ���κϲ��ǡ����ģʽ��

�ϲ���ɺ�ɾ��dev��֧��
git branch -d dev

2�������ͻ
ѡ��master��֧���´򿪣��޸��ύ�����ܽ������
���ǿ����л�������֧��
��Git�޷��Զ��ϲ���֧ʱ���ͱ������Ƚ����ͻ�������ͻ�����ύ���ϲ���ɡ�
��git log --graph������Կ�����֧�ϲ�ͼ��

 git log --graph --pretty=oneline --abbrev-commit

3����֧��������
git merge --no-ff -m "merge with no-ff" dev
--no-ff��������ʾ����Fast forward
�ϲ�Ҫ����һ���µ�commit�����Լ���-m��������commit����д��ȥ

4��Bug��֧
Git�ṩ��һ��stash���ܣ����԰ѵ�ǰ�����ֳ������ء����������Ժ�ָ��ֳ����������
git stash


����ȷ��Ҫ���ĸ���֧���޸�bug���ٶ���Ҫ��master��֧���޸����ʹ�master������ʱ��֧
git checkout master
git checkout -b issue-101

git add readme.txt 
git commit -m "fix bug 101"

git checkout master
git branch -d issue-101

git checkout dev

�鿴�����ֳ�
git stash list

git stash apply�ָ������ǻָ���stash���ݲ���ɾ��������Ҫ��git stash drop��ɾ����

��һ�ַ�ʽ����git stash pop���ָ���ͬʱ��stash����Ҳɾ��


����һ����feature������½�һ����֧��

���Ҫ����һ��û�б��ϲ����ķ�֧������ͨ��git branch -D <name>ǿ��ɾ����


�鿴Զ�̿���Ϣ��ʹ��git remote -v��

�����½��ķ�֧��������͵�Զ�̣��������˾��ǲ��ɼ��ģ�

�ӱ������ͷ�֧��ʹ��git push origin branch-name���������ʧ�ܣ�����git pullץȡԶ�̵����ύ��

�ڱ��ش�����Զ�̷�֧��Ӧ�ķ�֧��ʹ��git checkout -b branch-name origin/branch-name�����غ�Զ�̷�֧���������һ�£�

�������ط�֧��Զ�̷�֧�Ĺ�����ʹ��git branch --set-upstream branch-name origin/branch-name��

��Զ��ץȡ��֧��ʹ��git pull������г�ͻ��Ҫ�ȴ�����ͻ��


2017-02-06
1.��װGit
$ git config --global user.name "Your Name"
$ git config --global user.email "email@example.com"

2.�����汾��
�����ļ��У�Ŀ¼��PS����Ŀ¼����������Ŀ¼�����������ģ���������ļ����£�
$ git init   ��ʼ������ļ���Ϊ�ֿ�
�����ļ���.gitĿ¼  ls -ah�ɲ�
$ git add readme.txt      ���ļ����ӵ��ֿ�
$ git commit -m "wrote a readme file"   �ļ��ύ���ֿ�

3.ʱ�������
$ git status   ʱ�����ղֿ⵱ǰ��״̬
$ git diff readme.txt         ����˼����ǲ鿴difference

HEADָ��İ汾���ǵ�ǰ�汾����ˣ�Git���������ڰ汾����ʷ֮�䴩��ʹ������git reset --hard commit_id��
����ǰ����git log���Բ鿴�ύ��ʷ���Ա�ȷ��Ҫ���˵��ĸ��汾��
Ҫ�ط�δ������git reflog�鿴������ʷ���Ա�ȷ��Ҫ�ص�δ�����ĸ��汾��

�ݴ�����Git�ǳ���Ҫ�ĸ��Ū�������ݴ�������Ū������Git�ĺܶ�������׸���ʲô

������Git����θ����޸ĵģ�ÿ���޸ģ������add���ݴ������ǾͲ�����뵽commit��

����1����������˹�����ĳ���ļ������ݣ���ֱ�Ӷ������������޸�ʱ��������git checkout -- file��
����2�����㲻�������˹�����ĳ���ļ������ݣ������ӵ����ݴ���ʱ���붪���޸ģ�����������һ��������git reset HEAD file���ͻص��˳���1���ڶ���������1������
����3���Ѿ��ύ�˲����ʵ��޸ĵ��汾��ʱ����Ҫ���������ύ���ο��汾����һ�ڣ�����ǰ����û�����͵�Զ�̿⡣

����git rm����ɾ��һ���ļ�

�鿴Զ�̿���Ϣ��ʹ��git remote -v
4.Զ�ֿ̲�
2017-02-06
GitԶ�ֿ̲⣺GitHub
��1����ע��GitHub�˺�

��2��������SSH Key��
��.sshĿ¼���Ƿ���id_rsa˽Կ��id_rsa.pub��Կ,����������һ��
���򴴽�SSH Key��
$ ssh-keygen -t rsa -C "youremail@example.com"

��3������¼GitHub���ӹ�Կ�����

����Զ�̿�
��һ������GitHub�����²ֿ�
�ڶ���������Զ�̿�
$ git remote add origin git@github.com:michaelliao/learngit.git
���������ѱ��ؿ�������������͵�Զ�̿���
$ git push -u origin master
����Զ�̿��ǿյģ����ǵ�һ������master��֧ʱ��������-u����

��Զ�̿��¡
$ git clone git@github.com:michaelliao/gitskills.git

5.��֧����
������ϲ���֧

6.��ǩ����
����git tag <name>�����½�һ����ǩ��Ĭ��ΪHEAD��Ҳ����ָ��һ��commit id��
git tag -a <tagname> -m "blablabla..."����ָ����ǩ��Ϣ�� ��-aָ����ǩ����-mָ��˵������
git tag -s <tagname> -m "blablabla..."������PGPǩ����ǩ��
����git tag���Բ鿴���б�ǩ��
git show <tagname>�鿴��ǩ��Ϣ

����git push origin <tagname>��������һ�����ر�ǩ��
����git push origin --tags��������ȫ��δ���͹��ı��ر�ǩ��
����git tag -d <tagname>����ɾ��һ�����ر�ǩ��
����git push origin :refs/tags/<tagname>����ɾ��һ��Զ�̱�ǩ��

7.ʹ��GitHub
8.�Զ���Git
9