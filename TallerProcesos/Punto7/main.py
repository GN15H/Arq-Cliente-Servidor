import psutil


for proc in psutil.process_iter(['pid', 'name', 'username']):
    # if proc.info['name'] == proc_name:
    #     proc.kill()
    print(proc.info)

proc_id = input()

for proc in psutil.process_iter(['pid', 'name', 'username']):
    if proc.info['pid'] == proc_id:
        proc.kill()