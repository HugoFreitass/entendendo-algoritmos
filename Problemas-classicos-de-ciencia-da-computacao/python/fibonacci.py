def fib(n: int) -> int:
    if n == 0: return n
    last: int = 0
    next: int = 1
    variavel = 0
    for _ in range(1, n): # _ é convenção em python para quando a variavel não é usada dentro do loop
        last, next = next, last+next
    return next
    
print(fib(100000))

