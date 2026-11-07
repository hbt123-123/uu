// rea decompile_all
// name: FUN_1005cd230
// address: 0x1005cd230
// body: available
// range: 0x1005cd230-0x1005cd377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cd230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6,undefined1 param_7)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  uVar1 = *param_6;
  lVar3 = 0;
  FUN_1005c8c98();
  lVar4 = *(long *)(param_6 + *(int *)(lVar3 + 0x24));
  if (lVar4 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd360);
    (*pcVar2)();
  }
  if (0x7fffffff < lVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd364);
    (*pcVar2)();
  }
  lVar5 = *(long *)(param_6 + *(int *)(lVar3 + 0x2c));
  if (lVar5 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd368);
    (*pcVar2)();
  }
  if (lVar5 < 0x80000000) {
    dVar6 = *(double *)(param_6 + *(int *)(lVar3 + 0x34));
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd370);
      (*pcVar2)();
    }
    if (-9.223372036854778e+18 < dVar6) {
      if (dVar6 < 9.223372036854776e+18) {
        FUN_1005ce158(param_3,param_4,param_5,param_2,uVar1,param_6[*(int *)(lVar3 + 0x20)],lVar4,
                      lVar5,*(undefined8 *)(param_6 + *(int *)(lVar3 + 0x30)),(long)dVar6,param_7);
        *param_1 = param_3;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd378);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd374);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cd36c);
  (*pcVar2)();
}

