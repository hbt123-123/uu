// rea decompile_all
// name: FUN_10062872c
// address: 0x10062872c
// body: available
// range: 0x10062872c-0x1006289bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062872c(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  long lVar11;
  
  uVar10 = *unaff_x20;
  lVar11 = *(long *)(uVar10 + 0x10);
  if (SCARRY8(lVar11,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006288c8);
    (*pcVar1)();
  }
  uVar2 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar2 == 0) ||
     (uVar5 = *(ulong *)(uVar10 + 0x18) >> 1, (long)uVar5 < (long)(lVar11 + param_1))) {
    FUN_100507a40();
    uVar5 = *(ulong *)(uVar2 + 0x18) >> 1;
    uVar10 = uVar2;
  }
  uVar6 = *(ulong *)(uVar10 + 0x10);
  uVar2 = uVar5 - uVar6;
  if (uVar2 == 0) {
    if (0 < (long)param_1) {
LAB_1006289a4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006289a8);
      (*pcVar1)();
    }
    uVar7 = 0;
  }
  else {
    if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006288c0);
      (*pcVar1)();
    }
    uVar7 = param_1;
    if (param_1 != 0) {
      lVar11 = uVar10 + uVar6 * 8;
      puVar3 = (undefined8 *)(lVar11 + 0x20);
      uVar4 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
      uVar9 = uVar4;
      if (uVar5 + ~uVar6 <= uVar4) {
        uVar9 = uVar5 + ~uVar6;
      }
      if (param_1 - 1 <= uVar9) {
        uVar9 = param_1 - 1;
      }
      if (uVar9 < 4) {
        uVar6 = 0;
        uVar5 = 1;
      }
      else {
        uVar5 = uVar9 + 1 & 3;
        uVar6 = 4;
        if (uVar5 != 0) {
          uVar6 = uVar5;
        }
        uVar6 = (uVar9 + 1) - uVar6;
        uVar5 = uVar6 + 1;
        puVar3 = puVar3 + uVar6;
        puVar8 = (undefined8 *)(lVar11 + 0x30);
        uVar9 = uVar6;
        do {
          puVar8[-1] = param_2;
          puVar8[-2] = param_2;
          puVar8[1] = param_2;
          *puVar8 = param_2;
          puVar8 = puVar8 + 4;
          uVar9 = uVar9 - 4;
        } while (uVar9 != 0);
      }
      do {
        if (uVar6 == uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006288c4);
          (*pcVar1)();
        }
        *puVar3 = param_2;
        if (uVar2 == uVar5) {
          uVar7 = uVar2;
          if ((long)uVar2 < (long)param_1) goto LAB_1006289a4;
          break;
        }
        puVar3 = puVar3 + 1;
        uVar9 = uVar5 + 1;
        uVar6 = uVar5;
        uVar5 = uVar9;
      } while (param_1 + 1 != uVar9);
    }
    if (0 < (long)uVar7) {
      if (SCARRY8(*(long *)(uVar10 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006289b8);
        (*pcVar1)();
      }
      *(ulong *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + uVar7;
    }
  }
  if ((uVar7 == uVar2) && (uVar2 != param_1)) {
    if ((long)param_1 <= (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006289c0);
      (*pcVar1)();
    }
    uVar5 = *(ulong *)(uVar10 + 0x10);
    uVar2 = uVar2 + 1;
    do {
      uVar6 = *(ulong *)(uVar10 + 0x18) >> 1;
      if ((long)uVar6 < (long)(uVar5 + 1)) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_100507a40(uVar7,uVar5 + 1,1,uVar10,&DAT_100ab7e10,&DAT_100848cb8);
        uVar6 = *(ulong *)(uVar7 + 0x18) >> 1;
        uVar10 = uVar7;
      }
      uVar7 = uVar2;
      if ((long)uVar5 < (long)uVar6) {
        uVar7 = (uVar2 + uVar6) - uVar5;
        lVar11 = uVar5 + 4;
        uVar9 = uVar2;
        do {
          *(undefined8 *)(uVar10 + lVar11 * 8) = param_2;
          if (param_1 == uVar9) {
            *(long *)(uVar10 + 0x10) = lVar11 + -3;
            goto LAB_1006288a4;
          }
          if (((long)uVar2 < 0) || ((long)param_1 <= (long)uVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006289bc);
            (*pcVar1)();
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
          uVar5 = uVar6;
        } while (lVar11 - uVar6 != 4);
      }
      *(ulong *)(uVar10 + 0x10) = uVar5;
      uVar2 = uVar7;
    } while( true );
  }
LAB_1006288a4:
  *unaff_x20 = uVar10;
  return;
}

