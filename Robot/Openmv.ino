void BobDetection() {
  static int bufferIndex = 0;
  while (Serial3.available()) {
    char byteRead = Serial3.read();  // Read byte from Serial3

    if (byteRead == '\n') {        // End of line detected
      buffer[bufferIndex] = '\0';  // Null-terminate the buffer
      bufferIndex = 0;             // Reset buffer index

      // Tokenize the buffer
      ptr = strtok(buffer, ",");
      int index = 0;
      while (ptr != NULL && index < 5) {
        string[index] = ptr;  // Store the token
        index++;
        ptr = strtok(NULL, ",");
      }

      // Ensure that there are enough tokens before accessing them
      if (index >= 4) {  // Ensure we have at least 4 tokens
        // Assuming ColorChecker is meant to be a single character
        ColorChecker = string[3][0];  // Assign single character from the token
        FoundBlock = true;

        if (ColorChecker == 'G') {
          // If ColorChecker is 'G', update GreenBlob values
          GreenBlobX = atoi(string[0]);
          GreenBlobY = atoi(string[1]);
          GreenBlobHeight = atoi(string[2]);
        } else if (ColorChecker == 'R') {
          // If ColorChecker is 'R', update RedBlob values
          RedBlobX = atoi(string[0]);
          RedBlobY = atoi(string[1]);
          RedBlobHeight = atoi(string[2]);
        }

        // Print values to Serial Monitor for debugging
        // Serial.print("GreenBlobX: ");
        // Serial.print(GreenBlobX);
        // Serial.print(" GreenBlobY: ");
        // Serial.print(GreenBlobY);
        // Serial.print(" GreenBlobHeight: ");
        // Serial.print(GreenBlobArea);
        // Serial.print(" RedBlobX: ");
        // Serial.print(RedBlobX);
        // Serial.print(" RedBlobY: ");
        // Serial.print(RedBlobY);
        // Serial.print(" RedBlobArea: ");
        // Serial.print(RedBlobArea);
        // Serial.print(" ColorChecker: ");
        // Serial.println(ColorChecker);
      } else {
        // Handle the case where there are not enough tokens
        Serial.println("Error: Not enough data tokens received.");
        FoundBlock = false;
        GreenBlobX = -1;
        GreenBlobY = -1;
        GreenBlobHeight = -1;
        RedBlobX = -1;
        RedBlobY = -1;
        RedBlobHeight = -1;
      }
    } else {
      // Store byte in buffer if not end of line
      if (bufferIndex < sizeof(buffer) - 1) {
        buffer[bufferIndex++] = byteRead;
      } else {
        // Buffer overflow protection
        bufferIndex = 0;  // Reset buffer if it overflows
        Serial.println("Error: Buffer overflow.");
      }
    }
  }
}