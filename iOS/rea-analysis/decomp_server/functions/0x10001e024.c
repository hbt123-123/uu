// rea decompile_all
// name: FUN_10001e024
// address: 0x10001e024
// body: available
// range: 0x10001e024-0x10001e17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001e024(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_70;
  byte local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x57);
  __sSS6appendyySSF(0x1000000000000049,0x800000010087c570);
  uVar4 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  local_70 = 0;
  if (uVar4 < 0xf) {
    local_70 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar4 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar4 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x70467475706e6920,0xea00000000003d73);
  FUN_100434128(param_3,param_4,param_5);
  local_68 = (byte)param_4 & 1;
  local_70 = param_3;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,&DAT_1009c01a0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

