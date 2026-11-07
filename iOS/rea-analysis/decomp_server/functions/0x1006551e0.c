// rea decompile_all
// name: FUN_1006551e0
// address: 0x1006551e0
// body: available
// range: 0x1006551e0-0x10065536f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006551e0(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  FUN_10065f798();
  if (0x3f < (long)uVar2) {
    lVar3 = 0;
    FUN_10064b1b4(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,param_2,param_3,param_4);
    if (lVar3 != -1) goto LAB_10065526c;
    goto LAB_1006552d4;
  }
  if ((param_3 & 0xff) == 0) {
    if (param_2 == 0 && param_1 == 0) goto LAB_10065526c;
    uVar2 = param_1;
    if (param_2 == 0 && param_1 == 0) goto LAB_10065536c;
  }
  else {
    if (((uint)param_3 & 0xff) == 1) {
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065536c);
        (*pcVar1)();
      }
      if (param_2 == param_1) goto LAB_10065526c;
LAB_1006552a0:
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655360);
        (*pcVar1)();
      }
      if ((long)(param_2 - param_1) < 1) {
LAB_10065536c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655370);
        (*pcVar1)();
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655364);
        (*pcVar1)();
      }
      if (*(ulong *)(param_4 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100655368);
        (*pcVar1)();
      }
      lVar3 = param_4 + param_1 * 8;
    }
    else {
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_10065526c;
      lVar3 = param_4;
      if (((uint)param_3 & 0xff) != 2) goto LAB_1006552a0;
    }
    uVar2 = *(ulong *)(lVar3 + 0x20);
  }
  if ((long)uVar2 < 1) {
LAB_10065526c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100655270);
    (*pcVar1)();
  }
LAB_1006552d4:
  FUN_10065f798(param_1,param_2,param_3,param_4);
  while( true ) {
    uVar2 = param_1;
    FUN_100655374();
    uVar4 = uVar2;
    lVar3 = param_4;
    FUN_10064b1b4();
    if (uVar4 == 0xffffffffffffffff) break;
    _swift_bridgeObjectRelease(param_4);
    param_4 = lVar3;
  }
  return uVar2;
}

