#!/bin/python3
import re
if __name__ == '__main__':
    import sys, re, os
    def isValidArguments(args):
        """
            CARACTERISTICS OF VALIDS ARGUMENTS:
                - SIZE: 3
                - ARGUMENT 1: ALPHANUMERIC CARACTERS.
                - ARGUMENT 2: NUMERIC CARACTER.
                - ARGUMENT 3: NUMERIC CARACTER.

                - argument 2 must be higher than argument 1.
                - argument can't be lower than 0.

        """
        if len(args) != 3:
            return False
        arg1, arg2, arg3 = args
        if not isAlphanumeric(arg1):
            return False
        if not isNumeric(arg2) or not isNumeric(arg3):
            return False
        if int(arg3) < int(arg3):
            return False
        return True
    def isNumeric(chaine):
        """
        """
        regex = "^[0-9]+$"
        if re.match(regex, chaine):
            return True
        return False

    def isAlphanumeric(chaine):
        """
        """
        regex = "^[a-zA-Z0-9_]+$"
        if re.match(regex, chaine):
            return True
        return False


    if not isValidArguments(sys.argv[1:]):
        print("usage: createFile <base> <i_0> <i_n>")
    else:
        base, arg1, arg2 = sys.argv[1:]
        for i in range(int(arg1), int(arg2)+1):
            os.system(f'mkdir {base}{i}')
    

