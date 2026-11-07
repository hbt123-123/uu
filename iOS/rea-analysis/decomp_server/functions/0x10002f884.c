// rea decompile_all
// name: FUN_10002f884
// address: 0x10002f884
// body: available
// range: 0x10002f884-0x10002faa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002f884(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x70);
  __sSS6appendyySSF(0xd00000000000003a,0x800000010087ade0);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  local_78 = CONCAT44(local_78._4_4_,param_2);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x203a65707974202c,0xe800000000000000);
  uVar2 = 0;
  local_78 = param_3;
  FUN_100005c28(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,uVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x656372756f73202c,0xeb000000003a6449);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_78._0_4_ = param_4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x496b63617274202c,0xed00003a7865646e);
  local_78._0_4_ = param_5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x43726f727265202c,0xec0000003a65646f);
  local_78 = CONCAT44(local_78._4_4_,param_6);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

