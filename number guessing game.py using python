import random

def guess_number():
    N=random.randint(1,20)
    print("bot: Welcome to the guessing number Game")
    print("     You have 5 chances to guess the correct number")
    print("     Guess the number between 1 to 20\n")
    chance=5
    time_you_guess=0

    while 1:
        print("     Chance left:",chance)
        N1=input("You: ")
        try:
            N1=int(N1)    # Error handling
        except:
            print("bot: Please enter valid number🙂\n")
            continue
        if N1==N:
            time_you_guess+=1
            print("\nbot: Congratulations🎉🎉🎊🎊, you guess correct number",N,"in",time_you_guess,"guesses")
            
            break
        elif N1<N:
            print("bot: Haha, wrong guess")
            print("     Too low\n")
            chance-=1
            time_you_guess+=1
        elif N1>N:
            print("bot: Haha, wrong guess")
            print("     Too High\n")
            chance-=1
            time_you_guess+=1
        if chance==0:
            print("bot: Game over🤣😂")
            print("     Better luck next time")
            print("     the correct number was",N)
            break
           
guess_number()
