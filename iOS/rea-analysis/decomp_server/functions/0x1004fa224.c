// rea decompile_all
// name: FUN_1004fa224
// address: 0x1004fa224
// body: available
// range: 0x1004fa224-0x1004fa407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa224(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uStack_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  uVar9 = (uint)param_1 & 0xff;
  uVar6 = (uint)param_1 >> 8 & 0xff;
  uVar4 = (ulong)(uVar6 - uVar9);
  if (uVar6 < uVar9) {
    uVar4 = -(ulong)(uVar9 - uVar6);
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,uVar4 + 1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa30c);
    (*pcVar1)();
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar7 == 0) ||
     (uVar5 = *(ulong *)(uVar8 + 0x18) >> 1, (long)uVar5 < (long)(lVar11 + uVar4 + 1))) {
    FUN_100506f84();
    uVar5 = *(ulong *)(uVar7 + 0x18) >> 1;
    uVar8 = uVar7;
  }
  puVar12 = (undefined1 *)(uVar5 - *(long *)(uVar8 + 0x10));
  puVar3 = &uStack_44;
  FUN_1004fbd20(puVar3,param_1,uVar8 + *(long *)(uVar8 + 0x10) + 0x20,puVar12);
  if ((long)puVar3 <= (long)uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa310);
    (*pcVar1)();
  }
  if (0 < (long)puVar3) {
    if (SCARRY8(*(long *)(uVar8 + 0x10),(long)puVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa33c);
      (*pcVar1)();
    }
    *(undefined1 **)(uVar8 + 0x10) = puVar3 + *(long *)(uVar8 + 0x10);
  }
  if ((puVar3 == puVar12) && ((local_41 & 1) == 0)) {
    uVar4 = *(ulong *)(uVar8 + 0x10);
    uVar9 = (uint)local_42;
    bVar2 = (uint)local_42 == (uint)local_43;
    if (bVar2) {
      uVar6 = 0;
    }
    else {
      uVar6 = local_42 + 1;
      if (uVar6 >> 8 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa348);
        (*pcVar1)();
      }
    }
    do {
      uVar7 = *(ulong *)(uVar8 + 0x18) >> 1;
      if ((long)uVar7 < (long)(uVar4 + 1)) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100506f84(uVar5,uVar4 + 1,1,uVar8);
        uVar7 = *(ulong *)(uVar5 + 0x18) >> 1;
        uVar8 = uVar5;
      }
      if ((long)uVar4 < (long)uVar7) {
        lVar11 = uVar4 + 0x20;
        uVar10 = uVar9;
        do {
          uVar9 = uVar6;
          *(char *)(uVar8 + lVar11) = (char)uVar10;
          if (bVar2) {
            *(long *)(uVar8 + 0x10) = lVar11 + -0x1f;
            goto LAB_1004fa2ec;
          }
          bVar2 = (uVar9 & 0xff) == (uint)local_43;
          if (bVar2) {
            uVar6 = 0;
          }
          else {
            uVar6 = (uVar9 & 0xff) + 1;
            if (uVar6 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fa408);
              (*pcVar1)();
            }
          }
          lVar11 = lVar11 + 1;
          uVar4 = uVar7;
          uVar10 = uVar9;
        } while (lVar11 - uVar7 != 0x20);
      }
      *(ulong *)(uVar8 + 0x10) = uVar4;
    } while( true );
  }
LAB_1004fa2ec:
  *unaff_x20 = uVar8;
  return;
}

