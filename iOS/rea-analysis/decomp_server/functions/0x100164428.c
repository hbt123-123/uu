// rea decompile_all
// name: FUN_100164428
// address: 0x100164428
// body: available
// range: 0x100164428-0x100164617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100164428(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5a);
  __sSS6appendyySSF(0x1000000000000017,0x8000000100893810);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x69a18ae5bbbbe42d,0xaa00000000003a64);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  local_78 = CONCAT44(local_78._4_4_,param_4);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x1000000000000019,0x8000000100893830);
  puVar2 = &DAT_100a762d0;
  local_78 = param_5;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x69ae8de6b095e62d,0xaa00000000003a64);
  local_78 = CONCAT44(local_78._4_4_,param_6);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x6eae8de6b095e62d,0xac0000003a656d61);
  __sSS6appendyySSF(param_7,param_8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

