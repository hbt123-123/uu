// rea decompile_all
// name: FUN_1000fb85c
// address: 0x1000fb85c
// body: available
// range: 0x1000fb85c-0x1000fba27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000fb85c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      bVar3 = (param_2 & 0x100000000) == 0;
      uVar2 = 0x53676e697373696d;
      if (bVar3) {
        uVar2 = 0x646573726170;
      }
      uVar5 = 0xef64496e65657263;
      if (bVar3) {
        uVar5 = 0xe600000000000000;
      }
      local_50 = 0;
      local_48 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x2e);
      _swift_bridgeObjectRelease(local_48);
      local_50 = 0x676e654c73677261;
      local_48 = 0xeb000000003a6874;
      __sSS5countSivg(uVar7,uVar6);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_58 = uVar7;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x7453657372617020,0xed00003a73757461);
      __sSS6appendyySSF(uVar2,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(&DAT_d000000000000010,0x8000000100889d70);
      local_58 = CONCAT35(local_58._5_3_,(int5)param_2) & 0xffffff01ffffffff;
      puVar4 = &DAT_100a75ab0;
      FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
      __sSS10describingSSx_tclufC(&local_58,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      goto LAB_1000fba10;
    }
  }
  local_48 = 0x8000000100889d30;
  local_50 = 0xd000000000000031;
LAB_1000fba10:
  auVar8._8_8_ = local_48;
  auVar8._0_8_ = local_50;
  return auVar8;
}

