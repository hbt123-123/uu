// rea decompile_all
// name: FUN_1007d6664
// address: 0x1007d6664
// body: available
// range: 0x1007d6664-0x1007d6b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007d6664(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long local_e0;
  long local_d8;
  long local_d0;
  code *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  ulong uStack_78;
  
  local_98 = param_2;
  _swift_getObjectType();
  puVar1 = &DAT_100abd558;
  FUN_1007b4550();
  uVar8 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = (long)&local_e0 - uVar8;
  local_b0 = local_a8 - uVar8;
  local_b8 = local_b0 - uVar8;
  lVar10 = local_b8 - uVar8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  puVar1 = local_98;
  lVar13 = *(long *)(lVar2 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (lVar10 - uVar8) - uVar8;
  lVar12 = lVar9 - uVar8;
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(lVar10,param_1,local_98);
  pcVar11 = *(code **)(lVar13 + 0x30);
  lVar7 = lVar10;
  (*pcVar11)(lVar10,1,lVar2);
  if ((int)lVar7 == 1) {
    local_e0 = lVar9;
    local_d8 = lVar10 - uVar8;
    local_d0 = lVar2;
    local_c8 = pcVar11;
    local_c0 = lVar13;
    FUN_1007c62b0(lVar10,&DAT_100abd558);
    puVar3 = param_1;
    __sSS5countSivg(param_1,puVar1);
    lVar7 = local_d0;
    pcVar11 = local_c8;
    if (puVar3 == (undefined *)0x20) {
      local_88 = puVar1;
      uStack_78 = (ulong)param_1 & 0xffffffffffff;
      if (((ulong)puVar1 & 0x2000000000000000) != 0) {
        uStack_78 = (ulong)puVar1 >> 0x38 & 0xf;
      }
      local_80 = 0;
      lVar7 = 2;
      puVar3 = puVar1;
      local_90 = param_1;
      _swift_bridgeObjectRetain_n();
      __sSS8IteratorV4nextSJSgyF();
      lVar2 = local_e0;
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (lVar7 != 0) {
        lVar9 = 0;
        do {
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1007d6b38);
            (*pcVar11)();
          }
          lVar10 = lVar7;
          if ((lVar9 - 8U >> 2 | lVar9 << 0x3e) < 4) {
            puVar4 = puVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar5 = puVar6;
            if (((ulong)puVar4 & 1) == 0) {
              lVar10 = *(long *)(puVar6 + 0x10) + 1;
              puVar5 = (undefined *)0x0;
              FUN_1007d1b0c(0,lVar10,1,puVar6);
            }
            uVar8 = *(ulong *)(puVar5 + 0x10);
            lVar12 = uVar8 + 1;
            puVar6 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
              lVar10 = lVar12;
              FUN_1007d1b0c(puVar6,lVar12,1,puVar5);
            }
            *(long *)(puVar6 + 0x10) = lVar12;
            *(undefined8 *)(puVar6 + uVar8 * 0x10 + 0x20) = 0x2d;
            *(undefined8 *)(puVar6 + uVar8 * 0x10 + 0x28) = 0xe100000000000000;
          }
          puVar4 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar4 & 1) == 0) {
            lVar10 = *(long *)(puVar6 + 0x10) + 1;
            puVar4 = (undefined *)0x0;
            FUN_1007d1b0c(0,lVar10,1,puVar6);
            puVar6 = puVar4;
          }
          uVar8 = *(ulong *)(puVar6 + 0x10);
          lVar12 = uVar8 + 1;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
            puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            lVar10 = lVar12;
            FUN_1007d1b0c(puVar4,lVar12,1,puVar6);
            puVar6 = puVar4;
          }
          *(long *)(puVar6 + 0x10) = lVar12;
          *(undefined **)(puVar6 + uVar8 * 0x10 + 0x20) = puVar3;
          *(long *)(puVar6 + uVar8 * 0x10 + 0x28) = lVar7;
          __sSS8IteratorV4nextSJSgyF();
          lVar9 = lVar9 + 1;
          lVar7 = lVar10;
          puVar3 = puVar4;
        } while (lVar10 != 0);
      }
      puVar3 = local_88;
      _swift_bridgeObjectRelease(puVar1);
      _swift_bridgeObjectRelease(puVar3);
      local_90 = puVar6;
      _swift_bridgeObjectRetain(puVar6);
      puVar1 = &DAT_100abd560;
      FUN_1007b4550(&DAT_100abd560);
      puVar3 = puVar1;
      FUN_1007d6c48();
      __sSSySSxcSTRzSJ7ElementRtzlufC(&local_90,puVar1,puVar3);
      lVar9 = local_b8;
      __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(local_b8);
      _swift_bridgeObjectRelease(puVar1);
      _swift_bridgeObjectRelease(puVar6);
      pcVar11 = local_c8;
      lVar7 = local_d0;
      lVar10 = lVar9;
      (*local_c8)(lVar9,1,local_d0);
      if ((int)lVar10 != 1) {
        pcVar11 = *(code **)(local_c0 + 0x20);
        (*pcVar11)(lVar2,lVar9,lVar7);
        (*pcVar11)(unaff_x20 + _TtC6Sentry8SentryId::id,lVar2,lVar7);
        goto LAB_1007d6af8;
      }
      FUN_1007c62b0(lVar9,&DAT_100abd558);
    }
    lVar10 = local_b0;
    lVar9 = local_c0;
    __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(local_b0,0xd000000000000024,0x80000001008a7430);
    lVar12 = local_a8;
    FUN_1007d6c04(lVar10,local_a8,&DAT_100abd558);
    lVar13 = lVar12;
    (*pcVar11)(lVar12,1,lVar7);
    lVar2 = local_d8;
    if ((int)lVar13 == 1) {
      __s10Foundation4UUIDVACycfC(local_d8);
      FUN_1007c62b0(lVar10,&DAT_100abd558);
      pcVar11 = *(code **)(lVar9 + 0x20);
    }
    else {
      FUN_1007c62b0(lVar10,&DAT_100abd558);
      pcVar11 = *(code **)(lVar9 + 0x20);
      (*pcVar11)(lVar2,lVar12,lVar7);
    }
    (*pcVar11)(unaff_x20 + _TtC6Sentry8SentryId::id,lVar2,lVar7);
  }
  else {
    pcVar11 = *(code **)(lVar13 + 0x20);
    (*pcVar11)(lVar12,lVar10,lVar2);
    (*pcVar11)(unaff_x20 + _TtC6Sentry8SentryId::id,lVar12,lVar2);
  }
LAB_1007d6af8:
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}

