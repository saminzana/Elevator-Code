function call = getCall(SERIAL_PORT, BAUD, FROMFLOOR)
    % Fetches HITL Serial Data to Simulate and Returns Proper Struct
    %
    % Authors: Stephen Hannon, Derick Vigne

    % Instantiations and Initialization of Serial Port
    call = struct();
    fd = serialport(SERIAL_PORT, BAUD);

    % Initialization of Call Structure Members
    call.fromFloor = FROMFLOOR;
    call.toFloor = read(fd, 1, "uint8") - 48;

    if(call.toFloor < 1)
       call.toFloor = FROMFLOOR
    end

    disp(call.toFloor);

    % 1 for heading up, -1 for down
    call.direction = sign(call.toFloor - call.fromFloor);
    disp(call.direction);
end
