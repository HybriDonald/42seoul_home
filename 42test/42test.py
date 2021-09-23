#! /usr/bin/python3
#-*- coding: utf-8 -*-

# By: cjeon <cjeon@student.42seoul.kr>

import os
import sys
import json
import shutil
import subprocess

def print_usage_and_exit():
    print('[-] usage: ./42test [ -f | -g ] [ target ] [ project name ]')
    exit(1)

if len(sys.argv) != 4:
    print('[!] too (many or few) arguments.')
    print_usage_and_exit()

_, target_type, target, project_name = sys.argv

if target_type in ['-f', '--folder']:
    target_folder = target
    if not os.path.isdir(target_folder):
        print(f"[!] {target_folder} is not valid folder")
        exit(1)

elif target_type in ['-g', '--git']:
    target_folder = os.path.join('repos', project_name)
    if os.path.isdir(target_folder):
        shutil.rmtree(target_folder)
    try:
        subprocess.run(args=['git', 'clone', target, target_folder], check=True)
    except subprocess.CalledProcessError as e:
        print('[!] "git clone" failed')
        exit(1)

else:
    print(f'[!] invalid argument (pos 2): {target_type}')
    print_usage_and_exit()

if not os.path.isdir(project_name):
    print(f'[!] {project_name} unavailable project')
    exit(1)

rules_file = open(os.path.join(project_name , 'rules.json'), 'r')
rules = json.load(rules_file)
rules_file.close()

for rule in rules:
    name = rule['name']
    compare_output = rule['compare-output']
    file_path = os.path.join(target_folder, rule['file'])
    test_script_path = rule['test-script']

    print(f'[-] ({test_script_path.split("/")[1]}) test {name}...')

    if not os.path.isfile(file_path):
        print('[!] file not placed correctly')
        exit(1)

    try:
        subprocess.run(args=['clang', '-Wall', '-Wextra', '-Werror', '-o', f'bin/{name}', file_path, test_script_path], check=True)
    except subprocess.CalledProcessError as e:
        print('[!] compile failed')
        exit(1)

    try:
        output = subprocess.run(args=[f'./bin/{name}'], check=True, capture_output=True).stdout
    except subprocess.CalledProcessError as e:
        print(e.stderr.decode('ascii'))
        print('[!] runtime error')
        exit(1)

    if compare_output:
        with open(compare_output, 'r') as f:
            expected_output = f.read()
            real_output = output.decode('ASCII')
            if real_output != expected_output:
                print(f"[-] expected:\n{expected_output}")
                print(f"[-] actual:\n{real_output}")
                print("[!] wrong output")
                exit(1)
    print(f'[-] {name} pass!')
print(f'[-] all test passed.')