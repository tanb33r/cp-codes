Add-Type -AssemblyName System.Windows.Forms
 Start-Sleep -Seconds 3
 $delayInSeconds = .1
 $lines = @(
"library IEEE;1",
)

 [System.Windows.Forms.SendKeys]::SendWait("+")
 Start-Sleep -Seconds $delayInSeconds

 foreach ($line in $lines) {
     foreach ($char in $line.ToCharArray()) {
         [System.Windows.Forms.SendKeys]::SendWait($char)
         Start-Sleep -Seconds $delayInSeconds
     }

     [System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
     Start-Sleep -Seconds $delayInSeconds
 }



 Add-Type -AssemblyName System.Windows.Forms

 Start-Sleep -Seconds 3
$delayInSeconds = 0.5
$lines = @(
    "wa[s)d",
    "1234",
    "qwerty"
)


[System.Windows.Forms.SendKeys]::SendWait("+")
Start-Sleep -Seconds $delayInSeconds

foreach ($line in $lines) {
    foreach ($char in $line.ToCharArray()) {
        $escapedChar = if ($char -match '[\"`$%+{}]') { "{$char}" } else { $char }
        [System.Windows.Forms.SendKeys]::SendWait("$escapedChar")
        Start-Sleep -Seconds $delayInSeconds
    }

    [System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
    Start-Sleep -Seconds $delayInSeconds
}
