// rea decompile_all
// name: FUN_100508cd4
// address: 0x100508cd4
// body: available
// range: 0x100508cd4-0x100508e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508cd4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  ulong *puVar10;
  
  lVar8 = 0;
  lVar2 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar2 = 5;
  }
  lVar6 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar6 = lVar2;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar6 = 2;
  }
  lVar2 = 1;
  if (0x7f < param_2 << 3) {
    lVar2 = lVar6;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  puVar10 = (ulong *)(param_1 + 0x28);
  lVar6 = lVar9 + 1;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = lVar2 * lVar9;
      if (SUB168(SEXT816(lVar2) * SEXT816(lVar9),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100508e50);
        (*pcVar3)();
      }
      if (!SCARRY8(lVar6,lVar8)) {
        if (!SCARRY8(*unaff_x20,lVar6 + lVar8)) {
          *unaff_x20 = *unaff_x20 + lVar6 + lVar8;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100508e58);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100508e54);
      (*pcVar3)();
    }
    uVar4 = puVar10[-1];
    uVar7 = *puVar10;
    if ((uVar7 >> 0x3c & 1) == 0) {
      if ((uVar7 >> 0x3d & 1) == 0) {
        uVar4 = uVar4 & 0xffffffffffff;
        if (0x7f < uVar4) goto LAB_100508d54;
      }
      else {
        uVar4 = uVar7 >> 0x38 & 0xf;
      }
LAB_100508d7c:
      lVar5 = 1;
    }
    else {
      __sSS8UTF8ViewV13_foreignCountSiyF();
      if (uVar4 < 0x80) goto LAB_100508d7c;
LAB_100508d54:
      if ((long)uVar4 < 0) {
        lVar5 = 10;
      }
      else if (uVar4 >> 0x23 == 0) {
        if (uVar4 < 0x200000) {
          lVar5 = 2;
          if (uVar4 < 0x4000) goto LAB_100508d80;
        }
        else {
          lVar5 = 4;
          uVar7 = uVar4 >> 0x1c;
joined_r0x000100508dd8:
          if (uVar7 == 0) goto LAB_100508d80;
        }
        lVar5 = lVar5 + 1;
      }
      else {
        if (uVar4 >> 0x31 != 0) {
          lVar5 = 8;
          uVar7 = uVar4 >> 0x38;
          goto joined_r0x000100508dd8;
        }
        if (uVar4 >> 0x2a == 0) {
          lVar5 = 6;
        }
        else {
          lVar5 = 7;
        }
      }
    }
LAB_100508d80:
    lVar1 = lVar8 + lVar5;
    if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100508e48);
      (*pcVar3)();
    }
    puVar10 = puVar10 + 2;
    lVar8 = lVar1 + uVar4;
    if (SCARRY8(lVar1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100508e4c);
      (*pcVar3)();
    }
  } while( true );
}

