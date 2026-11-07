// rea decompile_all
// name: FUN_1001fc9b0
// address: 0x1001fc9b0
// body: available
// range: 0x1001fc9b0-0x1001fcf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fc9b0(undefined8 *param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xbe);
  __sSS6appendyySSF(0xd000000000000038,0x80000001008a2c70);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_80._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008a2cb0);
  uVar5 = param_3;
  FUN_1004e2fa0(param_3,param_4,param_5);
  puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  local_80._0_4_ = (undefined4)uVar5;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008a2cd0);
  local_80 = CONCAT44(local_80._4_4_,param_6);
  puVar6 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a73706620,0xe500000000000000);
  uVar5 = param_3;
  uVar7 = param_4;
  FUN_100434128(param_3,param_4,param_5);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar6 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_78 = (byte)uVar7 & 1;
  local_80 = uVar5;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c01a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x6e756f4373706620,0xea00000000003a74);
  uVar5 = param_3;
  FUN_1004e4bb8(param_3,param_4,param_5);
  local_80 = CONCAT44(local_80._4_4_,(int)uVar5);
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x7974696c61757120,0xe90000000000003a);
  uVar5 = param_3;
  uVar7 = param_4;
  FUN_1004e2b88(param_3,param_4,param_5);
  local_78 = (byte)uVar7 & 1;
  local_80 = uVar5;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c02c0,puVar6,puVar2);
  __sSS6appendyySSF(0x74756c6f73657220,0xec0000003a6e6f69);
  uVar5 = param_3;
  FUN_1004e3194(param_3,param_4,param_5);
  puVar8 = puVar9;
  local_80._0_4_ = (int)uVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  uVar5 = param_3;
  FUN_1004e3388(param_3,param_4,param_5);
  local_80._0_4_ = (undefined4)uVar5;
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  uVar5 = param_3;
  FUN_1004e47d0(param_3,param_4,param_5);
  local_80._0_4_ = (undefined4)uVar5;
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  uVar5 = param_3;
  FUN_1004e49c4(param_3,param_4,param_5);
  local_80._0_4_ = (undefined4)uVar5;
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x6c61635378616d20,0xea00000000003a65);
  uVar5 = param_3;
  FUN_1004e43e8(param_3,param_4,param_5);
  local_80._0_4_ = (undefined4)uVar5;
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  uVar5 = param_3;
  FUN_1004e45dc(param_3,param_4,param_5);
  local_80 = CONCAT44(local_80._4_4_,(int)uVar5);
  puVar8 = puVar9;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x3a6365646f6320,0xe700000000000000);
  uVar5 = param_3;
  uVar7 = param_4;
  FUN_1004e41c4(param_3,param_4,param_5);
  local_78 = (byte)uVar7 & 1;
  local_80 = uVar5;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c0350,puVar6,puVar2);
  __sSS6appendyySSF(0x3a72646820,0xe500000000000000);
  uVar5 = param_3;
  FUN_1004e3dac(param_3,param_4,param_5);
  bVar4 = (uVar5 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x6574617274696220,0xe90000000000003a);
  FUN_1004e37a0(param_3,param_4,param_5);
  local_80 = CONCAT44(local_80._4_4_,(int)param_3);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

