function solution(phoneNumber) {
    const len = phoneNumber.length;
    return ("*".repeat(len - 4)) + phoneNumber.slice(len - 4, len);
}
