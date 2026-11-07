// rea decompile_all
// name: FUN_1001fdf94
// address: 0x1001fdf94
// body: available
// range: 0x1001fdf94-0x1001fe287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fdf94(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,ID param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x78);
  __sSS6appendyySSF(0x1000000000000031,0x80000001008a2b20);
  uVar2 = 0x505265746f6d6572;
  if (param_2 != 0) {
    uVar2 = 0x4350586c61636f6c;
  }
  uVar8 = 0xe900000000000043;
  if (param_2 != 0) {
    uVar8 = 0xe800000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(0x3d656c646e616820,0xe800000000000000);
  local_80 = CONCAT44(local_80._4_4_,param_4);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x7473657571657220,0xeb000000003d4449);
  uVar7 = *(ulong *)(param_5 + 0xb8) >> 0x3c;
  uVar2 = 0;
  if (uVar7 < 0xf) {
    uVar2 = *(undefined8 *)(param_5 + 0xa8);
  }
  uVar8 = 0;
  if (uVar7 < 0xf) {
    uVar8 = *(undefined8 *)(param_5 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar7 < 0xf) {
    uVar1 = *(ulong *)(param_5 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar8,uVar1);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_80 = uVar2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x70467475706e6920,0xea00000000003d73);
  uVar2 = param_6;
  uVar8 = param_7;
  FUN_100434128(param_6,param_7,param_8);
  local_78 = (byte)uVar8 & 1;
  local_80 = uVar2;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c01a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x70467475706e6920,0xef3d746e756f4373);
  FUN_1004e4bb8(param_6,param_7,param_8);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_80._0_4_ = (int)param_6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6169746f67656e20,0xef3d737046646574);
  IVar3 = _objc_msgSend(param_9,"fps");
  local_80 = CONCAT44(local_80._4_4_,(int)IVar3);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

