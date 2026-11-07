// rea decompile_all
// name: FUN_10066beec
// address: 0x10066beec
// body: available
// range: 0x10066beec-0x10066c19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066beec(undefined1 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *local_60;
  undefined8 uStack_58;
  
  if ((param_4 & 1) != 0) {
    uVar13 = 0;
    lVar9 = param_3;
    uVar10 = param_4;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    uVar7 = (undefined1)lVar9;
    puVar2 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar2 == (undefined1 *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar2 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c184);
      (*pcVar1)();
    }
    if (lVar9 == (param_4 >> 1) - param_3) {
      puVar2 = param_1;
      _swift_dynamicCastClass(param_1,uVar13);
      if (puVar2 == (undefined1 *)0x0) {
        _swift_unknownObjectRelease(param_1);
        lVar9 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
        param_4 = uVar10;
        puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        lVar9 = *(long *)(puVar2 + 0x10);
        param_4 = uVar10;
      }
      goto joined_r0x00010066c0d0;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2);
  uVar7 = (undefined1)param_3;
  lVar9 = *(long *)(param_1 + 0x10);
  puVar2 = param_1;
joined_r0x00010066c0d0:
  if (lVar9 != 0) {
    if (SCARRY8(lVar9,0xb)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c180);
      (*pcVar1)();
    }
    lVar12 = *(long *)(unaff_x20 + 0x78);
    if (lVar9 + 0xb <= lVar12) {
      puVar3 = puVar2;
      lVar4 = lVar12;
      FUN_10066a9e8();
      _swift_release(puVar2);
      thunk_FUN_1006654ec();
      FUN_10064c630();
      lVar9 = *(long *)(unaff_x20 + 0x30);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar10 = (ulong)*(byte *)(unaff_x20 + 0x40);
      FUN_10064e848(lVar9,uVar13,uVar10,uVar8,*(undefined8 *)(unaff_x20 + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                    *(undefined8 *)(unaff_x20 + 0x28),puVar3,lVar4,uVar7);
      _swift_bridgeObjectRelease(param_4);
      lVar4 = lVar9;
      uVar6 = uVar13;
      FUN_10065f798(lVar9,uVar13,uVar10,uVar8);
      if (SCARRY8(lVar4,7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c19c);
        (*pcVar1)();
      }
      if ((long)(lVar4 + 7U) < 8) {
        _swift_bridgeObjectRelease(uVar8);
        puVar11 = (undefined *)0x0;
        uVar13 = 0xc000000000000000;
      }
      else {
        puVar14 = (undefined *)(lVar4 + 7U >> 3);
        puVar11 = puVar14;
        FUN_10009a308();
        local_60 = puVar11;
        uStack_58 = uVar6;
        FUN_10064c1f8(&local_60,puVar14,lVar9,uVar13,uVar10,uVar8);
        puVar11 = local_60;
        uVar13 = uStack_58;
      }
      puVar14 = puVar11;
      FUN_100665cbc(puVar11,uVar13);
      FUN_100006cdc(puVar11,uVar13);
      puVar11 = (undefined *)(lVar12 - *(long *)(puVar14 + 0x10));
      if (-1 < (long)puVar11) {
        puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (lVar12 != *(long *)(puVar14 + 0x10)) {
          puVar5 = puVar11;
          __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                    (puVar11,PTR___ss5UInt8VN_100995d40);
          *(undefined **)(puVar5 + 0x10) = puVar11;
          _bzero(puVar5 + 0x20,(size_t)puVar11);
        }
        local_60 = puVar5;
        FUN_100628ae0(puVar14);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c1a0);
      (*pcVar1)();
    }
  }
  _swift_release();
  FUN_10066cb9c();
  _swift_allocError(&DAT_1009e5530,puVar2,0,0);
  *puVar2 = 8;
  _swift_willThrow();
  return;
}

