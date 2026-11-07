// rea decompile_all
// name: FUN_100180e48
// address: 0x100180e48
// body: available
// range: 0x100180e48-0x100180edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100180e48(long *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  iVar4 = (int)((ulong)param_4 >> 0x20);
  if (param_2 == 0) {
    lVar3 = -0x1000000000000000;
    param_2 = 0;
  }
  else {
    uVar1 = (uint)(param_5 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar5 == 0) {
        uVar6 = param_5 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar4,(int)param_4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100180edc);
          (*pcVar2)();
        }
        uVar6 = (ulong)(iVar4 - (int)param_4);
      }
    }
    else if (uVar5 == 2) {
      uVar6 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100180e94);
        (*pcVar2)();
      }
    }
    else {
      uVar6 = 0;
    }
    lVar3 = uVar6 - param_6;
    if (SBORROW8(uVar6,param_6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100180ed8);
      (*pcVar2)();
    }
    param_2 = param_2 + 2;
    FUN_100180edc();
  }
  *param_1 = param_2;
  param_1[1] = lVar3;
  return;
}

