// rea decompile_all
// name: FUN_10065a1e0
// address: 0x10065a1e0
// body: available
// range: 0x10065a1e0-0x10065a5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10065a1e0(long param_1,long param_2,uint param_3,undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long local_a0;
  long lStack_98;
  undefined1 local_90;
  undefined *local_88;
  long local_80;
  long lStack_78;
  byte local_70;
  undefined *local_68;
  
  if ((param_3 & 0xff) == 0) {
    if (param_1 == 0 && param_2 == 0) {
      return 0;
    }
  }
  else if (((param_3 & 0xff) != 1) && (*(long *)(param_4 + 0x10) == 0)) {
    return 0;
  }
  lVar3 = param_1;
  FUN_10065f798(param_1,param_2,param_3,param_4);
  if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a5c8);
    (*pcVar2)();
  }
  lVar3 = 1;
  lVar9 = 0;
  uVar10 = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10064fbe0();
LAB_10065a270:
  _swift_bridgeObjectRetain(puVar11);
  local_70 = (byte)param_3;
  local_80 = param_1;
  lStack_78 = param_2;
  local_68 = param_4;
  _swift_bridgeObjectRetain();
  lVar13 = lVar3;
  puVar8 = puVar11;
  lVar14 = lVar9;
  do {
    local_90 = (undefined1)uVar10;
    local_a0 = lVar13;
    lStack_98 = lVar14;
    local_88 = puVar8;
    _swift_bridgeObjectRetain(puVar8);
    FUN_10064dab4(&local_80,&local_a0);
    _swift_bridgeObjectRelease(local_88);
    FUN_100642874(lVar13,lVar14,uVar10,puVar8,0);
    puVar11 = local_68;
    bVar1 = local_70;
    lVar3 = local_80;
    FUN_10065f798(local_80,lStack_78,local_70,local_68);
    if (lVar3 < 2) {
      if (1 < bVar1) {
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_100629f38(0,*(ulong *)(puVar11 + 0x18) >> 1);
          _swift_bridgeObjectRelease(puVar11);
        }
        else {
          uVar12 = *(undefined8 *)(puVar11 + 0x10);
          puVar4 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar11;
          if (((ulong)puVar4 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_10062958c(0,uVar12,1,puVar11);
            local_68 = puVar5;
          }
          FUN_1003d2e64(&local_80,0,uVar12,0);
        }
        local_68 = puVar5;
        FUN_100628ce8(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
        goto LAB_10065a444;
      }
      _swift_bridgeObjectRelease(puVar11);
      uVar15 = 0;
      local_80 = 0;
      lStack_78 = 0;
      local_70 = 0;
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      FUN_1006599cc(1);
LAB_10065a444:
      uVar15 = (ulong)local_70;
    }
    puVar11 = local_68;
    lVar9 = lStack_78;
    lVar3 = local_80;
    lVar6 = lVar13;
    FUN_10064b1b4(lVar13,lVar14,uVar10,puVar8,local_80,lStack_78,uVar15,local_68);
    _swift_bridgeObjectRelease(puVar8);
    if (lVar6 == 0) {
LAB_10065a564:
      _swift_bridgeObjectRelease(puVar11);
      return lVar13;
    }
    local_90 = (undefined1)uVar15;
    local_a0 = lVar3;
    lStack_98 = lVar9;
    local_88 = puVar11;
    _swift_bridgeObjectRetain(puVar11);
    uVar7 = 1;
    FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
    puVar5 = local_88;
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a5c4);
      (*pcVar2)();
    }
    lVar6 = lVar13;
    FUN_10064b1b4(lVar13,lVar14,uVar10,puVar8,local_a0,lStack_98,local_90,local_88);
    _swift_bridgeObjectRelease(puVar5);
    if (lVar6 == 0) goto LAB_10065a564;
    _swift_bridgeObjectRelease(puVar8);
    uVar10 = uVar15;
    if ((uint)uVar15 < 2) goto LAB_10065a270;
    _swift_bridgeObjectRetain_n(puVar11,2);
    puVar8 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_100629f38(0,*(ulong *)(puVar11 + 0x18) >> 1);
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      uVar12 = *(undefined8 *)(puVar11 + 0x10);
      puVar5 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar11;
      if (((ulong)puVar5 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10062958c(0,uVar12,1,puVar11);
        local_68 = puVar8;
      }
      FUN_1003d2e64(0,uVar12,0);
    }
    local_68 = puVar8;
    _swift_bridgeObjectRetain(param_4);
    FUN_100628ce8(param_1,param_2,param_3,param_4);
    uVar10 = 2;
    lVar13 = lVar3;
    puVar8 = puVar11;
    lVar14 = lVar9;
  } while( true );
}

