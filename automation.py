import pyautogui
import time
import pyperclip
import re

pyautogui.hotkey('ctrl', 'p')
time.sleep(1)
pyautogui.write('auto.py')
pyautogui.press('enter')
time.sleep(1)
pyautogui.hotkey('ctrl', 'a')

first = 7;
second = 8;

code = f'''with open('D:\\Misery\\here.txt', 'w') as file:
for i in range({first}0001, {second}0000 + 1):\n    file.write(f"\\ncase {{i}}:\\n")\nfile.write(f'    cout << "it\\'s {{"even" if i % 2 == 0 else "odd"}}\";\\n')\nfile.write("    break;\\n")'''

pyautogui.write(code)


time.sleep(2)
pyautogui.hotkey('ctrl', 'alt', 'n')
time.sleep(5)
pyautogui.hotkey('ctrl', 'p')
time.sleep(1)
pyautogui.write('here.txt')
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)
pyautogui.hotkey('ctrl', 'a')
time.sleep(1)
pyautogui.hotkey('ctrl', 'c')
time.sleep(1)
pyautogui.hotkey('ctrl', 'p')
time.sleep(1)
pyautogui.write('this.txt')
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)
pyautogui.hotkey('ctrl', 'a')
time.sleep(1)
pyautogui.hotkey('ctrl', 'v')
time.sleep(1)
pyautogui.hotkey('ctrl', 'p')
pyautogui.write('OddOrEven.cpp')
time.sleep(1)
pyautogui.press('enter')


with open('this.txt', 'r') as content_file:
    content = content_file.read()

with open('OddOrEven.cpp', 'r') as file:
    lines = file.readlines()

for i, line in enumerate(lines):
    if 'default:' in line:
        lines.insert(i, content + '\n')
        break

with open('OddOrEven.cpp', 'w') as file:
    file.writelines(lines)

time.sleep(2)
pyautogui.hotkey('shift', 'alt', 'f')
time.sleep(5)
pyautogui.hotkey('ctrl', '~')
pyautogui.write("git add OddOrEven.cpp")
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)
pyautogui.write(f'git commit -m "added upto {second}0000"')
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)
pyautogui.write('git push')
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)
pyautogui.hotkey('ctrl', 'p')
time.sleep(1)
pyautogui.write('automation.py')
time.sleep(1)
pyautogui.press('enter')
time.sleep(1)


pyautogui.hotkey('ctrl', 'a')
pyautogui.hotkey('ctrl', 'c')
pasted_content = pyperclip.paste()
variables_to_increment = ['first', 'second']
for var_name in variables_to_increment:
    search_pattern = re.compile(f'{var_name}\s*=\s*(\d+)')
    match = search_pattern.search(pasted_content)
    if match:
        current_value_str = match.group(1)
        current_value = int(current_value_str)
        current_value += 1
        pasted_content = search_pattern.sub(f'{var_name} = {current_value}', pasted_content)
pyautogui.hotkey('ctrl', 'a')
pyperclip.copy(pasted_content)
pyautogui.hotkey('ctrl', 'v')


