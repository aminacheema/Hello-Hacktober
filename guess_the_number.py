from random import randint
computer_pick = randint(1,100)
# print(computer_pick)
print("Rules of the game:nIn this game you have to guess a number between 1 and 100\nIf your guess is between 10 of the number you will be shown warm on first turn and if farther than 10 away from the number you will be shown cold\nFor each subsequent turns you will be shown Warmer if you performed better than previous turn and colder if you performed worse than previous turn")
turn = 0
diff = 0
while True:
    guess = int(input("Enter your guess "))
    if guess<1 or guess>100:
        print("Your guess is out of bound...please try again")
        continue
    elif guess == computer_pick:
        print(f"You have made correct guess in {turn} turns\n")
        break
    if turn == 0:
        diff = abs(guess-computer_pick) 
        if(diff<=10):
            print("Warm")
            turn=turn+1
        else:
            print("Cold")
            turn=turn+1
    else:
        if (abs(guess-computer_pick)<=diff):
            print("Warmer")
            diff = abs(guess-computer_pick)
            turn = turn+1;
        else:
            print("Colder")
            diff = abs(guess-computer_pick)
            turn = turn+1
