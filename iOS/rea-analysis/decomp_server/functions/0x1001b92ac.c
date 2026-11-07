// rea decompile_all
// name: FUN_1001b92ac
// address: 0x1001b92ac
// body: available
// range: 0x1001b92ac-0x1001b941b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001b92ac(undefined8 param_1,long param_2)

{
  pid_t pVar1;
  undefined4 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  pid_t local_60 [2];
  ulong local_58;
  long local_50;
  ulong uVar2;
  
  pVar1 = _getppid();
  uVar2 = CONCAT44(extraout_var,pVar1);
  FUN_10040ce00();
  uVar3 = uVar2;
  FUN_10040c8f0();
  if (param_2 == 0) {
    uVar4 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
    local_50 = CONCAT44(local_50._4_4_,pVar1);
    FUN_1003fb4bc(FUN_1001b9494,local_60,0xd000000000000093,0x800000010089b8d0,0xd000000000000017,
                  0x800000010089bbd0,0x167,0);
  }
  else if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
    local_60[0] = pVar1;
    local_58 = uVar2;
    local_50 = param_2;
    FUN_1003fb4bc(FUN_1001b949c,auStack_70,0xd000000000000093,0x800000010089b8d0,0xd000000000000017,
                  0x800000010089bbd0,0x165,0);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    _swift_bridgeObjectRelease(param_2);
  }
  return (uint)uVar3 & 1;
}

