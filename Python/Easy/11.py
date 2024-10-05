def outer():
    global x 
    x = 10
    def inner():
        # Error: x is local to outer and cannot be made global
        x = 5
    inner()
    print(x)

outer()
