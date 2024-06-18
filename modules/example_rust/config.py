import subprocess
# config.py

def can_build(env, platform):
    try:
        subprocess.run(["cargo"], capture_output=True)
        return True
    except FileNotFoundError:
        return False



def configure(env):
    pass
