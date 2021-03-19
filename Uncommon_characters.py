for _ in range(int(input())):
    A=str(input())
    B=str(input())
    result=''
    for i in A:
        if not i in B:
            result+=i
    for j in B:
        if not j in A and not j in result:
            result+=j

    if len(result)==0:
        print("-1")
    else:
        res=''.join(sorted(result))
        #s="".join(res)
        from collections import OrderedDict
        def Remove_Duplicate_Char(res):
            return "".join(OrderedDict.fromkeys(res))

        print(Remove_Duplicate_Char(res))
