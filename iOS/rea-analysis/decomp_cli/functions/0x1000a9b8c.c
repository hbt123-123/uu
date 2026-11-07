// rea decompile_all
// name: FUN_1000a9b8c
// address: 0x1000a9b8c
// body: available
// range: 0x1000a9b8c-0x1000aa0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a9b8c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_430 [16];
  undefined *local_420;
  long lStack_418;
  undefined1 auStack_398 [48];
  undefined *local_368;
  long lStack_360;
  undefined1 auStack_300 [152];
  undefined1 auStack_268 [32];
  ulong local_248;
  ulong local_240;
  undefined1 auStack_1d0 [64];
  ulong local_190;
  ulong uStack_188;
  undefined *local_138;
  long local_130;
  undefined8 local_f8;
  undefined8 local_f0;
  ulong local_a0;
  ulong uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined *local_80;
  long lStack_78;
  
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 == 0) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0,0xe000000000000000,"ArgumentParser/HelpGenerator.swift",0x22,2,
               0x9e,0);
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1000aa0dc);
    (*pcVar16)();
  }
  puVar12 = (undefined8 *)(param_2 + 0x20);
  uVar9 = *puVar12;
  lVar10 = *(long *)(param_2 + 0x28);
  lVar1 = puVar12[lVar11 * 2 + -2];
  lVar11 = puVar12[lVar11 * 2 + -1];
  uVar7 = *(undefined8 *)(lVar11 + 8);
  lVar14 = lVar1;
  FUN_1000772e8(lVar1,uVar7,param_3,0,0,0);
  lVar15 = *(long *)(param_2 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar15 != 0) {
    local_138 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000798d0(0,lVar15,0);
    plVar13 = (long *)(param_2 + 0x28);
    do {
      puVar6 = local_138;
      lVar3 = plVar13[-1];
      lVar8 = *plVar13;
      (**(code **)(lVar8 + 0x18))();
      uVar2 = *(ulong *)(puVar6 + 0x10);
      local_138 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
        FUN_1000798d0(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_138 + 0x10) = uVar2 + 1;
      *(long *)(local_138 + uVar2 * 0x10 + 0x20) = lVar3;
      *(long *)(local_138 + uVar2 * 0x10 + 0x28) = lVar8;
      plVar13 = plVar13 + 2;
      lVar15 = lVar15 + -1;
      puVar6 = local_138;
    } while (lVar15 != 0);
  }
  puVar4 = &DAT_100103ed8;
  local_138 = puVar6;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar12 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  puVar5 = (undefined *)0x20;
  lVar15 = -0x1f00000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar4,puVar12);
  _swift_bridgeObjectRelease(puVar6);
  (**(code **)(lVar10 + 0x10))(auStack_430,uVar9,lVar10);
  lStack_78 = lStack_418;
  local_80 = local_420;
  FUN_1000a1b08(&local_80,&local_138);
  FUN_10006e954(auStack_430);
  if (lStack_78 != 0) {
    local_138 = local_80;
    local_130 = lStack_78;
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(puVar5,lVar15);
    _swift_bridgeObjectRelease(lVar15);
    lVar15 = local_130;
    puVar5 = local_138;
  }
  pcVar16 = *(code **)(lVar11 + 0x10);
  (*pcVar16)(auStack_398,lVar1,lVar11);
  lStack_88 = lStack_360;
  local_90 = local_368;
  FUN_1000a1b08(&local_90,&local_138);
  FUN_10006e954(auStack_398);
  lVar10 = lStack_88;
  puVar6 = local_90;
  if (lStack_88 != 0) {
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(lVar15);
    goto LAB_1000a9f58;
  }
  puVar6 = &DAT_100104490;
  FUN_10000eb08(&DAT_100104490,&DAT_1000d4938);
  uVar9 = 0x30;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(long *)(puVar6 + 0x20) = lVar14;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  puVar4 = puVar6;
  FUN_1000a3cac();
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(puVar6 + 0x20,*(undefined8 *)(puVar6 + 0x10),&DAT_1000f9c18);
  _swift_deallocClassInstance(puVar6,0x20,7);
  lVar10 = lVar15;
  FUN_1000ac43c(puVar5,lVar15,puVar4,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(lVar15);
  lVar15 = lVar1;
  local_138 = puVar5;
  local_130 = lVar10;
  (*pcVar16)(auStack_300,lVar1,lVar11);
  FUN_10006cdcc();
  FUN_10006e954(auStack_300);
  lVar14 = *(long *)(lVar15 + 0x10);
  _swift_bridgeObjectRelease(lVar15);
  puVar6 = puVar5;
  if (lVar14 == 0) goto LAB_1000a9f58;
  FUN_1000a5b78();
  if (lVar10 == 0) {
LAB_1000a9f1c:
    __sSS6appendyySSF(0x20,0xe100000000000000);
  }
  else if ((puVar5 == (undefined *)0x20) && (lVar10 == -0x1f00000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar10);
    if (((ulong)puVar5 & 1) == 0) goto LAB_1000a9f1c;
  }
  __sSS6appendyySSF(0x6d6d6f636275733c,0xec0000003e646e61);
  puVar6 = local_138;
  lVar10 = local_130;
LAB_1000a9f58:
  (*pcVar16)(auStack_268,lVar1,lVar11);
  _swift_bridgeObjectRetain(local_240);
  FUN_10006e954(auStack_268);
  (*pcVar16)(auStack_1d0,lVar1,lVar11);
  uStack_98 = uStack_188;
  local_a0 = local_190;
  _swift_bridgeObjectRetain(uStack_188);
  FUN_10006e954(auStack_1d0);
  FUN_100077ccc(&local_a0);
  uVar2 = local_190 & 0xffffffffffff;
  if ((uStack_188 & 0x2000000000000000) != 0) {
    uVar2 = uStack_188 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = local_248 & 0xffffffffffff;
    if ((local_240 & 0x2000000000000000) != 0) {
      uVar2 = local_240 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      __sSS6appendyySSF(10,0xe100000000000000);
    }
    (*pcVar16)(&local_138,lVar1,lVar11);
    _swift_bridgeObjectRetain(local_f0);
    FUN_10006e954(&local_138);
    __sSS6appendyySSF(local_f8,local_f0);
    _swift_bridgeObjectRelease(local_f0);
    __sSS6appendyySSF(10,0xe100000000000000);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  lVar11 = param_2;
  FUN_1000a8a98(param_2,(int)param_3);
  *param_1 = param_2;
  param_1[1] = local_248;
  param_1[2] = local_240;
  param_1[3] = (long)puVar6;
  param_1[4] = lVar10;
  param_1[5] = lVar11;
  return;
}

