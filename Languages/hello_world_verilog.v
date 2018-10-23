// Verilog Hello world example

timescale 1ns/10ps

module HelloWorld (
    pixelClock,
    Red,
    Green,
    Blue,
    hSync,
    vSync
);

input pixelClock;
output [3:0] Red;
reg [3:0] Red;
output [3:0] Green;
reg [3:0] Green;
output [3:0] Blue;
reg [3:0] Blue;
output hSync;
reg hSync;
output vSync;
reg vSync;

reg [10:0] hCounter;
reg [9:0] vCounter;
reg [49:0] shiftReg;


always @(shiftReg) begin: HELLOWORLD_ASSIGN
    reg [4-1:0] v;
    v = 4'h0;
    v[3] = shiftReg[49];
    Red = v;
    Green = v;
    Blue = v;
end


always @(posedge pixelClock) begin: HELLOWORLD_DRAW
    reg [6-1:0] row;
    row = 6'h0;
    if ((hCounter == 1055)) begin
        hCounter <= 0;
        if ((vCounter == 627)) begin
            vCounter <= 0;
        end
        else begin
            row = vCounter[10-1:4];
            case (row)
                0: shiftReg <= 51'h2000000000001;
                1: shiftReg <= 0;
                2: shiftReg <= 47'h241402080210;
                3: shiftReg <= 47'h241402080210;
                4: shiftReg <= 47'h3dd5c24bba70;
                5: shiftReg <= 47'h25554152a290;
                6: shiftReg <= 47'h2595c0a3a270;
                7: shiftReg <= 0;
                8: shiftReg <= 0;
                9: shiftReg <= 0;
                10: shiftReg <= 0;
                11: shiftReg <= 0;
                12: shiftReg <= 0;
                13: shiftReg <= 0;
                14: shiftReg <= 0;
                15: shiftReg <= 0;
                16: shiftReg <= 0;
                17: shiftReg <= 0;
                18: shiftReg <= 0;
                19: shiftReg <= 0;
                20: shiftReg <= 0;
                21: shiftReg <= 0;
                22: shiftReg <= 0;
                23: shiftReg <= 0;
                24: shiftReg <= 0;
                25: shiftReg <= 0;
                26: shiftReg <= 0;
                27: shiftReg <= 0;
                28: shiftReg <= 0;
                29: shiftReg <= 0;
                30: shiftReg <= 0;
                31: shiftReg <= 0;
                32: shiftReg <= 0;
                33: shiftReg <= 0;
                34: shiftReg <= 0;
                35: shiftReg <= 0;
                default: shiftReg <= 51'h2000000000001;
            endcase
            vCounter <= (vCounter + 1);
        end
    end
    else begin
        hCounter <= (hCounter + 1);
        if ((hCounter[4-1:0] == 15)) begin
            shiftReg <= (shiftReg << 1);
        end
    end
    hSync <= ((hCounter >= 840) && (hCounter < 968));
    vSync <= ((vCounter >= 601) && (vCounter < 605));
end

endmodule