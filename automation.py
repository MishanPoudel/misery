import pyautogui
import time

# pyautogui.hotkey('ctrl', 'p')
# pyautogui.write('try.py')
# pyautogui.press('enter')
# pyautogui.hotkey('ctrl', 'a')


code = 'file=open(\'D:\\Misery\\here.txt\', \'w\')\ndef printSequnce(upto):\n output = ""\nfor i in range(50001, upto + 1):\noutput += f"case {i}:\\n"\noutput += f"cout << \\"it\'s {\'even\' if i % 2 == 0 else \'odd\'}\\";"\noutput += "break;"\nreturn output'
pyautogui.write(code)
code2 = "\nnum_cases = 60000\nfile.write(printSequnce(num_cases))\nfile.close()"
pyautogui.write(code2)

