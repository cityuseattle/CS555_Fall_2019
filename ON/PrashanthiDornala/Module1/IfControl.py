print('How old are you?')
age=int(input())

if age < 22:
    print('You are too young to have a drink.')
elif age >= 80:
    print('Ok, you will get a free drink.')
else:
    print('Sure, enjoy your drink.')