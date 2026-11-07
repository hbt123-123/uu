// rea decompile_all
// name: FUN_10066c1a0
// address: 0x10066c1a0
// body: available
// range: 0x10066c1a0-0x10066c357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066c1a0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x21;
  undefined *unaff_x23;
  undefined8 uVar10;
  long lVar11;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(unaff_x20 + 0x78);
  lVar3 = lVar11;
  cVar5 = param_2;
  FUN_10066c358();
  if (unaff_x21 == 0) {
    thunk_FUN_1006654ec();
    FUN_10064c630();
    lVar2 = *(long *)(unaff_x20 + 0x30);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = (ulong)*(byte *)(unaff_x20 + 0x40);
    FUN_10064e848(lVar2,uVar10,uVar7,uVar6,*(undefined8 *)(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28),param_1,lVar3,cVar5);
    _swift_bridgeObjectRelease(param_4);
    lVar3 = lVar2;
    uVar4 = uVar10;
    FUN_10065f798(lVar2,uVar10,uVar7,uVar6);
    if (SCARRY8(lVar3,7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c350);
      (*pcVar1)();
    }
    if ((long)(lVar3 + 7U) < 8) {
      _swift_bridgeObjectRelease(uVar6);
      puVar9 = (undefined *)0x0;
      uVar10 = 0xc000000000000000;
    }
    else {
      puVar8 = (undefined *)(lVar3 + 7U >> 3);
      puVar9 = puVar8;
      FUN_10009a308();
      local_70 = puVar9;
      uStack_68 = uVar4;
      FUN_10064c1f8(&local_70,puVar8,lVar2,uVar10,uVar7,uVar6);
      puVar9 = local_70;
      uVar10 = uStack_68;
    }
    unaff_x23 = puVar9;
    FUN_100665cbc(puVar9,uVar10);
    FUN_100006cdc(puVar9,uVar10);
    if (param_2 != '\0') {
      puVar9 = (undefined *)(lVar11 - *(long *)(unaff_x23 + 0x10));
      if (SBORROW8(lVar11,*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c354);
        (*pcVar1)();
      }
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c358);
        (*pcVar1)();
      }
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar9;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar9,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar8 + 0x10) = puVar9;
        _bzero(puVar8 + 0x20,(size_t)puVar9);
      }
      local_70 = puVar8;
      FUN_100628ae0(unaff_x23);
      unaff_x23 = local_70;
    }
  }
  return unaff_x23;
}

