// rea decompile_all
// name: FUN_1001d93f4
// address: 0x1001d93f4
// body: available
// range: 0x1001d93f4-0x1001d9523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d93f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x72);
  __sSS6appendyySSF(0x100000000000005d,0x800000010089f2a0);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  lVar1 = 0x1000000000000011;
  __sSS6appendyySSF(0x1000000000000011,0x800000010088bfa0);
  if (param_3 != 0) {
    FUN_1000c7b64();
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    lVar3 = *(long *)(lVar1 + 0x58);
    _swift_bridgeObjectRetain(lVar3);
    _swift_release(lVar1);
    if (lVar3 != 0) goto LAB_1001d94e4;
  }
  _swift_bridgeObjectRelease(0);
  lVar3 = -0x1d00000000000000;
  uVar4 = 0x6c696e;
LAB_1001d94e4:
  __sSS6appendyySSF(uVar4,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

