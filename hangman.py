Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 @alokrkmv Sign out
0
0 1,047 alokrkmv/Hello-Hacktober
forked from ViniciusDeep/Hello-Hacktober
 Code  Pull requests 0  Projects 0  Wiki  Insights  Settings
Hello-Hacktober/hangman.py
4808382  an hour ago
@alokrkmv alokrkmv Simple Hangman game created in python
    
100 lines (99 sloc)  3.22 KB
import random
print("Welcome to hangman")
print("Press 1 to continue")
start=raw_input();
if(start!='1'):
    print("Bye Bye")
    exit()
else:
    words=["smartphone","laptop","marker","tennis","cricket","pollution","pirates","chamber","goblet","assassination","football","android","quarrel",
    "disney","absolution","goblin","ring"]
    index=random.randint(0,16)
    word=words[index]
    print("Begin")
    display=""
    used=""
    for i in range(len(word)):
        display=display+"-"
    guesses=0
    print("Your word "+display)
    print("You have seven guesses")
    while guesses<=6:
        flag=0
        print("\n\nGuess a letter:")
        guess=raw_input()
        if guess in used :
            print("Letter already used")
        else:
            for i in range(len(word)):
                if(word[i]==guess):
                    flag=1
                    display=list(display)
                    display[i]=guess
                    display="".join(display)
                if((guess in used)==0):
                    used=used+guess+" "
            if(flag==1):
                print("Correct Guess")
            else:
                print("wrong guess")
                guesses=guesses+1
                left=7-guesses;
                print("Guesses remaining "+str(left))
        print("Your word: "+display)
        print("letters used: "+used)
        if guesses == 1:
            print ("________      ")
            print ("|      |      ")
            print ("|             ")
            print ("|             ")
            print ("|             ")
            print ("|             ")
            # print("Guesses remaining: " 6-guesses)
        elif guesses == 2:
            print ("________      ")
            print ("|      |      ")
            print ("|      0      ")
            print ("|             ")
            print ("|             ")
            print ("|             ")
        elif guesses == 3:
            print ("________      ")
            print ("|      |      ")
            print ("|      0      ")
            print ("|     /       ")
            print ("|             ")
            print ("|             ")
        elif guesses == 4:
            print ("________      ")
            print ("|      |      ")
            print ("|      0      ")
            print ("|     /|      ")
            print ("|             ")
            print ("|             ")
        elif guesses == 5:
            print ("________      ")
            print ("|      |      ")
            print ("|      0      ")
            print ("|     /|\     ")
            print ("|             ")
            print ("|             ")
        elif guesses == 6:
            print ("________      ")
            print ("|      |      ")
            print ("|      0      ")
            print ("|     /|\     ")
            print ("|     /       ")
            print ("|             ")
        if(display==word):
            print("You Won")
            break;
    if guesses==7:
        print ("________      ")
        print ("|      |      ")
        print ("|      0      ")
        print ("|     /|\     ")
        print ("|     / \     ")
        print ("|             ")
        print ("YOU ARE HANGED!!!GAME OVER!")
        print ("The word is :"+word)
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.
