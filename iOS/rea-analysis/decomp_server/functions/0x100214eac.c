// rea decompile_all
// name: FUN_100214eac
// address: 0x100214eac
// body: available
// range: 0x100214eac-0x1002150f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100214eac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  __ss11_StringGutsV4growyySiF(0x7f);
  __sSS6appendyySSF(0x1000000000000054,0x80000001008a4780);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(ulong *)(param_2 + 0x38);
  uVar9 = uVar8 >> 0x3c;
  uVar1 = 0;
  if (uVar9 < 0xf) {
    uVar1 = uVar4;
  }
  uVar2 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar2 = uVar8;
  }
  FUN_100040b80(uVar3,uVar4,uVar8);
  FUN_100040b80(uVar3,uVar4,uVar8);
  FUN_100006cdc(uVar1,uVar2);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  if (uVar9 < 0xf) {
    switchD_10004048c::caseD_6d(uVar3,uVar4,uVar8);
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
  }
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar5 = PTR___ss5Int32VN_100995c78;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x496b636f6c62202c,0xea00000000003d64);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x437972746572202c,0xed00003d746e756f);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

