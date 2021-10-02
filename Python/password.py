def authrnticateUser(password):
    if password == 'magic':
        message='Login Successsfull Welcome to Windows 11!!!'
    if password != 'magic':
        message='Unknown User'
    return message

def main():
    print('\t Login Page')
    print('====================')
    password=input('Enter your password :')
    message=authrnticateUser(password)
    print (message)
if __name__=='__main__':
    main()
