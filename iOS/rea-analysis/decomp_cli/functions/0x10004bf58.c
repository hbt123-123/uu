// rea decompile_all
// name: FUN_10004bf58
// address: 0x10004bf58
// body: available
// range: 0x10004bf58-0x10004c4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004bf58(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar17;
  long lVar18;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_108;
  undefined8 uStack_100;
  char local_f8;
  undefined7 uStack_f7;
  long local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  
  lVar7 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar18 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100102ef0;
  FUN_10000eb08(&DAT_100102ef0,&DAT_1000d3210);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar18 - extraout_x8_00;
  lStack_d8 = unaff_x20[1];
  local_e0 = *unaff_x20;
  local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(unaff_x20 + 2));
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_f8);
  lVar7 = local_f0;
  if (local_f0 == 0) {
    puVar12 = (undefined4 *)0x68;
    FUN_100022760(0x68,0xd000000000000018,0x80000001000c7350,DAT_100105680);
  }
  else {
    uVar11 = CONCAT71(uStack_f7,local_f8);
    lVar9 = 0;
    FUN_100020760();
    _swift_initStaticObject();
    puVar8 = &DAT_100102ba0;
    FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
    _swift_initStackObject();
    uStack_118 = 2;
    local_120 = 1;
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    *(undefined8 *)(puVar8 + 0x20) = 0x656d616e;
    *(undefined **)(puVar8 + 0x48) = PTR___sSSN_1000f02f8;
    *(undefined8 *)(puVar8 + 0x28) = 0xe400000000000000;
    *(undefined8 *)(puVar8 + 0x30) = uVar11;
    *(long *)(puVar8 + 0x38) = lVar7;
    puVar10 = puVar8;
    FUN_100020900();
    _swift_setDeallocating(puVar8);
    FUN_10001fc18(puVar8 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
    uVar11 = 0x73614878756d;
    uVar15 = 0xe600000000000000;
    FUN_1000201c8(0x73614878756d,0xe600000000000000,puVar10,0,1);
    _swift_bridgeObjectRelease(puVar10);
    uVar5 = DAT_100105680;
    if (uVar15 >> 0x3c < 0xf) {
      lStack_d8 = unaff_x20[4];
      local_e0 = unaff_x20[3];
      uStack_c8 = unaff_x20[6];
      local_d0 = unaff_x20[5];
      local_c0 = unaff_x20[7];
      puVar8 = &DAT_100103000;
      FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
      FUN_10005ba24(&local_f8);
      uVar5 = local_e8;
      lVar7 = local_f0;
      uVar2 = CONCAT71(uStack_f7,local_f8);
      lStack_d8 = local_f0;
      local_d0 = CONCAT71(local_d0._1_7_,local_e8);
      puVar10 = &DAT_100102fa8;
      local_108 = uVar15;
      uStack_100 = uVar11;
      FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
      FUN_10005ba24(&local_f8);
      uVar11 = uStack_100;
      uVar15 = local_108;
      FUN_10002c9fc(uVar2,lVar7,uVar5);
      FUN_10004009c(lVar17,uVar11,uVar15,local_f8);
      if (unaff_x21 != 0) {
        FUN_10002ed24(uVar11,uVar15);
        return;
      }
      bVar4 = *(byte *)(lVar17 + 1);
      if (bVar4 == 2) {
        puVar12 = (undefined4 *)0x69;
        FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,DAT_100105680);
        FUN_1000607a4();
        uVar3 = *puVar12;
        FUN_10002c948();
        _swift_allocError(&DAT_1000f78f0,puVar12,0,0);
        *puVar12 = uVar3;
        _swift_willThrow();
        uVar11 = uStack_100;
        uVar15 = local_108;
      }
      else {
        lStack_d8 = unaff_x20[4];
        local_e0 = unaff_x20[3];
        uStack_c8 = unaff_x20[6];
        local_d0 = unaff_x20[5];
        local_c0 = unaff_x20[7];
        FUN_10005ba24(&local_f8,puVar8);
        uVar11 = CONCAT71(uStack_f7,local_f8);
        lStack_d8 = local_f0;
        local_d0 = CONCAT71(local_d0._1_7_,local_e8);
        FUN_10005ba24(&local_f8,puVar10);
        FUN_10002c9fc(uVar11,local_f0,local_e8);
        puVar13 = (uint *)&DAT_100102bd0;
        FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
        _swift_allocObject();
        *(undefined8 *)(puVar13 + 6) = uStack_118;
        *(undefined8 *)(puVar13 + 4) = local_120;
        if (local_f8 == '\x01') {
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar18);
          uVar11 = uStack_100;
          uVar15 = local_108;
          uVar14 = uStack_100;
          uVar16 = local_108;
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                    (uStack_100,local_108,lVar18);
          *(undefined **)(puVar13 + 0xe) = PTR___sSSN_1000f02f8;
          uVar2 = 0;
          if (uVar16 != 0) {
            uVar2 = uVar14;
          }
          uVar1 = 0xe000000000000000;
          if (uVar16 != 0) {
            uVar1 = uVar16;
          }
          *(undefined8 *)(puVar13 + 8) = uVar2;
          *(ulong *)(puVar13 + 10) = uVar1;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar13,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease();
        }
        else {
          bVar6 = (bVar4 & 1) == 0;
          uVar11 = 0x65757274;
          if (bVar6) {
            uVar11 = 0x65736c6166;
          }
          *(undefined **)(puVar13 + 0xe) = PTR___sSSN_1000f02f8;
          uVar2 = 0xe400000000000000;
          if (bVar6) {
            uVar2 = 0xe500000000000000;
          }
          *(undefined8 *)(puVar13 + 8) = uVar11;
          *(undefined8 *)(puVar13 + 10) = uVar2;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar13,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease();
          uVar15 = local_108;
          uVar11 = uStack_100;
        }
        FUN_10002c948();
        _swift_allocError(&DAT_1000f78f0,puVar13,0,0);
        *puVar13 = (bVar4 ^ 0xffffffff) & 1;
        _swift_willThrow();
      }
      FUN_10002ed24(uVar11,uVar15);
      FUN_10001fc18(lVar17,&DAT_100102ef0,&DAT_1000d3210);
      return;
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x10);
    puVar12 = *(undefined4 **)(lVar9 + 0x30);
    lVar7 = *(long *)(lVar9 + 0x20);
    uVar2 = *(undefined8 *)(lVar9 + 0x18);
    if (*(long *)(lVar9 + 0x20) == 0) {
      uVar11 = 0x66;
      puVar12 = (undefined4 *)0x80000001000c45b0;
      lVar7 = -0x7ffffffefff3ba80;
      uVar2 = 0xd00000000000002e;
    }
    FUN_10002c918();
    FUN_100022760(uVar11,uVar2,lVar7,uVar5);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease();
  }
  FUN_1000607a4();
  uVar3 = *puVar12;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar12,0,0);
  *puVar12 = uVar3;
  _swift_willThrow();
  return;
}

