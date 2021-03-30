"""
Project Overview
In this series of three programming tasks, we will implement together a program 
that will play optimally in a tricky dice game! You program will be given a list 
of dices and will decide who chooses the dice first(you or your opponent).

When the dices are chosen, we will simulate 10000 throws. 
Each time your number is greater, you get $1 from your opponent. 
Conversely, each time your number is smaller, you pay $1 to your opponent.

Your ultimate goal is to implement a program that always wins in such a simulation.


First Task: Compare Two Dices
Implement a function that takes two dices as input and computes two values: 
the first value is the number of times the first dice wins(out of all possible 36 choices), 
the second value is the number of times the second dice wins. We say that a dice wins 
if the number on it is greater than the number on the other dice.
"""


def count_wins(dice1, dice2):
    assert len(dice1) == 6 and len(dice2) == 6
    dice1_wins, dice2_wins = 0, 0

    for i in range(6):
        for j in range(6):
            if dice1[i] > dice2[j]:
                dice1_wins += 1
            if dice1[i] < dice2[j]:
                dice2_wins += 1

    return(dice1_wins, dice2_wins)


print(count_wins([1, 2, 3, 4, 5, 6], [1, 2, 3, 4, 5, 6]))
print(count_wins([1, 1, 6, 6, 8, 8], [2, 2, 4, 4, 9, 9]))

"""
Second Task: Is there the Best Dice?

Now, your goal is to check whether among the three given dices there is one that 
is better than the remaining two dices.

Implement a function that takes a list of dices and checks whether there is dice 
(in this list) that is better than all other dices. We say that a dice is better than another one, 
if it wins more frequently (that is, out of all 36 possibilities, it wins in a cases, 
while the second one wins in b cases, and a>b). If there is such a dice, return its (0-based) index. Otherwise, return -1.

"""


def find_the_best_dice(dices):
    assert all(len(dice) == 6 for dice in dices)

    # write your code here
    # use your implementation of count_wins method if necessary

    for i in range(len(dices)):
        rank = []
        for j in range(len(dices)):
            if i != j:
                dice1_wins, dice2_wins = count_wins(dices[i], dices[j])
                if dice1_wins > dice2_wins:
                    rank.append(1)
        if rank.count(1) == len(dices) - 1:
            return i

    return -1


print(find_the_best_dice(
    [[1, 1, 6, 6, 8, 8], [2, 2, 4, 4, 9, 9], [3, 3, 5, 5, 7, 7]]))
print(find_the_best_dice(
    [[1, 1, 2, 4, 5, 7], [1, 2, 2, 3, 4, 7], [1, 2, 3, 4, 5, 6]]))
print(find_the_best_dice([[3, 3, 3, 3, 3, 3], [6, 6, 2, 2, 2,
                                               2], [4, 4, 4, 4, 0, 0], [5, 5, 5, 1, 1, 1]]))

"""
Third Task: Implement a Strategy

You are now ready to play!

Implement a function that takes a list of dices (possibly more than three) and 
returns a strategy. The strategy is a dictionary:

If, after analyzing the given list of dices, you decide to choose a dice first, 
set strategy["choose_first"] to True and set strategy["first_dice"] to be the (0-based) 
index of the dice you would like to choose

If you would like to be the second one to choose a dice, set strategy["choose_first"] to False. 
Then, specify, for each dice that your opponent may take, the dice that you would take in return. 
Namely, for each i from 0 to len(dices)-1, set strategy[i] to an index j of the dice that 
you would take if the opponent takes the i-th dice first.

"""


def compute_strategy(dices):
    assert all(len(dice) == 6 for dice in dices)

    strategy = dict()
    strategy["choose_first"] = True
    strategy["first_dice"] = 0
    for i in range(len(dices)):
        strategy[i] = (i + 1) % len(dices)

    # write your code here

    # check the first strategy
    best = find_the_best_dice(dices)
    if best != -1:
        strategy["first_dice"] = best
    else:
        strategy["choose_first"] = False

    # set the second strategy scenarios
        for i in range(len(dices)):
            for j in range(len(dices)):
                if i != j:
                    dice1_wins, dice2_wins = count_wins(dices[i], dices[j])
                    if dice1_wins < dice2_wins:
                        break

            strategy[i] = j

    return strategy


print(find_the_best_dice(
    [[1, 1, 4, 6, 7, 8], [2, 2, 2, 6, 7, 7], [3, 3, 3, 5, 5, 8]]))
print(find_the_best_dice([[4, 4, 4, 4, 0, 0], [
      7, 7, 3, 3, 3, 3], [6, 6, 2, 2, 2, 2], [5, 5, 5, 1, 1, 1]]))
