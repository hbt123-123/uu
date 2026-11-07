// rea decompile_all
// name: FUN_10002e67c
// address: 0x10002e67c
// body: available
// range: 0x10002e67c-0x10002e91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002e67c(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  lVar5 = 0;
  FUN_100020760();
  _swift_initStaticObject();
  puVar6 = &DAT_100102ba0;
  FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0x6567617373656d;
  *(undefined8 *)(puVar6 + 0x28) = 0xe700000000000000;
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  local_c0 = CONCAT71(local_c0._1_7_,*(undefined1 *)(unaff_x20 + 2));
  FUN_10000eb08(&DAT_100103008,&DAT_1000cfd08);
  FUN_10005ba24(&local_e8);
  *(undefined **)(puVar6 + 0x48) = PTR___sSSN_1000f02f8;
  *(ulong *)(puVar6 + 0x30) = CONCAT71(uStack_e7,local_e8);
  *(undefined8 *)(puVar6 + 0x38) = uStack_e0;
  puVar7 = puVar6;
  FUN_100020900(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_10001fc18(puVar6 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
  uVar8 = 0x6f686365;
  uVar10 = 0xe400000000000000;
  FUN_1000201c8(0x6f686365,0xe400000000000000,puVar7,0,1);
  _swift_bridgeObjectRelease(puVar7);
  uVar4 = DAT_100105680;
  if (uVar10 >> 0x3c < 0xf) {
    uStack_c8 = unaff_x20[4];
    local_d0 = unaff_x20[3];
    uStack_b8 = unaff_x20[6];
    local_c0 = unaff_x20[5];
    local_b0 = unaff_x20[7];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_e8);
    uVar1 = CONCAT71(uStack_e7,local_e8);
    uStack_c8 = uStack_e0;
    local_c0 = CONCAT71(local_c0._1_7_,local_d8);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_e8);
    FUN_10002c9fc(uVar1,uStack_e0,local_d8);
    FUN_100027044(uVar8,uVar10,local_e8);
    FUN_10002ed24(uVar8,uVar10);
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    puVar9 = *(undefined4 **)(lVar5 + 0x30);
    lVar3 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      uVar8 = 0x66;
      uVar1 = 0xd00000000000002e;
      puVar9 = (undefined4 *)0x80000001000c45b0;
      lVar3 = -0x7ffffffefff3ba80;
    }
    FUN_10002c918();
    FUN_100022760(uVar8,uVar1,lVar3,uVar4);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease();
    FUN_1000607a4();
    uVar2 = *puVar9;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar9,0,0);
    *puVar9 = uVar2;
    _swift_willThrow();
  }
  return;
}

