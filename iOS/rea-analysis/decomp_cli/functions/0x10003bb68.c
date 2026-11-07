// rea decompile_all
// name: FUN_10003bb68
// address: 0x10003bb68
// body: available
// range: 0x10003bb68-0x10003bf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003bb68(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  byte local_f8;
  undefined7 uStack_f7;
  undefined *puStack_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar15 + 0x40));
  puVar16 = &stack0xffffffffffffff00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_d8 = (undefined *)unaff_x20[1];
  local_e0 = (undefined *)*unaff_x20;
  local_d0._0_1_ = *(undefined1 *)(unaff_x20 + 2);
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_f8);
  puVar17 = puStack_f0;
  puVar10 = (undefined *)CONCAT71(uStack_f7,local_f8);
  puStack_d8 = (undefined *)unaff_x20[4];
  local_e0 = (undefined *)unaff_x20[3];
  local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(unaff_x20 + 5));
  puVar6 = &DAT_100102fa8;
  puVar8 = &DAT_1000cfa80;
  FUN_10000eb08();
  puVar7 = puVar6;
  FUN_10005ba24(&local_f8);
  if (puVar17 == (undefined *)0x0) {
    if (local_f8 != 0) {
      FUN_10003b260();
      _swift_bridgeObjectRetain(puVar8);
      puVar10 = puVar7;
      puVar17 = puVar8;
      puVar8 = (undefined *)0x0;
      goto LAB_10003bc98;
    }
LAB_10003be4c:
    pcVar1 = "Provide CODE or --code-stdin";
    uVar11 = 0xd00000000000001c;
  }
  else {
    puVar8 = puVar17;
    if ((local_f8 & 1) == 0) {
LAB_10003bc98:
      local_e0 = puVar10;
      puStack_d8 = puVar17;
      _swift_bridgeObjectRetain(puVar8);
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar16);
      FUN_10003da50();
      puVar7 = PTR___sSSN_1000f02f8;
      puVar9 = puVar16;
      puVar13 = PTR___sSSN_1000f02f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar16,PTR___sSSN_1000f02f8,puVar8);
      (**(code **)(lVar15 + 8))(puVar16,lVar5);
      _swift_bridgeObjectRelease(puVar17);
      _swift_bridgeObjectRelease(puVar13);
      uVar14 = (ulong)puVar9 & 0xffffffffffff;
      if (((ulong)puVar13 & 0x2000000000000000) != 0) {
        uVar14 = (ulong)puVar13 >> 0x38 & 0xf;
      }
      if (uVar14 != 0) {
        lVar5 = 0;
        FUN_100020760();
        _swift_initStaticObject();
        puVar8 = &DAT_100102ba0;
        FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
        _swift_initStackObject();
        *(undefined8 *)(puVar8 + 0x20) = 0x65646f63;
        *(undefined8 *)(puVar8 + 0x18) = 2;
        *(undefined8 *)(puVar8 + 0x10) = 1;
        *(undefined **)(puVar8 + 0x48) = puVar7;
        *(undefined8 *)(puVar8 + 0x28) = 0xe400000000000000;
        *(undefined **)(puVar8 + 0x30) = puVar10;
        *(undefined **)(puVar8 + 0x38) = puVar17;
        puVar10 = puVar8;
        FUN_100020900();
        _swift_setDeallocating(puVar8);
        FUN_100033980(puVar8 + 0x20);
        uVar11 = 0xd000000000000013;
        uVar14 = 0x80000001000c4420;
        FUN_1000201c8(0xd000000000000013,0x80000001000c4420,puVar10,0,1);
        _swift_bridgeObjectRelease(puVar10);
        uVar4 = DAT_100105680;
        if (uVar14 >> 0x3c < 0xf) {
          puStack_d8 = (undefined *)unaff_x20[7];
          local_e0 = (undefined *)unaff_x20[6];
          uStack_c8 = unaff_x20[9];
          local_d0 = unaff_x20[8];
          local_c0 = unaff_x20[10];
          FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
          FUN_10005ba24(&local_f8);
          uVar3 = CONCAT71(uStack_f7,local_f8);
          puStack_d8 = puStack_f0;
          local_d0 = CONCAT71(local_d0._1_7_,local_e8);
          FUN_10005ba24(&local_f8,puVar6);
          FUN_10002c9fc(uVar3,puStack_f0,local_e8);
          FUN_10002a850(uVar11,uVar14,local_f8);
          FUN_10002ed24(uVar11,uVar14);
          return;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x10);
        puVar12 = *(undefined4 **)(lVar5 + 0x30);
        lVar15 = *(long *)(lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar5 + 0x18);
        if (*(long *)(lVar5 + 0x20) == 0) {
          uVar11 = 0x66;
          puVar12 = (undefined4 *)0x80000001000c45b0;
          lVar15 = -0x7ffffffefff3ba80;
          uVar3 = 0xd00000000000002e;
        }
        FUN_10002c918();
        FUN_100022760(uVar11,uVar3,lVar15,uVar4);
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease();
        goto LAB_10003be74;
      }
      _swift_bridgeObjectRelease(puVar17);
      goto LAB_10003be4c;
    }
    _swift_bridgeObjectRelease(puVar17);
    pcVar1 = "CODE and --code-stdin are mutually exclusive";
    uVar11 = 0xd00000000000002c;
  }
  puVar12 = (undefined4 *)0x68;
  FUN_100022760(0x68,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,DAT_100105680);
LAB_10003be74:
  FUN_1000607a4();
  uVar2 = *puVar12;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar12,0,0);
  *puVar12 = uVar2;
  _swift_willThrow();
  return;
}

