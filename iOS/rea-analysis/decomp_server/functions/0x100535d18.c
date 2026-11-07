// rea decompile_all
// name: FUN_100535d18
// address: 0x100535d18
// body: available
// range: 0x100535d18-0x100535e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100535d18(undefined8 *param_1,ulong param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  lVar4 = *param_3;
  if (lVar4 == param_4) {
LAB_100535d30:
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,param_1,0,0);
    uVar5 = 0xd;
  }
  else {
    if (*(char *)((long)param_1 + lVar4) == '-') {
      lVar1 = 0;
      if (param_1 != (undefined8 *)0x0) {
        lVar1 = param_2 - (long)param_1;
      }
      if ((lVar4 < 0) || (lVar1 <= lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100535e6c);
        (*pcVar2)();
      }
      lVar4 = lVar4 + 1;
      *param_3 = lVar4;
      if (lVar4 == param_4) goto LAB_100535d30;
      if (*(byte *)((long)param_1 + lVar4) - 0x3a < 0xfffffff6) {
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,param_1,0,0);
        uVar5 = 1;
        goto LAB_100535d58;
      }
      FUN_1005356d4();
      if (unaff_x21 != 0) {
        return;
      }
      if ((param_2 & 1) != 0) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
      bVar3 = param_1 == (undefined8 *)0x8000000000000000;
      param_1 = (undefined8 *)0x8000000000000000;
      if (bVar3) {
        return;
      }
    }
    else {
      FUN_1005356d4();
      if (unaff_x21 != 0) {
        return;
      }
      if ((param_2 & 1) != 0) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,param_1,0,0);
    uVar5 = 2;
  }
LAB_100535d58:
  param_1[1] = uVar5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}

