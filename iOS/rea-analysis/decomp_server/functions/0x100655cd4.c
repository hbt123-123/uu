// rea decompile_all
// name: FUN_100655cd4
// address: 0x100655cd4
// body: available
// range: 0x100655cd4-0x100655f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100655cd4(ulong param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  FUN_10065f798();
  if (0x3f < (long)uVar2) {
    lVar3 = 0;
    FUN_10064b1b4(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,param_2,param_3,param_4);
    if (lVar3 != -1) goto LAB_100655d6c;
    goto LAB_100655dd4;
  }
  if ((param_3 & 0xff) == 0) {
    if (param_2 == 0 && param_1 == 0) goto LAB_100655d6c;
    uVar2 = param_1;
    if (param_2 == 0 && param_1 == 0) goto LAB_100655f10;
  }
  else {
    if (((uint)param_3 & 0xff) == 1) {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655f10);
        (*pcVar1)();
      }
      if (param_2 == param_1) goto LAB_100655d6c;
LAB_100655da0:
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655f04);
        (*pcVar1)();
      }
      if ((long)(param_2 - param_1) < 1) {
LAB_100655f10:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655f14);
        (*pcVar1)();
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655f08);
        (*pcVar1)();
      }
      if (*(ulong *)(param_4 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655f0c);
        (*pcVar1)();
      }
      lVar3 = param_4 + param_1 * 8;
    }
    else {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_100655d6c;
      lVar3 = param_4;
      if (((uint)param_3 & 0xff) != 2) goto LAB_100655da0;
    }
    uVar2 = *(ulong *)(lVar3 + 0x20);
  }
  if ((long)uVar2 < 1) {
LAB_100655d6c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100655d70);
    (*pcVar1)();
  }
LAB_100655dd4:
  FUN_10065f798(param_1,param_2,param_3,param_4);
  uVar2 = param_1;
  uVar5 = param_7;
  FUN_100655754();
  uVar4 = uVar2;
  FUN_10064b1b4();
  if (uVar4 != 0xffffffffffffffff) {
    _swift_bridgeObjectRelease(uVar5);
    uVar2 = param_1;
    uVar5 = param_7;
    FUN_100655754(param_1,param_5,param_6,param_7);
    uVar4 = uVar2;
    FUN_10064b1b4();
    while (uVar4 != 0xffffffffffffffff) {
      _swift_bridgeObjectRelease(uVar5);
      uVar2 = param_1;
      uVar5 = param_7;
      FUN_100655754(param_1,param_5,param_6);
      uVar4 = uVar2;
      FUN_10064b1b4();
    }
  }
  return uVar2;
}

