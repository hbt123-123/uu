// rea decompile_all
// name: FUN_1004fbd20
// address: 0x1004fbd20
// body: available
// range: 0x1004fbd20-0x1004fbdd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1004fbd20(undefined1 *param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_3 == 0) {
    param_4 = 0;
  }
  else if (param_4 != 0) {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fbdd4);
      (*pcVar2)();
    }
    lVar6 = 0;
    bVar3 = false;
    uVar4 = param_2;
    while (!bVar3) {
      bVar3 = (uVar4 & 0xff) == (param_2 & 0xff00) >> 8;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar4 & 0xff) + 1;
        if (uVar5 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fbdd0);
          (*pcVar2)();
        }
      }
      *(char *)(param_3 + lVar6) = (char)uVar4;
      if (param_4 + -1 == lVar6) goto LAB_1004fbdb0;
      lVar1 = lVar6 + 1;
      lVar6 = lVar6 + 1;
      uVar4 = uVar5;
      if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fbd88);
        (*pcVar2)();
      }
    }
    bVar3 = true;
    param_4 = lVar6;
    uVar5 = uVar4;
    goto LAB_1004fbdb0;
  }
  bVar3 = false;
  uVar5 = param_2;
LAB_1004fbdb0:
  *param_1 = (char)param_2;
  param_1[1] = (char)(param_2 >> 8);
  param_1[2] = (char)uVar5;
  param_1[3] = bVar3;
  return param_4;
}

