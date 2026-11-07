// rea decompile_all
// name: FUN_1001e5000
// address: 0x1001e5000
// body: available
// range: 0x1001e5000-0x1001e518b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5000(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x3f);
  __sSS6appendyySSF(0x1000000000000027,0x800000010089fe40);
  if ((param_2 & 1) == 0) {
    uVar4 = *param_3;
    uVar3 = param_3[1];
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    uVar3 = 0xe90000000000003e;
    uVar4 = 0x746c75616665643c;
  }
  __sSS6appendyySSF(uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x3d6c6c65687320,0xe700000000000000);
  uVar4 = 0x6c696e;
  if (param_5 != 0) {
    uVar4 = param_4;
  }
  lVar1 = -0x1d00000000000000;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  _swift_bridgeObjectRetain(param_5);
  __sSS6appendyySSF(uVar4,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x6e6f697373657320,0xeb000000003d6449);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

