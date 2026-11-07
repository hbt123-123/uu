// rea decompile_all
// name: FUN_10066cd34
// address: 0x10066cd34
// body: available
// range: 0x10066cd34-0x10066cf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066cd34(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  undefined *puVar7;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar8 = *(long *)(unaff_x20 + 0x68);
  if (lVar8 == 0) {
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar10 = *(long *)(unaff_x20 + 0x78);
    lVar3 = lVar10;
    FUN_10066d424();
    uVar6 = (undefined1)lVar3;
    if (unaff_x21 == 0) {
      thunk_FUN_1006654ec();
      FUN_10064c630();
      FUN_10064e848(lVar2,uVar9,uVar11,lVar8,*(undefined8 *)(unaff_x20 + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                    *(undefined8 *)(unaff_x20 + 0x28),param_1,param_2,uVar6);
      _swift_bridgeObjectRelease(param_4);
      lVar3 = lVar2;
      uVar5 = uVar9;
      FUN_10065f798(lVar2,uVar9,uVar11,lVar8);
      if (SCARRY8(lVar3,7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066cefc);
        (*pcVar1)();
      }
      if ((long)(lVar3 + 7U) < 8) {
        _swift_bridgeObjectRelease(lVar8);
        puVar7 = (undefined *)0x0;
        uVar9 = 0xc000000000000000;
      }
      else {
        puVar12 = (undefined *)(lVar3 + 7U >> 3);
        puVar7 = puVar12;
        FUN_10009a308();
        local_60 = puVar7;
        uStack_58 = uVar5;
        FUN_10064c1f8(&local_60,puVar12,lVar2,uVar9,uVar11,lVar8);
        puVar7 = local_60;
        uVar9 = uStack_58;
      }
      puVar12 = puVar7;
      FUN_100665cbc(puVar7,uVar9);
      FUN_100006cdc(puVar7,uVar9);
      puVar7 = (undefined *)(lVar10 - *(long *)(puVar12 + 0x10));
      if (SBORROW8(lVar10,*(long *)(puVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066cf00);
        (*pcVar1)();
      }
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066cf04);
        (*pcVar1)();
      }
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar7 != (undefined *)0x0) {
        puVar4 = puVar7;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar7,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar4 + 0x10) = puVar7;
        _bzero(puVar4 + 0x20,(size_t)puVar7);
      }
      local_60 = puVar4;
      FUN_100628ae0(puVar12);
    }
  }
  return;
}

