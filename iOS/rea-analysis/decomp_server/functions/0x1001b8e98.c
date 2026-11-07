// rea decompile_all
// name: FUN_1001b8e98
// address: 0x1001b8e98
// body: available
// range: 0x1001b8e98-0x1001b91fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b8e98(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x9d);
  local_70 = local_88;
  uStack_68 = uStack_80;
  __sSS6appendyySSF(0x1000000000000030,0x800000010089be10);
  uVar7 = 0;
  _swift_beginAccess(param_2 + 0x10,&local_88,0,0);
  bVar3 = *(char *)(param_2 + 0x18) == '\0';
  uVar8 = 0x65757274;
  uVar9 = 0x65736c6166;
  uVar2 = uVar8;
  if (bVar3) {
    uVar2 = uVar9;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0xd000000000000012,0x800000010089be50);
  bVar3 = (param_3 & 1) == 0;
  uVar2 = uVar8;
  if (bVar3) {
    uVar2 = uVar9;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0xd000000000000012,0x800000010089be70);
  bVar3 = (param_4 & 1) == 0;
  uVar2 = uVar8;
  if (bVar3) {
    uVar2 = uVar9;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x696c61567369202c,0xed00003d64695064);
  bVar3 = (param_5 & 1) == 0;
  if (bVar3) {
    uVar8 = uVar9;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar8,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x3d646975202c,0xe600000000000000);
  local_90[0] = *(undefined4 *)(param_2 + 0x20);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  lVar6 = -0x12ffffc29b96aa9b;
  __sSS6appendyySSF(0x6c6f736e6f63202c);
  FUN_10039f26c(0);
  FUN_10039ef30();
  if (lVar6 == 0) {
    uVar7 = 9999;
  }
  else {
    _swift_bridgeObjectRelease(lVar6);
  }
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_90[0] = uVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  plVar4 = (long *)0x657669746361202c;
  __sSS6appendyySSF(0x657669746361202c,0xec0000003d646950);
  thunk_FUN_1003db354();
  (**(code **)(*plVar4 + 0x108))(local_90);
  _swift_release(plVar4);
  puVar5 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __sSS10describingSSx_tclufC(local_90,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e6572727563202c,0xed00003d64695074);
  local_90[0] = *(undefined4 *)(param_2 + 0x1c);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

