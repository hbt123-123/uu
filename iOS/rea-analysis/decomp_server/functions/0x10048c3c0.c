// rea decompile_all
// name: FUN_10048c3c0
// address: 0x10048c3c0
// body: available
// range: 0x10048c3c0-0x10048c50b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010048c45c) */
/* WARNING: Removing unreachable block (ram,0x00010048c4ac) */

void FUN_10048c3c0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
LAB_10048c418:
  while( true ) {
    lVar1 = param_3;
    uVar2 = param_4;
    (*pcVar4)();
    if ((unaff_x21 != 0) || ((uVar2 & 1) != 0)) {
      return;
    }
    if (lVar1 < 3) break;
    if (lVar1 == 3) {
      FUN_10048c50c(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 4) {
      FUN_10048c5a0(param_2,param_1,param_3,param_4);
    }
    else if (lVar1 == 5) {
      FUN_10048c634(param_2,param_1,param_3,param_4);
    }
  }
  if (lVar1 != 1) goto code_r0x00010048c468;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0x21,0);
  pcVar3 = *(code **)(param_4 + 0x48);
  lVar1 = param_1 + 0x10;
  goto LAB_10048c4d0;
code_r0x00010048c468:
  if (lVar1 == 2) {
    _swift_beginAccess(param_1 + 0x18,auStack_58,0x21,0);
    pcVar3 = *(code **)(param_4 + 0x150);
    lVar1 = param_1 + 0x18;
LAB_10048c4d0:
    (*pcVar3)(lVar1,param_3,param_4);
    _swift_endAccess(auStack_58);
  }
  goto LAB_10048c418;
}

