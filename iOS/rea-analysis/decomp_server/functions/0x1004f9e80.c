// rea decompile_all
// name: FUN_1004f9e80
// address: 0x1004f9e80
// body: available
// range: 0x1004f9e80-0x1004fa02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f9e80(undefined1 *param_1,size_t param_2)

{
  size_t sVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong *unaff_x20;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  
  uVar7 = *unaff_x20;
  lVar10 = *(long *)(uVar7 + 0x10);
  if (SCARRY8(lVar10,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9f78);
    (*pcVar2)();
  }
  uVar12 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar12 == 0) ||
     (uVar4 = *(ulong *)(uVar7 + 0x18) >> 1, (long)uVar4 < (long)(lVar10 + param_2))) {
    FUN_100506f84();
    uVar4 = *(ulong *)(uVar12 + 0x18) >> 1;
    uVar7 = uVar12;
  }
  sVar1 = uVar4 - *(long *)(uVar7 + 0x10);
  if ((param_2 == 0) || (sVar1 == 0)) {
    puVar5 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar5 = param_1;
    }
    puVar9 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar9 = param_1 + param_2;
    }
    sVar11 = 0;
  }
  else {
    sVar11 = sVar1;
    if ((long)param_2 <= (long)sVar1) {
      sVar11 = param_2;
    }
    _memcpy((void *)(uVar7 + *(long *)(uVar7 + 0x10) + 0x20),param_1,sVar11);
    puVar5 = param_1 + sVar11;
    puVar9 = param_1 + param_2;
  }
  if ((long)sVar11 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9f7c);
    (*pcVar2)();
  }
  if (0 < (long)sVar11) {
    if (SCARRY8(*(long *)(uVar7 + 0x10),sVar11)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004f9f98);
      (*pcVar2)();
    }
    *(size_t *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + sVar11;
  }
  if (((sVar11 == sVar1) && (puVar5 != (undefined1 *)0x0)) && (puVar9 != puVar5)) {
    uVar12 = *(ulong *)(uVar7 + 0x10);
    puVar6 = puVar5 + 1;
    uVar8 = *puVar5;
    do {
      uVar4 = *(ulong *)(uVar7 + 0x18) >> 1;
      if ((long)uVar4 < (long)(uVar12 + 1)) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_100506f84(uVar3,uVar12 + 1,1,uVar7);
        uVar4 = *(ulong *)(uVar3 + 0x18) >> 1;
        uVar7 = uVar3;
      }
      if ((long)uVar12 < (long)uVar4) {
        lVar10 = uVar12 + 0x20;
        puVar5 = puVar6;
        do {
          *(undefined1 *)(uVar7 + lVar10) = uVar8;
          if (puVar5 == puVar9) {
            *(long *)(uVar7 + 0x10) = lVar10 + -0x1f;
            goto LAB_1004f9f5c;
          }
          uVar8 = *puVar5;
          puVar6 = puVar6 + 1;
          lVar10 = lVar10 + 1;
          puVar5 = puVar5 + 1;
          uVar12 = uVar4;
        } while (lVar10 - uVar4 != 0x20);
      }
      *(ulong *)(uVar7 + 0x10) = uVar12;
    } while( true );
  }
LAB_1004f9f5c:
  *unaff_x20 = uVar7;
  return;
}

