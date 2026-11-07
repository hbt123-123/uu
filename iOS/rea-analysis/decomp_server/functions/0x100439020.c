// rea decompile_all
// name: FUN_100439020
// address: 0x100439020
// body: available
// range: 0x100439020-0x100439287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100439168) */
/* WARNING: Removing unreachable block (ram,0x000100439230) */
/* WARNING: Removing unreachable block (ram,0x0001004391dc) */
/* WARNING: Removing unreachable block (ram,0x0001004391f8) */
/* WARNING: Removing unreachable block (ram,0x0001004391c0) */
/* WARNING: Removing unreachable block (ram,0x0001004390f0) */
/* WARNING: Removing unreachable block (ram,0x000100439214) */

void FUN_100439020(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
LAB_1004390a4:
  while( true ) {
    lVar1 = param_3;
    uVar2 = param_4;
    (*pcVar4)();
    if ((unaff_x21 != 0) || ((uVar2 & 1) != 0)) {
      return;
    }
    if (lVar1 < 7) break;
    if (lVar1 < 10) {
      if (lVar1 == 7) {
        FUN_1004394d8(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 8) {
        FUN_10043956c(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 9) {
        _swift_beginAccess(param_1 + 0xf8,auStack_58,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar1 = param_1 + 0xf8;
        goto LAB_100439078;
      }
    }
    else if (lVar1 == 10) {
      FUN_100439600(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 0xb) {
      FUN_100439694(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 0xc) {
      _swift_beginAccess(param_1 + 0x158,auStack_58,0x21,0);
      pcVar3 = *(code **)(param_4 + 0x150);
      lVar1 = param_1 + 0x158;
      goto LAB_100439078;
    }
  }
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      FUN_100439288(param_2,param_1,param_3,param_4);
      goto LAB_1004390a4;
    }
    if (lVar1 != 2) {
      if (lVar1 == 3) {
        FUN_10043931c(param_2,param_1,param_3,param_4);
      }
      goto LAB_1004390a4;
    }
    _swift_beginAccess(param_1 + 0x1c,auStack_58,0x21,0);
    pcVar3 = *(code **)(param_4 + 0x48);
    lVar1 = param_1 + 0x1c;
  }
  else {
    if (lVar1 == 4) {
      FUN_1004393b0(param_2,param_1,param_3,param_4);
      goto LAB_1004390a4;
    }
    if (lVar1 != 5) {
      if (lVar1 == 6) {
        FUN_100439444(param_2,param_1,param_3,param_4);
      }
      goto LAB_1004390a4;
    }
    _swift_beginAccess(param_1 + 0xc0,auStack_58,0x21,0);
    pcVar3 = *(code **)(param_4 + 0x138);
    lVar1 = param_1 + 0xc0;
  }
LAB_100439078:
  (*pcVar3)(lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  goto LAB_1004390a4;
}

