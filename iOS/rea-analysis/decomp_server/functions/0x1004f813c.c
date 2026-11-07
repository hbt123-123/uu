// rea decompile_all
// name: FUN_1004f813c
// address: 0x1004f813c
// body: available
// range: 0x1004f813c-0x1004f83ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004f813c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  uint uVar8;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined1 auStack_f0 [24];
  ulong local_d8;
  undefined8 uStack_d0;
  char local_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  if (uVar3 != *(ulong *)(param_1 + 0x10) || lVar1 != *(long *)(param_1 + 0x18)) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar1,*(ulong *)(param_1 + 0x10),*(long *)(param_1 + 0x18),0);
    uVar8 = 0;
    if ((uVar3 & 1) == 0) goto LAB_1004f8360;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_f0,0,0);
  FUN_1004f75cc(unaff_x20 + 0x20,&local_d8);
  if (local_b0 == '\x01') {
    FUN_1000a0074(&local_d8,auStack_a8);
    _swift_beginAccess(param_1 + 0x20,auStack_130,0,0);
    FUN_1004f75cc(param_1 + 0x20,&local_d8);
    if (local_b0 == '\x01') {
      FUN_1000a0074(&local_d8,auStack_118);
      puVar4 = auStack_a8;
      FUN_10003f030(puVar4,local_90);
      _swift_getDynamicType();
      puVar5 = auStack_118;
      FUN_10003f030(puVar5,local_100);
      _swift_getDynamicType();
      if (puVar4 == puVar5) {
        FUN_10003f030(auStack_a8,local_90);
        puVar4 = auStack_118;
        (**(code **)(lStack_88 + 0x58))(puVar4,local_90,lStack_88);
        uVar8 = (uint)puVar4;
        FUN_10003f094(auStack_118);
        FUN_10003f094(auStack_a8);
        goto LAB_1004f8360;
      }
      FUN_10003f094(auStack_118);
    }
    else {
      FUN_1004f9868(&local_d8);
    }
    FUN_10003f094(auStack_a8);
  }
  else {
    FUN_1004f9868(&local_d8);
  }
  FUN_1004f75cc(unaff_x20 + 0x20,&local_d8);
  uVar2 = uStack_d0;
  uVar3 = local_d8;
  if (local_b0 == '\0') {
    _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
    FUN_1004f75cc(param_1 + 0x20,&local_d8);
    uVar6 = local_d8;
    if (local_b0 != '\0') {
      FUN_100006cdc(uVar3,uVar2);
      goto LAB_1004f82d0;
    }
    uVar7 = uVar3;
    FUN_1000094a4(uVar3,uVar2,local_d8,uStack_d0);
    FUN_100006cdc(uVar3,uVar2);
    FUN_100006cdc(uVar6,uStack_d0);
    if ((uVar7 & 1) == 0) goto LAB_1004f82d8;
LAB_1004f83b8:
    uVar8 = 1;
    goto LAB_1004f8360;
  }
LAB_1004f82d0:
  FUN_1004f9868(&local_d8);
LAB_1004f82d8:
  FUN_1004f75cc(unaff_x20 + 0x20,&local_d8);
  uVar3 = local_d8;
  if (local_b0 == '\x02') {
    _swift_beginAccess(param_1 + 0x20,auStack_a8,0,0);
    FUN_1004f75cc(param_1 + 0x20,&local_d8);
    if (local_b0 != '\x02') {
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_1004f8354;
    }
    uVar6 = uVar3;
    thunk_FUN_100572fcc(uVar3,local_d8);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar6 & 1) != 0) goto LAB_1004f83b8;
  }
  else {
LAB_1004f8354:
    FUN_1004f9868(&local_d8);
  }
  uVar8 = 0;
LAB_1004f8360:
  return uVar8 & 1;
}

