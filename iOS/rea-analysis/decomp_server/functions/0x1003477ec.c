// rea decompile_all
// name: FUN_1003477ec
// address: 0x1003477ec
// body: available
// range: 0x1003477ec-0x1003478d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003477ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong local_60;
  undefined8 uStack_58;
  
  FUN_100008184();
  FUN_10004cd9c(&local_60,6,param_1,param_2);
  uVar2 = uStack_58;
  uVar1 = local_60;
  uVar3 = 0xa2c277d5d29;
  uVar5 = 0xe600000000000000;
  FUN_1002bd428(0xa2c277d5d29,0xe600000000000000);
  uVar4 = uVar1;
  FUN_1000094a4(uVar1,uVar2,uVar3,uVar5);
  FUN_100006cdc(uVar3,uVar5);
  FUN_100006cdc(uVar1,uVar2);
  if ((uVar4 & 1) == 0) {
    FUN_100008184(param_1,param_2);
    uStack_58 = param_2;
    local_60 = param_1;
  }
  else {
    FUN_100008184(param_1,param_2);
    FUN_100343c58(&local_60,6,param_1,param_2);
  }
  auVar6._8_8_ = uStack_58;
  auVar6._0_8_ = local_60;
  return auVar6;
}

