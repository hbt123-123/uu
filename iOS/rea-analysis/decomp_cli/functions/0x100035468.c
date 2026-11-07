// rea decompile_all
// name: FUN_100035468
// address: 0x100035468
// body: available
// range: 0x100035468-0x100035667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100035468(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar5 = 0;
  FUN_100020760();
  _swift_initStaticObject();
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100020900(PTR___swiftEmptyArrayStorage_1000f0740);
  uVar7 = 0x64756f6c43746567;
  uVar9 = 0xee007473694c4350;
  FUN_1000201c8(0x64756f6c43746567,0xee007473694c4350,puVar6,0,1);
  _swift_bridgeObjectRelease(puVar6);
  uVar4 = DAT_100105680;
  if (uVar9 >> 0x3c < 0xf) {
    uStack_78 = unaff_x20[1];
    local_80 = *unaff_x20;
    uStack_68 = unaff_x20[3];
    local_70 = unaff_x20[2];
    local_60 = unaff_x20[4];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_98);
    uVar1 = CONCAT71(uStack_97,local_98);
    uStack_78 = uStack_90;
    local_70 = CONCAT71(local_70._1_7_,local_88);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_98);
    FUN_10002c9fc(uVar1,uStack_90,local_88);
    FUN_10002a408(uVar7,uVar9,local_98);
    FUN_10002ed24(uVar7,uVar9);
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    puVar8 = *(undefined4 **)(lVar5 + 0x30);
    lVar3 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      uVar7 = 0x66;
      uVar1 = 0xd00000000000002e;
      puVar8 = (undefined4 *)0x80000001000c45b0;
      lVar3 = -0x7ffffffefff3ba80;
    }
    FUN_10002c918();
    FUN_100022760(uVar7,uVar1,lVar3,uVar4);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease();
    FUN_1000607a4();
    uVar2 = *puVar8;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar8,0,0);
    *puVar8 = uVar2;
    _swift_willThrow();
  }
  return;
}

