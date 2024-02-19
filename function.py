# Write a function
# string middle(string str)
# that returns a string containing the middle character in str if the length of str is odd,
# or the two middle characters if the length is even. For example, middle("middle")
#  returns "dd".

def middle(str):

   for i in range(0, len(str), 1):
                  if len(str) % 2 == 0:

                    print(str[i])

                  elif len(str) % 2 != 0:

                    print(str[i])


def main():

    middle_char = input("Enter a string: ")

    print(middle(middle_char))


main()


