// rea decompile_all
// name: FUN_10004c734
// address: 0x10004c734
// body: available
// range: 0x10004c734-0x10004ca7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004c734(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 *unaff_x20;
  undefined1 local_128;
  undefined7 uStack_127;
  long local_120;
  undefined1 local_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  
  lStack_108 = unaff_x20[1];
  local_110 = *unaff_x20;
  puVar6 = &DAT_1001031b8;
  local_100._0_1_ = *(undefined1 *)(unaff_x20 + 2);
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_128);
  lVar2 = local_120;
  if (local_120 == 0) {
    pcVar13 = "Old session name is required";
  }
  else {
    uVar10 = CONCAT71(uStack_127,local_128);
    lStack_108 = unaff_x20[4];
    local_110 = unaff_x20[3];
    local_100._0_1_ = *(undefined1 *)(unaff_x20 + 5);
    FUN_10005ba24(&local_128,puVar6);
    lVar5 = local_120;
    if (local_120 != 0) {
      uVar3 = CONCAT71(uStack_127,local_128);
      lVar7 = 0;
      FUN_100020760();
      _swift_initStaticObject();
      puVar6 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 4;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      *(undefined8 *)(puVar6 + 0x20) = 0x656d614e646c6f;
      puVar9 = PTR___sSSN_1000f02f8;
      *(undefined8 *)(puVar6 + 0x28) = 0xe700000000000000;
      *(undefined8 *)(puVar6 + 0x30) = uVar10;
      *(long *)(puVar6 + 0x38) = lVar2;
      *(undefined **)(puVar6 + 0x48) = puVar9;
      *(undefined8 *)(puVar6 + 0x50) = 0x656d614e77656e;
      *(undefined **)(puVar6 + 0x78) = puVar9;
      *(undefined8 *)(puVar6 + 0x58) = 0xe700000000000000;
      *(undefined8 *)(puVar6 + 0x60) = uVar3;
      *(long *)(puVar6 + 0x68) = lVar5;
      puVar8 = puVar6;
      FUN_100020900();
      _swift_setDeallocating(puVar6);
      puVar9 = &DAT_100102bb0;
      FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
      _swift_arrayDestroy(puVar6 + 0x20,2,puVar9);
      uVar10 = 0x6d616e655278756d;
      uVar12 = 0xe900000000000065;
      FUN_1000201c8(0x6d616e655278756d,0xe900000000000065,puVar8,0,1);
      _swift_bridgeObjectRelease(puVar8);
      uVar4 = DAT_100105680;
      if (uVar12 >> 0x3c < 0xf) {
        lStack_108 = unaff_x20[7];
        local_110 = unaff_x20[6];
        uStack_f8 = unaff_x20[9];
        local_100 = unaff_x20[8];
        local_f0 = unaff_x20[10];
        FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
        FUN_10005ba24(&local_128);
        uVar3 = CONCAT71(uStack_127,local_128);
        lStack_108 = local_120;
        local_100 = CONCAT71(local_100._1_7_,local_118);
        FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
        FUN_10005ba24(&local_128);
        FUN_10002c9fc(uVar3,local_120,local_118);
        FUN_10002a43c(uVar10,uVar12,local_128);
        FUN_10002ed24(uVar10,uVar12);
        return;
      }
      uVar10 = *(undefined8 *)(lVar7 + 0x10);
      puVar11 = *(undefined4 **)(lVar7 + 0x30);
      lVar2 = *(long *)(lVar7 + 0x20);
      uVar3 = *(undefined8 *)(lVar7 + 0x18);
      if (*(long *)(lVar7 + 0x20) == 0) {
        uVar10 = 0x66;
        puVar11 = (undefined4 *)0x80000001000c45b0;
        lVar2 = -0x7ffffffefff3ba80;
        uVar3 = 0xd00000000000002e;
      }
      FUN_10002c918();
      FUN_100022760(uVar10,uVar3,lVar2,uVar4);
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease();
      goto LAB_10004c990;
    }
    _swift_bridgeObjectRelease(lVar2);
    pcVar13 = "New session name is required";
  }
  puVar11 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd00000000000001c,(ulong)(pcVar13 + -0x20) | 0x8000000000000000,DAT_100105680)
  ;
LAB_10004c990:
  FUN_1000607a4();
  uVar1 = *puVar11;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar11,0,0);
  *puVar11 = uVar1;
  _swift_willThrow();
  return;
}

