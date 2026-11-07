// rea decompile_all
// name: FUN_10003c250
// address: 0x10003c250
// body: available
// range: 0x10003c250-0x10003c5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c250(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  char *pcVar11;
  undefined8 *unaff_x20;
  undefined1 uVar12;
  undefined1 local_e8;
  undefined7 uStack_e7;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  lStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  local_c0 = CONCAT71(local_c0._1_7_,*(undefined1 *)(unaff_x20 + 2));
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_e8);
  lVar5 = local_e0;
  if (local_e0 == 0) {
    pcVar11 = "-16 chars, letters and digits)";
    uVar8 = 0xd000000000000023;
LAB_10003c488:
    puVar9 = (undefined4 *)0x68;
    FUN_100022760(0x68,uVar8,(ulong)pcVar11 | 0x8000000000000000,DAT_100105680);
    goto LAB_10003c48c;
  }
  lVar3 = CONCAT71(uStack_e7,local_e8);
  lVar10 = local_e0;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(lVar5);
  if (lVar3 == 0x6e6f && lVar10 == -0x1e00000000000000) {
LAB_10003c2f8:
    _swift_bridgeObjectRelease(lVar10);
    uVar12 = 1;
  }
  else {
    uVar4 = 0x6e6f;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6e6f,0xe200000000000000,lVar3,lVar10,0);
    if ((uVar4 & 1) != 0) goto LAB_10003c2f8;
    if ((lVar3 == 0x66666f) && (lVar10 == -0x1d00000000000000)) {
      _swift_bridgeObjectRelease(0xe300000000000000);
      uVar12 = 0;
    }
    else {
      uVar4 = 0x66666f;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x66666f,0xe300000000000000,lVar3,lVar10,0);
      _swift_bridgeObjectRelease(lVar10);
      uVar12 = 0;
      if ((uVar4 & 1) == 0) {
        pcVar11 = " argument on or off";
        uVar8 = 0xd00000000000001e;
        goto LAB_10003c488;
      }
    }
  }
  lVar5 = 0;
  FUN_100020760();
  _swift_initStaticObject();
  puVar6 = &DAT_100102ba0;
  FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0x64656c62616e65;
  *(undefined8 *)(puVar6 + 0x28) = 0xe700000000000000;
  *(undefined **)(puVar6 + 0x48) = PTR___sSbN_1000f03a0;
  puVar6[0x30] = uVar12;
  puVar7 = puVar6;
  FUN_100020900();
  _swift_setDeallocating(puVar6);
  FUN_100033980(puVar6 + 0x20);
  uVar8 = 0x6553747369737361;
  uVar4 = 0xee00776f6c6c4174;
  FUN_1000201c8(0x6553747369737361,0xee00776f6c6c4174,puVar7,0,1);
  _swift_bridgeObjectRelease(puVar7);
  uVar12 = DAT_100105680;
  if (uVar4 >> 0x3c < 0xf) {
    lStack_c8 = unaff_x20[4];
    local_d0 = unaff_x20[3];
    uStack_b8 = unaff_x20[6];
    local_c0 = unaff_x20[5];
    local_b0 = unaff_x20[7];
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    FUN_10005ba24(&local_e8);
    uVar2 = CONCAT71(uStack_e7,local_e8);
    lStack_c8 = local_e0;
    local_c0 = CONCAT71(local_c0._1_7_,local_d8);
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    FUN_10005ba24(&local_e8);
    FUN_10002c9fc(uVar2,local_e0,local_d8);
    FUN_100029ca4(uVar8,uVar4,local_e8);
    FUN_10002ed24(uVar8,uVar4);
    return;
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x10);
  puVar9 = *(undefined4 **)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x20);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  if (*(long *)(lVar5 + 0x20) == 0) {
    uVar8 = 0x66;
    puVar9 = (undefined4 *)0x80000001000c45b0;
    lVar3 = -0x7ffffffefff3ba80;
    uVar2 = 0xd00000000000002e;
  }
  FUN_10002c918();
  FUN_100022760(uVar8,uVar2,lVar3,uVar12);
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease();
LAB_10003c48c:
  FUN_1000607a4();
  uVar1 = *puVar9;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar9,0,0);
  *puVar9 = uVar1;
  _swift_willThrow();
  return;
}

