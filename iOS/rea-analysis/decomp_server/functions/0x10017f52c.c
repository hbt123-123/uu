// rea decompile_all
// name: FUN_10017f52c
// address: 0x10017f52c
// body: available
// range: 0x10017f52c-0x10017f87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017f52c(undefined1 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_c0 [16];
  ulong auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *puStack_70;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_a0 + lVar1;
  if ((*(ulong *)(unaff_x20 + 0x28) == param_2 && *(ulong *)(unaff_x20 + 0x30) == param_3) ||
     (uVar5 = param_2,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_2,param_3,*(ulong *)(unaff_x20 + 0x28),*(ulong *)(unaff_x20 + 0x30),0),
     (uVar5 & 1) != 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)auStack_b0 + lVar1) = param_2;
    *(ulong *)((long)auStack_b0 + lVar1 + 8) = param_3;
    FUN_1003fb4ec(FUN_100180380,auStack_c0 + lVar1,0xd0000000000000b1,0x8000000100896e70,
                  0xd000000000000014,0x80000001008970e0,0xb4,0);
  }
  else {
    uVar4 = param_2;
    uVar8 = param_3;
    FUN_1000d6df8();
    uVar5 = uVar4 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar5 = uVar8 >> 0x38 & 0xf;
    }
    puVar2 = puVar13;
    if (uVar5 != 0) {
      uVar5 = 0x2f;
      __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,uVar4,uVar8);
      if ((uVar5 & 1) != 0) {
        local_88 = 0x2f;
        uStack_80 = 0xe100000000000000;
        local_90 = puVar13;
        (*(code *)PTR____chkstk_darwin_100995498)();
        puVar12 = auStack_c0 + lVar1;
        *(undefined8 **)((long)auStack_b0 + lVar1) = &local_88;
        _swift_bridgeObjectRetain(uVar8);
        pcVar10 = FUN_10009ff84;
        uVar11 = 0x7fffffffffffffff;
        FUN_10000b9ac(0x7fffffffffffffff,1,FUN_10009ff84,puVar12,uVar4,uVar8);
        puVar2 = local_90;
        uVar6 = 0x2e2e;
        uVar9 = 0xe200000000000000;
        __sSsySsSScfC();
        local_98 = puVar12;
        local_90 = puVar2;
        local_88 = uVar6;
        uStack_80 = uVar9;
        local_78 = pcVar10;
        puStack_70 = puVar12;
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 **)(puVar2 + -0x10) = &local_88;
        uVar5 = 0;
        FUN_100152ce4(FUN_1000ea368,puVar2 + -0x20,uVar11);
        _swift_bridgeObjectRelease(local_98);
        _swift_bridgeObjectRelease(uVar11);
        puVar2 = local_90;
        if ((uVar5 & 1) == 0) {
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar13,uVar4,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          __s10Foundation3URLV016standardizedFileB0ACvg(param_1);
          (**(code **)(lVar14 + 8))(puVar13,lVar3);
          puVar7 = &DAT_100a77ce8;
          FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
          uVar11 = 0;
          goto LAB_10017f800;
        }
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(puVar2 + -0x20) = param_2;
    *(ulong *)(puVar2 + -0x18) = param_3;
    *(ulong *)(puVar2 + -0x10) = uVar4;
    *(ulong *)(puVar2 + -8) = uVar8;
    FUN_1003fb4ec(FUN_100180374,puVar2 + -0x30,0xd0000000000000b1,0x8000000100896e70,
                  0xd000000000000014,0x80000001008970e0,0xbc,0);
    _swift_bridgeObjectRelease(uVar8);
  }
  *param_1 = 4;
  puVar7 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  uVar11 = 1;
LAB_10017f800:
  _swift_storeEnumTagMultiPayload(param_1,puVar7,uVar11);
  return;
}

