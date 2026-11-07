// rea decompile_all
// name: FUN_10018510c
// address: 0x10018510c
// body: available
// range: 0x10018510c-0x100185433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018510c(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  __ss11_StringGutsV4growyySiF(0x8b);
  __sSS6appendyySSF(0x100000000000003d,0x80000001008978b0);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x746365726964202c,0xec0000003d6e6f69);
  uVar9 = 0x646e6573;
  if (*param_2 == '\0') {
    uVar9 = 0x65766965636572;
  }
  uVar1 = 0xe400000000000000;
  if (*param_2 == '\0') {
    uVar1 = 0xe700000000000000;
  }
  __sSS6appendyySSF(uVar9,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x746c75736572202c,0xe90000000000003d);
  cVar4 = param_2[1];
  uVar9 = 0xee006572756c6961;
  uVar1 = 0x466c616974726170;
  if (cVar4 != '\x01') {
    uVar9 = 0xe700000000000000;
    uVar1 = 0x6572756c696166;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar1;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar1 = uVar9;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x654472656570202c,0xef3d644965636976);
  uVar10 = *(ulong *)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  uVar8 = uVar10 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar8 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    uVar9 = 0;
    uVar10 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    uVar9 = 4;
    uVar8 = uVar3;
    FUN_10018b790(4,uVar10,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    __sSS14_fromSubstringySSSshFZ(uVar9,uVar10,uVar8,param_5);
    _swift_bridgeObjectRelease(param_5);
  }
  __sSS6appendyySSF(uVar9,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  __sSS6appendyySSF(0x736563637573202c,0xef3d746e756f4373);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar5 = PTR___sSiN_100995968;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x72756c696166202c,0xef3d746e756f4365);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

