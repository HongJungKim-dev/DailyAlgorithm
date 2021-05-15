def solution(phone_number):
    star_num = len(phone_number) - 4
    return "*" * (star_num) + phone_number[star_num:]
