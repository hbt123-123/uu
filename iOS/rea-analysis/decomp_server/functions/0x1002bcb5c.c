// rea decompile_all
// name: FUN_1002bcb5c
// address: 0x1002bcb5c
// body: available
// range: 0x1002bcb5c-0x1002bcc43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bcb5c(ulong *param_1,ulong *param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bcc44);
    (*pcVar1)();
  }
  uVar3 = *param_2;
  uVar9 = uVar3;
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = *param_4 - uVar3;
    if (param_3 - 1U <= uVar5) {
      uVar5 = param_3 - 1U;
    }
    if ((uVar3 ^ 0x7fffffffffffffff) <= uVar5) {
      uVar5 = uVar3 ^ 0x7fffffffffffffff;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 < 5) {
      lVar6 = 0;
    }
    else {
      uVar9 = 4;
      if ((uVar5 & 3) != 0) {
        uVar9 = uVar5 & 3;
      }
      lVar6 = uVar5 - uVar9;
      lVar4 = 0;
      lVar8 = 0;
      lVar10 = 0;
      lVar7 = lVar6;
      uVar9 = uVar3;
      do {
        lVar4 = lVar4 + 1;
        lVar8 = lVar8 + 1;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + -4;
      } while (lVar7 != 0);
      uVar9 = uVar9 + lVar10 + lVar4 + lVar8;
    }
    lVar7 = lVar6 + uVar3 + -0x7fffffffffffffff;
    lVar4 = (lVar6 + uVar3) - *param_4;
    param_3 = param_3 - lVar6;
    do {
      bVar2 = lVar4 == 0;
      if (lVar4 == 0) {
        uVar9 = 0;
        break;
      }
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bcc40);
        (*pcVar1)();
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = uVar9;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}

