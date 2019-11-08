def cons(a, b):
    def pair(f):
        return f(a,b)
    return pair

def car(pair):
    def ret(a,b):
        return a
    return pair(ret)

def cdr(pair):
    def ret(a,b):
        return b
    return pair(ret)