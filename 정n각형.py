import turtle
t = turtle.Turtle()
t.shape('turtle')
n = int(input('그리고 싶은 정n각형의 n을 입력하세요 ==>  '))
print("해당 정"+str(n)+"각형의 한변당 길이를 입력하시오")
length = int(input('길이 = '))
angle = 180 - ((180*(n-2))/n)
"""
정n각형에 대한 내각 일반항 ;
삼각형(n=3) = 삼각형*1 = 180도
사각형(n=4) = 삼각형*2 = 360도
오각형(n=5) = 삼각형*3 = 540도
육각형(n=6) = 삼각형*4 = 720도~~
위의 논리에 따라 내각합은 180*(n-2)의 일반항을 가지고,
따라서 각각의 외각은 (180-(180*(n-2)/n))을 일반항으로 가진다.
"""
for i in range(1,n+1) :
    t.forward(length)
    t.left(angle)

    
