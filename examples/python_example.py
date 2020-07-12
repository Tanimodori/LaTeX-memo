#!/usr/local/bin/python
# -*- coding: utf-8 -*-
"""
This is an example module
"""
class Example():
    """
    This is an example class
    """

    def __init__(self, arg):
        #  This is an example class
        self.data = arg
        if arg == 'foo':
            print('foo')
        else:
            print('bar')
