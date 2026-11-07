// rea decompile_all
// name: FUN_1001adae0
// address: 0x1001adae0
// body: available
// range: 0x1001adae0-0x1001adc43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_1001adae0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  ID IVar2;
  long unaff_x20;
  undefined4 uVar3;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  byte local_7c;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  byte local_5c;
  
  bVar1 = 0;
  FUN_1003a9990();
  FUN_1003a8848();
  FUN_100401b14(0);
  uVar3 = (undefined4)param_1;
  local_5c = bVar1 & 1;
  local_60 = uVar3;
  FUN_1003fb48c(FUN_1001b1988,auStack_70,0xd000000000000095,0x8000000100877f50,0xd00000000000001a,
                0x800000010089ab10,0x17b,0);
  bVar1 = 0;
  FUN_1003a8798();
  FUN_1003a793c();
  local_7c = bVar1 & 1;
  local_80 = uVar3;
  FUN_1003fb48c(FUN_1001b1aa0,auStack_90,0xd000000000000095,0x8000000100877f50,0xd00000000000001a,
                0x800000010089ab10,0x17d,0);
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                        "ControlledStartVideoCapture:info:",param_1,param_2);
  uStack_9c = (undefined4)IVar2;
  local_a0 = uVar3;
  FUN_1003fb48c(FUN_1001b1bac,auStack_b0,0xd000000000000095,0x8000000100877f50,0xd00000000000001a,
                0x800000010089ab10,0x17f,0);
  return IVar2;
}

