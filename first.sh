
#!/bin/bash
echo "(y/n)"
var= $1
if ["$var" == "y"]
then
    echo "good job" 
else
    echo " please input(y/n) "
fi
