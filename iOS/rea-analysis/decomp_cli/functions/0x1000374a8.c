// rea decompile_all
// name: FUN_1000374a8
// address: 0x1000374a8
// body: available
// range: 0x1000374a8-0x10003775b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000374a8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  undefined1 local_98;
  undefined7 uStack_97;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(unaff_x20 + 2));
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_98);
  lVar7 = local_90;
  if (local_90 == 0) {
    puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100020900(PTR___swiftEmptyArrayStorage_1000f0740);
  }
  else {
    uVar8 = CONCAT71(uStack_97,local_98);
    puVar5 = &DAT_100102ba0;
    FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0x6449656369766564;
    *(undefined **)(puVar5 + 0x48) = PTR___sSSN_1000f02f8;
    *(undefined8 *)(puVar5 + 0x28) = 0xe800000000000000;
    *(undefined8 *)(puVar5 + 0x30) = uVar8;
    *(long *)(puVar5 + 0x38) = lVar7;
    puVar6 = puVar5;
    FUN_100020900();
    _swift_setDeallocating(puVar5);
    FUN_100033980(puVar5 + 0x20);
  }
  lVar7 = 0;
  FUN_100020760();
  _swift_initStaticObject();
  uVar10 = 0x80000001000c43a0;
  uVar8 = 0xd00000000000001a;
  FUN_1000201c8(0xd00000000000001a,0x80000001000c43a0,puVar6,0,1);
  _swift_bridgeObjectRelease(puVar6);
  uVar4 = DAT_100105680;
  if (uVar10 >> 0x3c < 0xf) {
    lStack_78 = unaff_x20[4];
    local_80 = unaff_x20[3];
    uStack_68 = unaff_x20[6];
    local_70 = unaff_x20[5];
    local_60 = unaff_x20[7];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_98);
    uVar3 = CONCAT71(uStack_97,local_98);
    lStack_78 = local_90;
    local_70 = CONCAT71(local_70._1_7_,local_88);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_98);
    FUN_10002c9fc(uVar3,local_90,local_88);
    FUN_10002b730(uVar8,uVar10,local_98);
    FUN_10002ed24(uVar8,uVar10);
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    puVar9 = *(undefined4 **)(lVar7 + 0x30);
    lVar2 = *(long *)(lVar7 + 0x20);
    uVar3 = *(undefined8 *)(lVar7 + 0x18);
    if (*(long *)(lVar7 + 0x20) == 0) {
      uVar8 = 0x66;
      puVar9 = (undefined4 *)0x80000001000c45b0;
      lVar2 = -0x7ffffffefff3ba80;
      uVar3 = 0xd00000000000002e;
    }
    FUN_10002c918();
    FUN_100022760(uVar8,uVar3,lVar2,uVar4);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease();
    FUN_1000607a4();
    uVar1 = *puVar9;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar9,0,0);
    *puVar9 = uVar1;
    _swift_willThrow();
  }
  return;
}

