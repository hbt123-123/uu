// rea decompile_all
// name: FUN_10066eedc
// address: 0x10066eedc
// body: available
// range: 0x10066eedc-0x10066f113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066eedc(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = lVar1;
  uVar12 = uVar9;
  FUN_10065f798(lVar1,uVar9,uVar2,uVar11);
  if (SCARRY8(lVar4,7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066f110);
    (*pcVar3)();
  }
  if ((long)(lVar4 + 7U) < 8) {
    uVar10 = 0;
    uVar9 = 0xc000000000000000;
  }
  else {
    uVar13 = lVar4 + 7U >> 3;
    uVar10 = uVar13;
    FUN_10009a308();
    local_70 = uVar10;
    uStack_68 = uVar12;
    _swift_bridgeObjectRetain(uVar11);
    FUN_10064c1f8(&local_70,uVar13,lVar1,uVar9,uVar2,uVar11);
    uVar9 = uStack_68;
    uVar10 = local_70;
  }
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar4 = lVar1;
  uVar11 = uVar12;
  FUN_10065f798(lVar1,uVar12,uVar2,uVar14);
  if (!SCARRY8(lVar4,7)) {
    if ((long)(lVar4 + 7U) < 8) {
      uVar13 = 0;
      uVar12 = 0xc000000000000000;
    }
    else {
      uVar15 = lVar4 + 7U >> 3;
      uVar13 = uVar15;
      FUN_10009a308();
      local_70 = uVar13;
      uStack_68 = uVar11;
      _swift_bridgeObjectRetain(uVar14);
      FUN_10064c1f8(&local_70,uVar15,lVar1,uVar12,uVar2,uVar14);
      uVar13 = local_70;
      uVar12 = uStack_68;
    }
    puVar5 = &DAT_100ab7e18;
    FUN_100004bb4(&DAT_100ab7e18,&DAT_100848cd0);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    uVar15 = uVar10;
    FUN_100665cbc(uVar10,uVar9);
    uVar8 = *(ulong *)(unaff_x20 + 0x78);
    uVar6 = uVar15;
    FUN_100669664();
    _swift_bridgeObjectRelease(uVar15);
    thunk_FUN_1006654ec();
    *(ulong *)(puVar5 + 0x20) = uVar6;
    *(ulong *)(puVar5 + 0x28) = uVar8 | 0x1000000000000000;
    puVar5[0x30] = 0;
    uVar15 = uVar13;
    FUN_100665cbc(uVar13,uVar12);
    uVar6 = uVar13;
    FUN_100665cbc(uVar13,uVar12);
    uVar8 = *(ulong *)(uVar6 + 0x10);
    _swift_bridgeObjectRelease();
    uVar6 = uVar15;
    FUN_100669664();
    _swift_bridgeObjectRelease(uVar15);
    thunk_FUN_1006654ec();
    *(ulong *)(puVar5 + 0x38) = uVar6;
    *(ulong *)(puVar5 + 0x40) = uVar8 | 0x1000000000000000;
    puVar5[0x48] = 0;
    puVar7 = puVar5;
    FUN_10062f234(puVar5,0,0);
    _swift_bridgeObjectRelease(puVar5);
    FUN_100006cdc(uVar13,uVar12);
    FUN_100006cdc(uVar10,uVar9);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10066f114);
  (*pcVar3)();
}

