// rea decompile_all
// name: FUN_1001b0208
// address: 0x1001b0208
// body: available
// range: 0x1001b0208-0x1001b0367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b0208(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  __ss11_StringGutsV4growyySiF(0x3d);
  __sSS6appendyySSF(0x1000000000000039,0x800000010089b570);
  lVar3 = *(long *)(param_2 + 0x70);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x68);
  }
  lVar2 = -0x2000000000000000;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __ss11_StringGutsV4growyySiF(0x16);
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar3 = *(long *)(param_2 + 0x80);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
  }
  lVar2 = -0x2000000000000000;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0xd000000000000014,0x800000010089b5b0);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x800000010089b5b0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

