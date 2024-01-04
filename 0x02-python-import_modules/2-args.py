#!/usr/bin/env python3
import argparse

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Prints the number of command line arguments and their values.")
    parser.add_argument("args", nargs="*", help="List of command line arguments.")
    args = parser.parse_args()

    num_args = len(args.args)
    if num_args == 0:
        print(f"{num_args} arguments.")
    elif num_args == 1:
        print(f"{num_args} argument:")
    else:
        print(f"{num_args} arguments:")

    for i, arg in enumerate(args.args, start=1):
        print(f"{i}: {arg}")
