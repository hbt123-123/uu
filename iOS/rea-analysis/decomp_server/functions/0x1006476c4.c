// rea decompile_all
// name: FUN_1006476c4
// address: 0x1006476c4
// body: available
// range: 0x1006476c4-0x1006477eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006476c4(long *param_1,long param_2,long param_3,char param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_4 == '\0') {
    if (param_3 == 0) goto LAB_1006477e8;
    uVar7 = 2;
  }
  else {
    if (param_4 == '\x01') {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006477e8);
        (*pcVar1)();
      }
      if (param_3 - param_2 < 2) {
LAB_1006477e8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006477ec);
        (*pcVar1)();
      }
    }
    else {
      uVar7 = *(ulong *)(param_5 + 0x10);
      if (uVar7 < 2) goto LAB_1006477e8;
      if (param_4 == '\x02') goto LAB_100647744;
    }
    uVar7 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006477e4);
      (*pcVar1)();
    }
  }
LAB_100647744:
  if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006477dc);
    (*pcVar1)();
  }
  lVar8 = (long)(uVar7 + 1) / 2;
  lVar4 = 0x7fffffffffffffff;
  lVar2 = lVar8;
  lVar5 = param_2;
  lVar6 = param_3;
  FUN_100647200();
  if ((long)(uVar7 + 1) < -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006477e0);
    (*pcVar1)();
  }
  lVar3 = 0;
  FUN_100647200();
  *param_1 = lVar2;
  param_1[1] = lVar4;
  *(char *)(param_1 + 2) = (char)lVar5;
  param_1[3] = lVar6;
  param_1[4] = lVar3;
  param_1[5] = lVar8;
  *(char *)(param_1 + 6) = (char)param_2;
  param_1[7] = param_3;
  return;
}

