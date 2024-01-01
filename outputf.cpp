Add-Type -AssemblyName System.Windows.Forms
Start-Sleep -Seconds 3
$delayInSeconds = 0.2
$lines = @(
"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer luctus tortor lacinia accumsan convallis. Nulla convallis molestie nibh rutrum accumsan. Phasellus auctor in magna eget tincidunt. Nullam feugiat urna at neque pharetra, ut sollicitudin nisi dignissim. Nullam lacinia sollicitudin ante. Proin condimentum mattis ante, nec eleifend augue consectetur non. Suspendisse aliquam, tellus eget auctor fringilla, dui leo viverra dui, nec feugiat leo dui id nibh. Quisque nunc justo, pretium vitae consectetur eu, fringilla ac neque. Aenean ultricies risus quis porta interdum. Vestibulum vel imperdiet est. Etiam commodo sollicitudin diam, sodales sagittis massa viverra sit amet. Aliquam porttitor velit vitae libero bibendum sollicitudin.",
"",
"Fusce tempus, turpis ut varius tincidunt, augue lectus efficitur odio, vel posuere quam leo eu tortor. Proin diam erat, elementum at dolor sit amet, faucibus egestas orci. Suspendisse a gravida lectus, eget scelerisque elit. In pellentesque eros ut sapien auctor, eu ultrices turpis lacinia. Nam sit amet mi nulla. Fusce ullamcorper ex pretium ipsum hendrerit, sit amet commodo ante gravida. Integer gravida magna et elit aliquet, ut pellentesque urna viverra. Aliquam sit amet lectus nec tellus elementum lacinia. Duis lorem arcu, facilisis quis tortor quis, pretium dictum velit. Fusce sed massa iaculis, consequat mauris at, blandit justo. Sed congue ut velit vitae pretium. Mauris in dictum purus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur pulvinar vestibulum justo, vel semper risus rutrum et.",
"")
[System.Windows.Forms.SendKeys]::SendWait("+")
Start-Sleep -Seconds $delayInSeconds

foreach ($line in $lines) {
    foreach ($char in $line.ToCharArray()) {
        $escapedChar = if ($char -match '(["`$%+{}])') { "$char" } else { $char }
        [System.Windows.Forms.SendKeys]::SendWait("$escapedChar")
        Start-Sleep -Seconds $delayInSeconds
    }

    [System.Windows.Forms.SendKeys]::SendWait("{ENTER}")
    Start-Sleep -Seconds $delayInSeconds
}
