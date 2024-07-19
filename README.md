# Password Validation Program

## Description
This program checks whether a given string is a valid password based on the following rules:
- A password must have at least ten characters.
- A password consists of only letters and digits.
- A password must contain at least two digits.
- A password must contain at least one letter.

## Functions
### `bool isValid(string password)`
- **Description**: Checks if the given password is valid according to the specified rules.
- **Parameters**: 
  - `password` (string): The password to validate.
- **Returns**: 
  - `true` if the password is valid.
  - `false` if the password is not valid.

## Sample Output
### Valid Password
- Enter the string: Passw0rd123
-  It is a Valid password!

### Invalid Password
- Enter the string: Passw0rd
- It is not a Valid password!
