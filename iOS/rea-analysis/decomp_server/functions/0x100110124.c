// rea decompile_all
// name: FUN_100110124
// address: 0x100110124
// body: available
// range: 0x100110124-0x10011042b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100110124(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x87);
  __sSS6appendyySSF(0xd000000000000031,0x800000010088c4f0);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_80._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6c61566570797420,0xeb000000003a6575);
  puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  local_80 = CONCAT44(local_80._4_4_,param_3);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088c530);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar6 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_80 = *param_4;
  local_78 = *(undefined1 *)(param_4 + 1);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c01a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x6e756f4373706620,0xea00000000003a74);
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)((long)param_4 + 0x54));
  puVar7 = puVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x7974696c61757120,0xe90000000000003a);
  local_80 = param_4[2];
  local_78 = *(undefined1 *)(param_4 + 3);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c02c0,puVar6,puVar3);
  __sSS6appendyySSF(0x3a726f7372756320,0xe800000000000000);
  bVar5 = (*(byte *)((long)param_4 + 0x19) & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar5) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x3a72646820,0xe500000000000000);
  bVar5 = (*(byte *)(param_4 + 8) & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar5) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x6574617274696220,0xe90000000000003a);
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)((long)param_4 + 0x3c));
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

