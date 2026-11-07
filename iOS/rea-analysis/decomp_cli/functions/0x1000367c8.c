// rea decompile_all
// name: FUN_1000367c8
// address: 0x1000367c8
// body: available
// range: 0x1000367c8-0x100036aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000367c8(undefined8 param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 *unaff_x20;
  undefined1 local_f8;
  undefined7 uStack_f7;
  long local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  
  lStack_d8 = unaff_x20[1];
  local_e0 = *unaff_x20;
  local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(unaff_x20 + 2));
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_f8);
  lVar4 = local_f0;
  if (local_f0 == 0) {
    puVar9 = (undefined4 *)0x68;
    FUN_100022760(0x68,0xd00000000000002e,0x80000001000c5e00,DAT_100105680);
  }
  else {
    uVar1 = CONCAT71(uStack_f7,local_f8);
    lVar6 = 0;
    FUN_100020760();
    _swift_initStaticObject();
    puVar7 = &DAT_100102ba0;
    FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x6449656369766564;
    *(undefined **)(puVar7 + 0x48) = PTR___sSSN_1000f02f8;
    *(undefined8 *)(puVar7 + 0x28) = 0xe800000000000000;
    *(undefined8 *)(puVar7 + 0x30) = uVar1;
    *(long *)(puVar7 + 0x38) = lVar4;
    puVar8 = puVar7;
    FUN_100020900();
    _swift_setDeallocating(puVar7);
    FUN_100033980(puVar7 + 0x20);
    FUN_1000201c8(param_1,param_2,puVar8,param_3,0);
    _swift_bridgeObjectRelease(puVar8);
    uVar5 = DAT_100105680;
    if (param_2 >> 0x3c < 0xf) {
      lStack_d8 = unaff_x20[4];
      local_e0 = unaff_x20[3];
      uStack_c8 = unaff_x20[6];
      local_d0 = unaff_x20[5];
      local_c0 = unaff_x20[7];
      FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
      FUN_10005ba24(&local_f8);
      uVar1 = CONCAT71(uStack_f7,local_f8);
      lStack_d8 = local_f0;
      local_d0 = CONCAT71(local_d0._1_7_,local_e8);
      FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
      FUN_10005ba24(&local_f8);
      FUN_10002c9fc(uVar1,local_f0,local_e8);
      (*param_4)(param_1,param_2,local_f8);
      FUN_10002ed24(param_1,param_2);
      return;
    }
    uVar1 = *(undefined8 *)(lVar6 + 0x10);
    uVar2 = *(undefined8 *)(lVar6 + 0x18);
    puVar9 = *(undefined4 **)(lVar6 + 0x30);
    lVar4 = *(long *)(lVar6 + 0x20);
    if (*(long *)(lVar6 + 0x20) == 0) {
      uVar1 = 0x66;
      uVar2 = 0xd00000000000002e;
      puVar9 = (undefined4 *)0x80000001000c45b0;
      lVar4 = -0x7ffffffefff3ba80;
    }
    FUN_10002c918();
    FUN_100022760(uVar1,uVar2,lVar4,uVar5);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
  }
  FUN_1000607a4();
  uVar3 = *puVar9;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar9,0,0);
  *puVar9 = uVar3;
  _swift_willThrow();
  return;
}

