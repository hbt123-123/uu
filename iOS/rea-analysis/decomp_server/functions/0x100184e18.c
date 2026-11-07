// rea decompile_all
// name: FUN_100184e18
// address: 0x100184e18
// body: available
// range: 0x100184e18-0x100184fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184e18(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(100);
  __sSS6appendyySSF(0x1000000000000043,0x8000000100897810);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x746365726964202c,0xec0000003d6e6f69);
  uVar4 = 0x646e6573;
  if (*param_2 == '\0') {
    uVar4 = 0x65766965636572;
  }
  uVar1 = 0xe400000000000000;
  if (*param_2 == '\0') {
    uVar1 = 0xe700000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x654472656570202c,0xef3d644965636976);
  uVar6 = *(ulong *)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  uVar2 = uVar6 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    uVar4 = 4;
    uVar7 = uVar3;
    FUN_10018b790(4,uVar6,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    __sSS14_fromSubstringySSSshFZ(uVar4,uVar6,uVar7,param_5);
    _swift_bridgeObjectRelease(param_5);
    uVar7 = uVar6;
  }
  __sSS6appendyySSF(uVar4,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

