#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    for key, value in a_dictionary.items():
        doubled_dict = {key: value * 2}
    return doubled_dict
