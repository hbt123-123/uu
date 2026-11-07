// rea decompile_all
// name: FUN_100508a34
// address: 0x100508a34
// body: available
// range: 0x100508a34-0x100508b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508a34(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar4 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar4 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar4 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    plVar6 = (long *)(param_1 + 0x20);
    lVar7 = lVar4;
    do {
      uVar8 = *plVar6 << 1 ^ *plVar6 >> 0x3f;
      if (uVar8 < 0x80) {
        lVar9 = 1;
      }
      else if ((long)uVar8 < 0) {
        lVar9 = 10;
      }
      else if (uVar8 >> 0x23 == 0) {
        if (uVar8 < 0x200000) {
          lVar9 = 2;
          if (uVar8 < 0x4000) goto LAB_100508b00;
        }
        else {
          lVar9 = 4;
LAB_100508af4:
          if (uVar8 >> 0x1c == 0) goto LAB_100508b00;
        }
LAB_100508afc:
        lVar9 = lVar9 + 1;
      }
      else {
        if (uVar8 >> 0x31 != 0) {
          uVar8 = uVar8 >> 0x1c;
          lVar9 = 8;
          goto LAB_100508af4;
        }
        lVar9 = 6;
        if (uVar8 >> 0x2a != 0) goto LAB_100508afc;
      }
LAB_100508b00:
      bVar3 = SCARRY8(lVar5,lVar9);
      lVar5 = lVar5 + lVar9;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100508b48);
        (*pcVar2)();
      }
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = lVar1 * lVar4;
  if (SUB168(SEXT816(lVar1) * SEXT816(lVar4),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508b4c);
    (*pcVar2)();
  }
  if (SCARRY8(lVar7,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508b50);
    (*pcVar2)();
  }
  if (SCARRY8(*unaff_x20,lVar7 + lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100508b54);
    (*pcVar2)();
  }
  *unaff_x20 = *unaff_x20 + lVar7 + lVar5;
  return;
}

