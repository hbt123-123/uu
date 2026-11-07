// rea decompile_all
// name: FUN_100706168
// address: 0x100706168
// body: available
// range: 0x100706168-0x10070625f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100706254) */

uint FUN_100706168(undefined8 ***param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_10000d5c4();
  _swift_bridgeObjectRetain(param_4);
  pppuVar2 = &local_50;
  puVar3 = PTR___sSsN_100995a28;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar2,PTR___sSsN_100995a28,PTR___sSss25LosslessStringConvertiblesWP_100995a40,
             param_1);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_10000c63c();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar2 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar1 = (uint)pppuVar2;
    }
    else {
      uVar1 = (int)puVar3 + 0x20;
    }
  }
  else {
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    uVar1 = (uint)&local_50;
    local_50 = pppuVar2;
  }
  FUN_100706260();
  _swift_bridgeObjectRelease(puVar3);
  return uVar1 & 0x1ff;
}

