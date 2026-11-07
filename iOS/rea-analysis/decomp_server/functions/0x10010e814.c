// rea decompile_all
// name: FUN_10010e814
// address: 0x10010e814
// body: available
// range: 0x10010e814-0x10010e9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010e814(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_60;
  byte local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  __sSS6appendyySSF(0x100000000000002d,0x800000010088bff0);
  uVar1 = param_2;
  uVar3 = param_3;
  FUN_1004359b0(param_2,param_3,param_4);
  local_58 = (byte)uVar3 & 1;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_60 = uVar1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009c0230,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000011,0x800000010088bfa0);
  uVar1 = param_3;
  FUN_10043654c(param_2,param_3,param_4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x63697665648cbcef,0xac0000003d644965);
  FUN_100435bb4(param_2,param_3,param_4);
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    uVar2 = 4;
    FUN_10018b790(4,param_2,param_3);
    __sSS14_fromSubstringySSSshFZ();
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(param_3);
  }
  __sSS6appendyySSF(uVar2,param_2);
  _swift_bridgeObjectRelease(param_2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

