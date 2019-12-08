def numberList(items):
    '''Print each item in a list items, numbered in order.'''
    
for item in items:
    number = 1
        number = number + 1
        print(number, item)

def main():
    numberList(['red', 'orange', 'yellow', 'green'])
    print()
    numberList(['apples', 'pears', 'bananas'])

main()