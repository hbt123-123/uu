// rea decompile_all
// name: FUN_10001dc48
// address: 0x10001dc48
// body: available
// range: 0x10001dc48-0x10001e023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001dc48(undefined8 *param_1,ulong param_2,undefined4 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,ID param_8,long param_9)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined *local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x86);
  __sSS6appendyySSF(0x1000000000000031,0x800000010087c530);
  bVar3 = (param_2 & 1) == 0;
  uVar7 = 0x505265746f6d6572;
  if (bVar3) {
    uVar7 = 0x4350586c61636f6c;
  }
  uVar10 = 0xe900000000000043;
  if (bVar3) {
    uVar10 = 0xe800000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  __sSS6appendyySSF(0x3d656c646e616820,0xe800000000000000);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,param_3);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x7473657571657220,0xeb000000003d4449);
  uVar9 = *(ulong *)(param_4 + 0xb8) >> 0x3c;
  puVar4 = (undefined *)0x0;
  if (uVar9 < 0xf) {
    puVar4 = *(undefined **)(param_4 + 0xa8);
  }
  uVar7 = 0;
  if (uVar9 < 0xf) {
    uVar7 = *(undefined8 *)(param_4 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar1 = *(ulong *)(param_4 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar7,uVar1);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_80 = puVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x70467475706e6920,0xea00000000003d73);
  puVar4 = param_5;
  uVar7 = param_6;
  FUN_100434128(param_5,param_6,param_7);
  local_78 = (byte)uVar7 & 1;
  local_80 = puVar4;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c01a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x70467475706e6920,0xef3d746e756f4373);
  FUN_1004e4bb8(param_5,param_6,param_7);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_80._0_4_ = (int)param_5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x6169746f67656e20,0xef3d737046646574);
  IVar5 = _objc_msgSend(param_8,"fps");
  local_80 = (undefined *)CONCAT44(local_80._4_4_,(int)IVar5);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6f43726f72726520,0xec0000003d736564);
  lVar11 = *(long *)(param_9 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar11 != 0) {
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fafc(0,lVar11,0);
    puVar12 = (undefined4 *)(param_9 + 0x20);
    uVar9 = *(ulong *)(local_80 + 0x10);
    do {
      uVar2 = *puVar12;
      uVar1 = uVar9 + 1;
      if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar9) {
        FUN_10006fafc(1 < *(ulong *)(local_80 + 0x18),uVar1,1);
      }
      *(ulong *)(local_80 + 0x10) = uVar1;
      *(undefined4 *)(local_80 + uVar9 * 4 + 0x20) = uVar2;
      lVar11 = lVar11 + -1;
      puVar4 = local_80;
      puVar12 = puVar12 + 0xe;
      uVar9 = uVar1;
    } while (lVar11 != 0);
  }
  puVar6 = puVar4;
  puVar8 = PTR___ss5Int32VN_100995c78;
  __sSa11descriptionSSvg(puVar4,PTR___ss5Int32VN_100995c78);
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(puVar6,puVar8);
  _swift_bridgeObjectRelease(puVar8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

