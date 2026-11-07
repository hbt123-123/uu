// rea decompile_all
// name: FUN_10002d6ec
// address: 0x10002d6ec
// body: available
// range: 0x10002d6ec-0x10002da83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002d6ec(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_100 [8];
  char local_f8;
  undefined7 uStack_f7;
  long lStack_f0;
  undefined1 local_e8 [8];
  long local_e0 [2];
  long local_d0 [14];
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100102c70;
  FUN_10000eb08(&DAT_100102c70,&DAT_1000cf750);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar12 + -extraout_x8_00;
  FUN_100020760(0);
  _swift_initStaticObject();
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100020900(PTR___swiftEmptyArrayStorage_1000f0740);
  uVar6 = 0x6973726556746567;
  uVar8 = 0xea00000000006e6f;
  FUN_1000201c8(0x6973726556746567,0xea00000000006e6f,puVar5,0,1);
  _swift_bridgeObjectRelease(puVar5);
  if (uVar8 >> 0x3c < 0xf) {
    local_e0[1] = unaff_x20[1];
    local_e0[0] = *unaff_x20;
    local_d0[1] = unaff_x20[3];
    local_d0[0] = unaff_x20[2];
    local_d0[2] = unaff_x20[4];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_f8);
    uVar2 = CONCAT71(uStack_f7,local_f8);
    local_e0[1] = lStack_f0;
    local_d0[0] = CONCAT71(local_d0[0]._1_7_,local_e8[0]);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_f8);
    FUN_10002c9fc(uVar2,lStack_f0,local_e8[0]);
    FUN_100027b68(uVar6,uVar8,local_f8);
    FUN_10002ed24(uVar6,uVar8);
  }
  else {
    local_d0[6] = 0x302e302e31;
    local_d0[7] = 0xe500000000000000;
    local_d0[9] = 0;
    local_d0[8] = 0;
    local_d0[0xb] = 0;
    local_d0[10] = 0;
    local_d0[0xc] = 0xd000000000000054;
    local_d0[0xd] = 0x80000001000c5a10;
    *(undefined8 *)(puVar11 + 8) = 0x302e302e31;
    *(undefined8 *)(puVar11 + 0x10) = 0xe500000000000000;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined8 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0xd000000000000054;
    *(undefined8 *)(puVar11 + 0x40) = 0x80000001000c5a10;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x50) = 0;
    *(undefined8 *)(puVar11 + 0x48) = 0;
    *(undefined8 *)(puVar11 + 0x60) = 0;
    *(undefined8 *)(puVar11 + 0x58) = 0;
    *(undefined8 *)(puVar11 + 0x68) = 0;
    iVar1 = *(int *)(puVar4 + 0x34);
    FUN_10001ff84(local_d0 + 6,local_e0);
    __s10Foundation4DateVACycfC(puVar11 + iVar1);
    puVar4 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    local_e0[1] = unaff_x20[1];
    local_e0[0] = *unaff_x20;
    local_d0[1] = unaff_x20[3];
    local_d0[0] = unaff_x20[2];
    local_d0[2] = unaff_x20[4];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_f8);
    uVar6 = CONCAT71(uStack_f7,local_f8);
    local_e0[1] = lStack_f0;
    local_d0[0] = CONCAT71(local_d0[0]._1_7_,local_e8[0]);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_f8);
    FUN_10002c9fc(uVar6,lStack_f0,local_e8[0]);
    plVar10 = local_d0 + 6;
    if (local_f8 == '\x01') {
      FUN_10001ffb8();
      lVar9 = lStack_f0;
      FUN_100022504();
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
      plVar7 = plVar10;
      lVar3 = lVar9;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(plVar10,lVar9,puVar12);
      FUN_100020a0c(plVar10,lVar9);
      plVar10 = plVar7;
      if (lVar3 == 0) {
        plVar10 = (long *)0x0;
        lVar3 = -0x2000000000000000;
      }
    }
    else {
      lVar3 = lStack_f0;
      FUN_10002da84();
      FUN_10001ffb8(local_d0 + 6);
    }
    *(undefined **)(puVar4 + 0x38) = PTR___sSSN_1000f02f8;
    *(long **)(puVar4 + 0x20) = plVar10;
    *(long *)(puVar4 + 0x28) = lVar3;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar4,0x20,0xe100000000000000,10,0xe100000000000000);
    _swift_bridgeObjectRelease(puVar4);
    FUN_10001fc18(puVar11,&DAT_100102c70,&DAT_1000cf750);
  }
  return;
}

