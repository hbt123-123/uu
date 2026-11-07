// rea decompile_all
// name: FUN_1002033ac
// address: 0x1002033ac
// body: available
// range: 0x1002033ac-0x1002036df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100203480 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002033ac(ulong param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  long *local_60;
  undefined1 local_44;
  
  uVar1 = param_1;
  FUN_1000b42dc();
  if (((uint)uVar1 & 0xff) == 2) {
    FUN_1000b462c();
    if (((uint)uVar1 & 0xff) != 2) goto LAB_1002033f0;
  }
  else {
LAB_1002033f0:
    if ((uVar1 & 1) != 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001ff9c8,0,0xd0000000000000a0,0x800000010088d990,&DAT_d000000000000028,
                    0x80000001008a2380,0x25f,0);
      uVar2 = 3;
      goto LAB_100203458;
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  local_60 = param_3;
  if (*(char *)(*(long *)(DAT_100b360a8 + 0xa0) +
               _TtC14UURemoteServer18DrawOverlayManager::isEnabled) != '\x01') {
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    FUN_1003fb48c(FUN_1002037c4,auStack_70,0xd0000000000000a0,0x800000010088d990,
                  &DAT_d000000000000028,0x80000001008a2380,0x265,0);
LAB_1002035dc:
    FUN_1002028ec(param_1,param_2,4,0,0xd000000000000000);
    FUN_100006cdc(0,0xc000000000000000);
    return;
  }
  if (((*(byte *)(param_3 + 1) & 1) == 0) || (*param_3 == 0)) {
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    FUN_1003fb4ec(FUN_1002037cc,auStack_70,0xd0000000000000a0,0x800000010088d990,
                  &DAT_d000000000000028,0x80000001008a2380,0x27d,0);
    goto LAB_1002035dc;
  }
  if (*param_3 == 1) {
    FUN_1000c3560(*(long *)(DAT_100b360a8 + 0xa0));
  }
  else {
    if (*(int *)((long)param_3 + 0xc) == 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001ffaa8,0,0xd0000000000000a0,0x800000010088d990,&DAT_d000000000000028,
                    0x80000001008a2380,0x271,0);
      uVar2 = 4;
      goto LAB_100203458;
    }
    local_44 = *(undefined1 *)((long)param_3 + 0x24);
    FUN_1000c36ac(*(int *)((long)param_3 + 0xc),(ulong)*(uint5 *)(param_3 + 4));
  }
  uVar2 = 0;
LAB_100203458:
  FUN_1002028ec(param_1,param_2,uVar2,0,0xd000000000000000);
  FUN_100006cdc(0,0xc000000000000000);
  return;
}

