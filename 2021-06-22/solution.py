def clothes2clothes_num(clothes):
  clothes_num = {}
  category = ''
  
  for index in range(len(clothes)):
      category = clothes[index][1]
      
      if category in list(clothes_num.keys()):
        clothes_num[category] += 1
      else:
        clothes_num[category] = 1
        
  return clothes_num

def calculate_cases(clothes_num):
  cases = 1
  
  for value in clothes_num.values():
      cases *= (value + 1)
      
  return cases
  
def solution(clothes):
    nothing_clothes = 1

    clothes_num = clothes2clothes_num(clothes)

    cases = calculate_cases(clothes_num)

    return cases - nothing_clothes
    