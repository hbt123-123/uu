// rea decompile_all
// name: FUN_1004f9cd4
// address: 0x1004f9cd4
// body: available
// range: 0x1004f9cd4-0x1004f9e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f9cd4(undefined1 *param_1,undefined1 *param_2)

{
  size_t sVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  long lVar10;
  size_t sVar11;
  size_t sVar12;
  size_t sVar13;
  
  sVar13 = (long)param_2 - (long)param_1;
  sVar1 = 0;
  if (param_1 != (undefined1 *)0x0) {
    sVar1 = sVar13;
  }
  uVar6 = *unaff_x20;
  lVar10 = *(long *)(uVar6 + 0x10);
  if (SCARRY8(lVar10,sVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9de0);
    (*pcVar2)();
  }
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar5 == 0) ||
     (uVar4 = *(ulong *)(uVar6 + 0x18) >> 1, (long)uVar4 < (long)(lVar10 + sVar1))) {
    FUN_100506f84();
    uVar4 = *(ulong *)(uVar5 + 0x18) >> 1;
    uVar6 = uVar5;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  sVar12 = uVar4 - uVar5;
  sVar11 = 0;
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_1 < param_2)) &&
     (uVar4 != uVar5)) {
    sVar11 = sVar13;
    if ((long)sVar12 <= (long)sVar13) {
      sVar11 = sVar12;
    }
    if ((long)sVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9e80);
      (*pcVar2)();
    }
    _memmove((void *)(uVar6 + uVar5 + 0x20),param_1,sVar11);
    param_1 = param_1 + sVar11;
  }
  if ((long)sVar11 < (long)sVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9de4);
    (*pcVar2)();
  }
  if (sVar11 != 0) {
    if (SCARRY8(*(long *)(uVar6 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9de8);
      (*pcVar2)();
    }
    *(size_t *)(uVar6 + 0x10) = *(long *)(uVar6 + 0x10) + sVar11;
  }
  if ((sVar11 != sVar12 || param_1 == (undefined1 *)0x0) || param_1 == param_2) {
LAB_1004f9dc0:
    *unaff_x20 = uVar6;
    return;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  puVar7 = param_1 + 1;
  uVar9 = *param_1;
  do {
    uVar4 = *(ulong *)(uVar6 + 0x18) >> 1;
    if ((long)uVar4 < (long)(uVar5 + 1)) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100506f84(uVar3,uVar5 + 1,1,uVar6);
      uVar4 = *(ulong *)(uVar3 + 0x18) >> 1;
      uVar6 = uVar3;
    }
    if ((long)uVar5 < (long)uVar4) {
      lVar10 = uVar5 + 0x20;
      puVar8 = puVar7;
      do {
        *(undefined1 *)(uVar6 + lVar10) = uVar9;
        if (puVar8 == param_2) {
          *(long *)(uVar6 + 0x10) = lVar10 + -0x1f;
          goto LAB_1004f9dc0;
        }
        puVar7 = puVar8 + 1;
        uVar9 = *puVar8;
        lVar10 = lVar10 + 1;
        puVar8 = puVar7;
        uVar5 = uVar4;
      } while (lVar10 - uVar4 != 0x20);
    }
    *(ulong *)(uVar6 + 0x10) = uVar5;
  } while( true );
}

