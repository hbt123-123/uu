// rea decompile_all
// name: FUN_100508e58
// address: 0x100508e58
// body: available
// range: 0x100508e58-0x100509007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508e58(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *unaff_x20;
  
  lVar4 = 0;
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar8 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar8 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar8;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  puVar7 = (ulong *)(param_1 + 0x28);
  lVar8 = lVar6 + 1;
  do {
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      lVar8 = lVar1 * lVar6;
      if (SUB168(SEXT816(lVar1) * SEXT816(lVar6),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100509000);
        (*pcVar3)();
      }
      if (!SCARRY8(lVar8,lVar4)) {
        if (!SCARRY8(*unaff_x20,lVar8 + lVar4)) {
          *unaff_x20 = *unaff_x20 + lVar8 + lVar4;
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100509008);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100509004);
      (*pcVar3)();
    }
    uVar13 = puVar7[-1];
    uVar2 = (uint)(*puVar7 >> 0x20);
    uVar12 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar9 = *puVar7 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)(uVar13 >> 0x20);
        if (SBORROW4(iVar10,(int)uVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100508ff8);
          (*pcVar3)();
        }
        uVar9 = (ulong)(iVar10 - (int)uVar13);
      }
      if (uVar9 < 0x80) goto LAB_100508f30;
LAB_100508f08:
      if ((long)uVar9 < 0) {
        lVar5 = lVar4 + 10;
        if (SCARRY8(lVar4,10)) goto LAB_100508fc0;
      }
      else if (uVar9 >> 0x23 == 0) {
        if (uVar9 < 0x200000) {
          lVar11 = 2;
          if (0x3fff < uVar9) {
LAB_100508f94:
            lVar11 = lVar11 + 1;
          }
        }
        else {
          lVar11 = 4;
          uVar13 = uVar9 >> 0x1c;
joined_r0x000100508f90:
          if (uVar13 != 0) goto LAB_100508f94;
        }
        lVar5 = lVar4 + lVar11;
        if (SCARRY8(lVar4,lVar11)) goto LAB_100508fc0;
      }
      else {
        if (uVar9 >> 0x31 != 0) {
          lVar11 = 8;
          uVar13 = uVar9 >> 0x38;
          goto joined_r0x000100508f90;
        }
        if (uVar9 >> 0x2a == 0) {
          lVar5 = lVar4 + 6;
          if (SCARRY8(lVar4,6)) goto LAB_100508fc0;
        }
        else {
          lVar5 = lVar4 + 7;
          if (SCARRY8(lVar4,7)) goto LAB_100508fc0;
        }
      }
    }
    else {
      if (uVar12 == 2) {
        uVar9 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100508ffc);
          (*pcVar3)();
        }
        if (0x7f < uVar9) goto LAB_100508f08;
      }
      else {
        uVar9 = 0;
      }
LAB_100508f30:
      lVar5 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
LAB_100508fc0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100508fc4);
        (*pcVar3)();
      }
    }
    puVar7 = puVar7 + 2;
    lVar4 = lVar5 + uVar9;
    if (SCARRY8(lVar5,uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100508ff4);
      (*pcVar3)();
    }
  } while( true );
}

