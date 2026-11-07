// rea decompile_all
// name: FUN_1000b1dd0
// address: 0x1000b1dd0
// body: available
// range: 0x1000b1dd0-0x1000b1f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b1dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 local_50;
  long lStack_48;
  
  uVar2 = param_2;
  lVar4 = param_3;
  FUN_1000af74c(param_2);
  if (lVar4 == 0) {
    local_50 = 0;
    lStack_48 = -0x2000000000000000;
    __sSS6appendyySSF(0x6e6f697469736f70,0xe900000000000020);
    local_58 = param_2;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_58,&local_50,&DAT_1000fa498,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    lVar4 = lStack_48;
    uVar2 = local_50;
  }
  uVar3 = param_1;
  FUN_1000af74c(param_1);
  if (param_3 == 0) {
    local_50 = 0;
    lStack_48 = -0x2000000000000000;
    __sSS6appendyySSF(0x6e6f697469736f70,0xe900000000000020);
    local_58 = param_1;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_58,&local_50,&DAT_1000fa498,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    param_3 = lStack_48;
    uVar3 = local_50;
  }
  local_50 = 0;
  lStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x34);
  __sSS6appendyySSF(0xd000000000000015,0x80000001000cae70);
  __sSS6appendyySSF(uVar2,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  __sSS6appendyySSF(0xd00000000000001b,0x80000001000cae90);
  __sSS6appendyySSF(uVar3,param_3);
  _swift_bridgeObjectRelease(param_3);
  auVar1._8_8_ = lStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}

