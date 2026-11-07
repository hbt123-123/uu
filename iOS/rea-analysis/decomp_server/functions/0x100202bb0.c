// rea decompile_all
// name: FUN_100202bb0
// address: 0x100202bb0
// body: available
// range: 0x100202bb0-0x100202d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100202bb0(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [16];
  byte local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_54;
  
  FUN_100401b14(0);
  uVar1 = 0;
  local_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_1003fb48c(FUN_100203730,auStack_80,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                0x80000001008a20b0,0x1fe,0);
  if ((param_3 & 1) == 0) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1000c2f84(*(undefined8 *)(DAT_100b360a8 + 0xa0));
  }
  else {
    FUN_1000c4610();
    if ((uVar1 & 1) == 0) {
      FUN_1003fb48c(FUN_1001ff6d4,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000029,
                    0x80000001008a20b0,0x206,0);
      uVar3 = 2;
      goto LAB_100202d14;
    }
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    IVar2 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x80) + 0x10),"screenId");
    local_54 = 0;
    FUN_1000c2854(1,IVar2 & 0xffffffff);
  }
  uVar3 = 0;
LAB_100202d14:
  FUN_1002028ec(param_1,param_2,uVar3,0,0xe000000000000000);
  FUN_100006cdc(0,0xc000000000000000);
  return;
}

