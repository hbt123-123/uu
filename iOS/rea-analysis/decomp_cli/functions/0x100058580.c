// rea decompile_all
// name: FUN_100058580
// address: 0x100058580
// body: available
// range: 0x100058580-0x100058857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100058580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [16];
  undefined **local_b0;
  undefined *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  ulong uStack_78;
  undefined *local_70;
  
  local_a0 = (undefined *)0xa;
  uStack_98 = 0xe100000000000000;
  local_b0 = &local_a0;
  _swift_bridgeObjectRetain(param_5);
  lVar2 = 0x7fffffffffffffff;
  FUN_10005ac70(0x7fffffffffffffff,0,FUN_1000224ec,auStack_c0,param_2,param_3,param_4,param_5);
  puVar3 = (undefined *)0x20;
  uVar6 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,param_1);
  lVar14 = *(long *)(lVar2 + 0x10);
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(uVar6);
    puVar12 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000798ec(0,lVar14,0);
    puVar13 = (undefined8 *)(lVar2 + 0x38);
    do {
      puVar12 = local_70;
      puVar5 = (undefined *)puVar13[-3];
      uVar8 = puVar13[-2];
      uVar9 = puVar13[-1];
      uVar1 = *puVar13;
      _swift_bridgeObjectRetain(uVar1);
      uVar10 = uVar9;
      uVar11 = uVar1;
      if (0x3fff < (uVar8 ^ (ulong)puVar5)) {
        __sSs8distance4from2toSiSS5IndexV_AEtF(puVar5,uVar8,puVar5,uVar8,uVar9,uVar1);
        __sSS5countSivg(puVar3,uVar6);
        puVar4 = (undefined *)0xf;
        uVar7 = 7;
        uVar10 = 0xe000000000000000;
        local_a0 = puVar3;
        uStack_98 = uVar6;
        __sSS14_fromSubstringySSSshFZ(0xf,7,0);
        local_80 = puVar4;
        uStack_78 = uVar7;
        __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF
                  (&local_a0,PTR___sSSN_1000f02f8,PTR___sSSSTsWP_1000f0310);
        puVar4 = local_80;
        uVar7 = uStack_78;
        __sSsySsSScfC();
        uVar11 = uVar10;
        local_a0 = puVar5;
        uStack_98 = uVar8;
        local_90 = uVar9;
        uStack_88 = uVar1;
        __sSS14_fromSubstringySSSshFZ();
        _swift_bridgeObjectRelease();
        local_80 = puVar4;
        uStack_78 = uVar7;
        FUN_10005b81c();
        __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_a0,PTR___sSsN_1000f0448);
        puVar5 = local_80;
        uVar8 = uStack_78;
        __sSsySsSScfC();
        _swift_bridgeObjectRelease(uVar1);
      }
      uVar7 = *(ulong *)(puVar12 + 0x10);
      local_70 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar7) {
        FUN_1000798ec(1 < *(ulong *)(puVar12 + 0x18),uVar7 + 1,1);
      }
      puVar12 = local_70;
      *(ulong *)(local_70 + 0x10) = uVar7 + 1;
      *(undefined **)(local_70 + uVar7 * 0x20 + 0x20) = puVar5;
      *(ulong *)(local_70 + uVar7 * 0x20 + 0x28) = uVar8;
      *(undefined8 *)(local_70 + uVar7 * 0x20 + 0x30) = uVar10;
      *(undefined8 *)(local_70 + uVar7 * 0x20 + 0x38) = uVar11;
      puVar13 = puVar13 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(uVar6);
  }
  puVar3 = &DAT_100103f48;
  local_a0 = puVar12;
  FUN_10000eb08(&DAT_100103f48,&DAT_1000d39e8);
  puVar5 = &DAT_100103f50;
  FUN_10002cf3c(&DAT_100103f50,&DAT_100103f48,&DAT_1000d39e8,PTR___sSayxGSTsMc_1000f0380);
  puVar4 = puVar5;
  FUN_10005b85c();
  uVar6 = 10;
  uVar9 = 0xe100000000000000;
  __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar3,puVar5,puVar4);
  _swift_bridgeObjectRelease(puVar12);
  auVar15._8_8_ = uVar9;
  auVar15._0_8_ = uVar6;
  return auVar15;
}

