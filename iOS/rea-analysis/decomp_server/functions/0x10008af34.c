// rea decompile_all
// name: FUN_10008af34
// address: 0x10008af34
// body: available
// range: 0x10008af34-0x10008b26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008af34(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x82);
  local_70 = local_a0;
  uStack_68 = uStack_98;
  __sSS6appendyySSF(0x100000000000002b,0x800000010087ea80);
  local_a0 = CONCAT44(local_a0._4_4_,param_2);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6f69736976657220,0xea00000000003d6e);
  local_a0 = *(undefined8 *)(param_3 + _TtC14UURemoteServer19SecondScreenManager::settingsRevision);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6f687370616e7320,0xed00003d73704674);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_a0._0_4_ = *(undefined4 *)(param_4 + 0x28);
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x466c617574636120,0xeb000000003d7370);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  if (*(char *)(param_4 + 0x94) == '\x03') {
    local_a0._0_4_ = 0;
  }
  else {
    local_a0._0_4_ = *(undefined4 *)(param_4 + 0x54);
  }
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x7046646576617320,0xea00000000003d73);
  FUN_1001a11bc(param_5,param_6);
  plVar7 = *(long **)(param_5 + 0x30);
  pcVar8 = *(code **)(*plVar7 + 0xb0);
  _swift_retain(plVar7);
  (*pcVar8)(&local_a0);
  _swift_release(plVar7);
  _swift_release(param_5);
  local_a0 = CONCAT44(local_a0._4_4_,local_84);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000012,0x800000010087eab0);
  bVar3 = (param_7 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x69726f7473657220,0xeb000000003d676e);
  bVar3 = *(char *)(param_3 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
          == '\0';
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

