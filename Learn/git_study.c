2017-01-23
��ʼ��һ��Git�ֿ⣬ʹ��git init���

����ļ���Git�ֿ⣬��������

��һ����ʹ������git add <file>��ע�⣬�ɷ������ʹ�ã���Ӷ���ļ���
//���ָ����棺http://blog.csdn.net/unityoxb/article/details/20768687

�ڶ�����ʹ������git commit����ɡ�


Ҫ��ʱ���չ�������״̬��ʹ��git status���

���git status���������ļ����޸Ĺ�����git diff���Բ鿴�޸����ݡ�


HEADָ��İ汾���ǵ�ǰ�汾����ˣ�Git���������ڰ汾����ʷ֮�䴩��ʹ������git reset --hard commit_id��
��Git�У���HEAD��ʾ��ǰ�汾����һ���汾����HEAD^������һ���汾����HEAD^^����Ȼ����100���汾д100��^�Ƚ�������������������д��HEAD~100

����ǰ����git log���Բ鿴�ύ��ʷ���Ա�ȷ��Ҫ���˵��ĸ��汾��

Ҫ�ط�δ������git reflog�鿴������ʷ���Ա�ȷ��Ҫ�ص�δ�����ĸ��汾

�汾��  ������  �ݴ�����stage��  master  HEAD

�����Git����θ����޸ĵģ�ÿ���޸ģ������add���ݴ������ǾͲ�����뵽commit�С�

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

Ȼ������ύ��
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

3����֧�������
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
