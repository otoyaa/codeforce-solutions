def way_too_long_word():
    """Codeforce exercise 2"""
    for _ in range(int(input())):
        word = input()
        if len(word) > 10:
            primeira,ultima, tamanho=word[0],word[-1], len(word)-2
            print(f"{primeira+str(tamanho)+ultima}") 
        else:
            print(word)
        
