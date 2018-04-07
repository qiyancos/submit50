#! /usr/bin/env python
#encoding=utf-8
import re
from selenium import webdriver
from time import sleep
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

options = webdriver.ChromeOptions()
options.add_argument("--headless")
browser = webdriver.Chrome(chrome_options = options)
browser.get("https://github.com/login?client_id=4641d3506c478b0419d5&return_to=%2Flogin%2Foauth%2Fauthorize%3Fclient_id%3D4641d3506c478b0419d5%26scope%3Duser%253Aemail")
login = browser.find_element_by_name("login")
login.send_keys("public4all")
pwd = browser.find_element_by_name("password")
pwd.send_keys("cs50class\n")

if browser.title == "Authorize application":
    sleep(3)
    browser.find_element_by_id("js-oauth-authorize-btn").click()
    
pattern = re.compile(r'<span class="icon icon-download"> Download\n    </span></a> \n\n    \n    <a type="button" class="btn btn-xs btn-pill btn-default " href="(.*)">\n        <span class="icon icon-check"> check50')
checkurl = pattern.findall(str(browser.page_source))[0]
browser.get("http://cs50.me"+checkurl)
while "Waiting for checks to complete" in browser.page_source:
    browser.get("http://cs50.me"+checkurl)
print browser.page_source
browser.quit()
