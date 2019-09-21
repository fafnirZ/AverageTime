# AverageTime
A simple bash script that returns your algorithm's average execution time against another algorithm of your choice


Directions:
terminal commands:
sh script {algorithm1} {algorithm2} {generator script} {n}

#note {} means command line arguments

algorithm1 and algorithm2 can me a shellscript or a c script of your choice
generator script is a script that you create that generates a set of data for the algorithms to sort
n is the number of times you run your algorithm against the same dataset i.e. the number of tests generated


## What this script does ##
This bash script utilises the terminal/linux "time" command which outputs your program execution time
By storing the execution data in a file, the script then calculates the average execution time after 'n' number of repetitions
