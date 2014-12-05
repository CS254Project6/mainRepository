Last login: Thu Dec  4 18:49:40 on console
cs2024c:~ csguest$ git init
Initialized empty Git repository in /Users/csguest/.git/
cs2024c:~ csguest$ git config --global user.email "kyle.meezan@yahoo.com"
cs2024c:~ csguest$ git config --global user.name TinfoilPowers
cs2024c:~ csguest$ git init
Reinitialized existing Git repository in /Users/csguest/.git/
cs2024c:~ csguest$ git pull https://github.com/samgutz/project6
remote: Counting objects: 24, done.
remote: Compressing objects: 100% (13/13), done.
remote: Total 24 (delta 6), reused 20 (delta 5)
Unpacking objects: 100% (24/24), done.
From https://github.com/samgutz/project6
 * branch            HEAD       -> FETCH_HEAD
cs2024c:~ csguest$ ls
Applications	Desktop		Library		Pictures	collectData.cpp
DataClass.cpp	Documents	Movies		Public		temp.cpp
DataClass.h	Downloads	Music		README.md
cs2024c:~ csguest$ touch test.cpp
cs2024c:~ csguest$ vim test.cpp
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
Aborting commit due to empty commit message.
cs2024c:~ csguest$ git commit
[master 98c8b34] test commit by Kyle
 1 file changed, 48 insertions(+)
 create mode 100644 test.cpp
cs2024c:~ csguest$ git pull
fatal: No remote repository specified.  Please, specify either a URL or a
remote name from which new revisions should be fetched.
cs2024c:~ csguest$ git pull https://github.com/cs253Project6/mainRepository
Username for 'https://github.com': Howitzer89
Password for 'https://Howitzer89@github.com': 
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/cs253Project6/mainRepository/'
cs2024c:~ csguest$ git pull https://github.com/cs253Project6/mainRepository
Username for 'https://github.com': TinfoilPowers
Password for 'https://TinfoilPowers@github.com': 
remote: Repository not found.
fatal: repository 'https://github.com/cs253Project6/mainRepository/' not found
cs2024c:~ csguest$ git init
Reinitialized existing Git repository in /Users/csguest/.git/
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
On branch master
Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/
	q
	test

nothing added to commit but untracked files present
cs2024c:~ csguest$ git push
fatal: No configured push destination.
Either specify the URL from the command-line or configure a remote repository using

    git remote add <name> <url>

and then push using the remote name

    git push <name>

cs2024c:~ csguest$ git remote add test.cpp https://github.com/cs254Project6/mainRepository
cs2024c:~ csguest$ git push test.cpp
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Username for 'https://github.com': ls
Password for 'https://ls@github.com': 
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/cs254Project6/mainRepository/'
cs2024c:~ csguest$ git remote add test.cpp https://github.com/cs254Project6/mainRepository
fatal: remote test.cpp already exists.
cs2024c:~ csguest$ git push test.cpp
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Username for 'https://github.com': TinFoilPowers
Password for 'https://TinFoilPowers@github.com': 
To https://github.com/cs254Project6/mainRepository
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/cs254Project6/mainRepository'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
cs2024c:~ csguest$ q
-bash: q: command not found
cs2024c:~ csguest$ quit
-bash: quit: command not found
cs2024c:~ csguest$ terminate
-bash: terminate: command not found
cs2024c:~ csguest$ end
-bash: end: command not found
cs2024c:~ csguest$ close
-bash: close: command not found
cs2024c:~ csguest$ clear

cs2024c:~ csguest$ ls
Applications	Documents	Music		collectData.cpp	test.cpp
DataClass.cpp	Downloads	Pictures	q
DataClass.h	Library		Public		temp.cpp
Desktop		Movies		README.md	test
cs2024c:~ csguest$ rm q
cs2024c:~ csguest$ ls
Applications	Documents	Music		collectData.cpp
DataClass.cpp	Downloads	Pictures	temp.cpp
DataClass.h	Library		Public		test
Desktop		Movies		README.md	test.cpp
cs2024c:~ csguest$ rm temp.cpp
cs2024c:~ csguest$ rm test
cs2024c:~ csguest$ git inti
git: 'inti' is not a git command. See 'git --help'.

Did you mean this?
	init
cs2024c:~ csguest$ git init
Reinitialized existing Git repository in /Users/csguest/.git/
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
On branch master
Changes not staged for commit:
	deleted:    temp.cpp

Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

no changes added to commit
cs2024c:~ csguest$ git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	deleted:    temp.cpp

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

no changes added to commit (use "git add" and/or "git commit -a")
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
On branch master
Changes not staged for commit:
	deleted:    temp.cpp

Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

no changes added to commit
cs2024c:~ csguest$ git log
commit 98c8b3407e32b2c15b7e6fcefbb8573ab00f8702
Author: TinfoilPowers <kyle.meezan@yahoo.com>
Date:   Thu Dec 4 19:41:23 2014 -0800

    test commit by Kyle

commit df8855a71b0db476423693d8e2f33a37328cf2d0
Author: Sam <sam_gutz@yahoo.com>
Date:   Wed Dec 3 21:16:21 2014 -0800

    completed DataClass function definitions

commit f2e61f9d7a7648c6417be29abc43fab754ee9327
commit 98c8b3407e32b2c15b7e6fcefbb8573ab00f8702
Author: TinfoilPowers <kyle.meezan@yahoo.com>
Date:   Thu Dec 4 19:41:23 2014 -0800

    test commit by Kyle

