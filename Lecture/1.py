def check_password_strength(password):
    length = len(password)
    has_upper = any(char.isupper() for char in password)
    has_lower = any(char.islower() for char in password)
    has_digit = any(char.isdigit() for char in password)
    has_special = any(not char.isalnum() for char in password)
    
    if length >= 8 and has_upper and has_lower and has_digit and has_special:
        return "Strong password"
    elif length >= 6 and (has_upper or has_lower) and (has_digit or has_special):
        return "Moderate password"
    else:
        return "Weak password"

# Example usage
password = input("Enter your password: ")
strength = check_password_strength(password)
print(strength)