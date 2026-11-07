// rea decompile_all
// name: FUN_1001cbb5c
// address: 0x1001cbb5c
// body: available
// range: 0x1001cbb5c-0x1001cbd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001cbb5c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined1 auStack_c0 [16];
  undefined1 local_b0;
  uint local_ac;
  int iStack_a8;
  char *local_98;
  undefined1 auStack_90 [16];
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100401b14(0);
  local_98 = s__100885070;
  local_80 = param_2;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1003fb48c(FUN_1001cbdc4,auStack_90,0xd000000000000095,0x8000000100885070,0xd00000000000002c,
                0x800000010089d360,0x11c,0);
  FUN_100008184(param_3,param_4);
  uVar1 = (ulong)param_2 << 0x20 | 4;
  uVar3 = param_3;
  FUN_1001e7094(uVar1,param_3,param_4);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  IVar4 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                 _TtC14UURemoteServer15StreamerManager::controlled);
  uVar2 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar3);
  IVar4 = _objc_msgSend(IVar4,"ControlledSendBinaryData:data:",param_1,uVar2);
  if ((int)IVar4 == 0) {
    FUN_100006cdc(uVar1,uVar3);
    FUN_100006cdc(param_3,param_4);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    local_b0 = 4;
    local_ac = param_2;
    iStack_a8 = (int)IVar4;
    FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_c0,0xd000000000000095,
                  (ulong)local_98 | 0x8000000000000000,0xd000000000000029,0x800000010089d330,0xed,0)
    ;
    FUN_100006cdc(uVar1,uVar3);
    FUN_100006cdc(param_3,param_4);
  }
  return;
}