commit df8855a71b0db476423693d8e2f33a37328cf2d0
Author: Sam <sam_gutz@yahoo.com>
Date:   Wed Dec 3 21:16:21 2014 -0800

    completed DataClass function definitions

commit f2e61f9d7a7648c6417be29abc43fab754ee9327
Author: Sam <sam_gutz@yahoo.com>
Date:   Tue Dec 2 20:59:13 2014 -0800

    added new class function

commit c5c1c7211e3d815d1d4e7735179d19c381315dc5
Merge: 4c6a0e9 366bef6
Author: Sam <sam_gutz@yahoo.com>
Date:   Tue Dec 2 20:54:57 2014 -0800

    Merge https://github.com/samgutz/project6

commit 98c8b3407e32b2c15b7e6fcefbb8573ab00f8702
Author: TinfoilPowers <kyle.meezan@yahoo.com>
Date:   Thu Dec 4 19:41:23 2014 -0800

    test commit by Kyle

commit df8855a71b0db476423693d8e2f33a37328cf2d0
Author: Sam <sam_gutz@yahoo.com>
Date:   Wed Dec 3 21:16:21 2014 -0800

    completed DataClass function definitions

commit f2e61f9d7a7648c6417be29abc43fab754ee9327
Author: Sam <sam_gutz@yahoo.com>
Date:   Tue Dec 2 20:59:13 2014 -0800

    added new class function

commit c5c1c7211e3d815d1d4e7735179d19c381315dc5
Merge: 4c6a0e9 366bef6
Author: Sam <sam_gutz@yahoo.com>
Date:   Tue Dec 2 20:54:57 2014 -0800

    Merge https://github.com/samgutz/project6
cs2024c:~ csguest$ 
cs2024c:~ csguest$ git pull https://github.com/CS254Project6/mainRepository
remote: Counting objects: 8, done.
remote: Compressing objects: 100% (4/4), done.
remote: Total 8 (delta 1), reused 4 (delta 0)
Unpacking objects: 100% (8/8), done.
From https://github.com/CS254Project6/mainRepository
 * branch            HEAD       -> FETCH_HEAD
Removing temp.cpp
Removing collectData.cpp
Removing README.md
Removing DataClass.h
Removing DataClass.cpp
Merge made by the 'recursive' strategy.
 DataClass.cpp   | 241 --------------------------------------------------------
 DataClass.h     |  45 -----------
 README.md       |   2 -
 collectData.cpp |  25 ------
 temp.cpp        |   4 -
 testPush.txt    |   0
 6 files changed, 317 deletions(-)
 delete mode 100644 DataClass.cpp
 delete mode 100644 DataClass.h
 delete mode 100644 README.md
 delete mode 100644 collectData.cpp
 delete mode 100644 temp.cpp
 create mode 100644 testPush.txt
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
On branch master
Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

nothing added to commit but untracked files present
cs2024c:~ csguest$ ls
Applications	Downloads	Music		test.cpp
Desktop		Library		Pictures	testPush.txt
Documents	Movies		Public
cs2024c:~ csguest$ git diff
cs2024c:~ csguest$ git log
commit 04ba82eaacc1afdfec531795eff315875966926b
Merge: 98c8b34 d18cb51
Author: TinfoilPowers <kyle.meezan@yahoo.com>
Date:   Thu Dec 4 20:10:56 2014 -0800

    Merge https://github.com/CS254Project6/mainRepository

commit d18cb5150d74dce0151b32f372d4b185dd321be7
Merge: b874b4d 61aa316
Author: Scott Ha <ha_scott@yahoo.com>
Date:   Thu Dec 4 19:45:37 2014 -0800

    Merge https://github.com/CS254Project6/mainRepository
    
    Conflicts:
        README.md

commit 61aa316ba79ce6240b077fd7ed26b453c663bda6
Author: samgutz <sam_gutz@yahoo.com>
Date:   Thu Dec 4 19:42:34 2014 -0800

    Initial commit

commit 98c8b3407e32b2c15b7e6fcefbb8573ab00f8702
Author: TinfoilPowers <kyle.meezan@yahoo.com>
Date:   Thu Dec 4 19:41:23 2014 -0800

    test commit by Kyle

commit b874b4df88ed4497fda87303b526d5e2e6b9d793
Author: Scott Ha <ha_scott@yahoo.com>
Date:   Thu Dec 4 19:38:40 2014 -0800

    This is a test.
    
    -Scott

cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit
On branch master
Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

nothing added to commit but untracked files present
cs2024c:~ csguest$ TinfoilPowers
-bash: TinfoilPowers: command not found
cs2024c:~ csguest$ git commit -a --verbose
On branch master
Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

nothing added to commit but untracked files present
cs2024c:~ csguest$ vim test.cpp
cs2024c:~ csguest$ ls
Applications	Downloads	Music		test.cpp
Desktop		Library		Pictures	testPush.txt
Documents	Movies		Public
cs2024c:~ csguest$ git add test.cpp
cs2024c:~ csguest$ git commit -a
On branch master
Untracked files:
	.CFUserTextEncoding
	.DS_Store
	.Trash/
	.bash_history
	.cups/
	.gitconfig
	.viminfo
	Applications/
	Desktop/
	Documents/
	Downloads/
	Library/
	Movies/
	Music/
	Pictures/
	Public/

nothing added to commit but untracked files present
cs2024c:~ csguest$ vim test.cpp

#include <iostream>
using namespace std;
int main()
{
        for (int i = 0; i < 19; ++i)
                cout << i << " ";
        cout << endl;
        system ("pause");
        return 0;
}
~
~
~
~
~
~
~
~
~
~
~
~
~
-- INSERT --
