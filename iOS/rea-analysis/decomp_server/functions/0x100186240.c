// rea decompile_all
// name: FUN_100186240
// address: 0x100186240
// body: available
// range: 0x100186240-0x1001864fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100186240(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = 0xe000000000000000;
  uVar6 = param_5;
  __ss11_StringGutsV4growyySiF(0x99);
  __sSS6appendyySSF(0x1000000000000040,0x8000000100897da0);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x746365726964202c,0xec0000003d6e6f69);
  bVar3 = (param_3 & 1) == 0;
  uVar4 = 0x646e6573;
  if (bVar3) {
    uVar4 = 0x65766965636572;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe700000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x654472656570202c,0xef3d644965636976);
  uVar2 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar2 = param_5 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    uVar4 = 4;
    uVar7 = param_5;
    FUN_10018b790(4,param_4,param_5);
    _swift_bridgeObjectRelease(param_5);
    __sSS14_fromSubstringySSSshFZ(uVar4,param_4,uVar7,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    uVar7 = param_4;
  }
  __sSS6appendyySSF(uVar4,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x614e6b736174202c,0xeb000000003d656d);
  __sSS6appendyySSF(param_6,param_7);
  __sSS6appendyySSF(&DAT_d000000000000013,0x8000000100897df0);
  __sSS6appendyySSF(param_8,param_9);
  __sSS6appendyySSF(0xd000000000000014,0x8000000100897e10);
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

